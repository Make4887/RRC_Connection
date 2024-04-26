#include "Connection_coder.h"

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>
#include <RRCConnectionSetupComplete.h>
#include <arpa/inet.h>
#include <conversions.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define PAYLOAD_MAX 100

#define asn1cSeqAdd(VaR, PtR) \
    if (asn_sequence_add(VaR, PtR) != 0) assert(0)

void RRCConnectionRequest_coder(uint8_t **buffer, ssize_t *len) {
    
    RRCConnectionRequest_t *request;
    request = (RRCConnectionRequest_t*)calloc(1, sizeof(RRCConnectionRequest_t));

    request -> criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_randomValue;

    uint8_t *values = (uint8_t*)calloc(40, 1);

    for (int i = 0; i < 40; i++){
        values[i] = i;
    }

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf = values;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size = 40;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.bits_unused = 0;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.establishmentCause = EstablishmentCause_emergency;

    uint8_t *spare = (uint8_t*)calloc(1, 1);
    *spare = 0;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf = spare;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.size = 1;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.bits_unused = 0;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, request);
    printf("%d\n", sizeof(res));
    printf("%d\n", strlen(res.buffer));
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_OER, &asn_DEF_RRCConnectionRequest, request);
    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc request\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded request\n");
    }

    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, request);
}


void RRCConnectionSetup_coder(uint8_t **buffer, ssize_t *len) {
    RRCConnectionSetup_t *setup;
    setup = (RRCConnectionSetup_t*)calloc(1, sizeof(RRCConnectionSetup_t));

    setup->rrc_TransactionIdentifier = 2; 

    setup->criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;

    setup->criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_spare1;

    setup->criticalExtensions.choice.c1.choice.spare1 = NULL;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, setup);
    printf("%d\n", sizeof(res));
    printf("%d\n", strlen(res.buffer));
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_OER, &asn_DEF_RRCConnectionSetup, setup);
    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc setup\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded setup\n");
    }

    xer_fprint(stdout, &asn_DEF_RRCConnectionSetup, setup);
}


void RRCConnectionSetupComplete_coder(uint8_t **buffer, ssize_t *len) {
    RRCConnectionSetupComplete_t *setup_complete;
    setup_complete = (RRCConnectionSetupComplete_t*)calloc(1, sizeof(RRCConnectionSetupComplete_t));

    setup_complete->rrc_TransactionIdentifier = 2;

    setup_complete->criticalExtensions.present = RRCConnectionSetupComplete__criticalExtensions_PR_c1;

    setup_complete->criticalExtensions.choice.c1.present = RRCConnectionSetupComplete__criticalExtensions__c1_PR_spare2;

    setup_complete->criticalExtensions.choice.c1.choice.spare2 = NULL;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetupComplete, setup_complete);
    printf("%d\n", sizeof(res));
    printf("%d\n", strlen(res.buffer));
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_OER, &asn_DEF_RRCConnectionSetupComplete, setup_complete);
    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc setup_complete\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded setup_complete\n");
    }

    xer_fprint(stdout, &asn_DEF_RRCConnectionSetupComplete, setup_complete);
}

void tx_send(uint8_t **buffer, ssize_t *len, uint16_t port) {
    struct sockaddr_in servaddr = {
        .sin_family = AF_INET,
        .sin_port = htons(port),
        .sin_addr.s_addr = inet_addr("127.0.0.1"),
    };

    int sockfd;

    sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);
    if (sockfd < 0) {
        printf("Error when opening socket\n");
        exit(1);
    }

    int ret = connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
    if (ret < 0) {
        printf("Error when connecting socket\n");
        exit(1);
    }

    ret = sctp_sendmsg(sockfd, *buffer, *len, NULL, 0, 0, 0, 0, 0, 0);
    if (ret < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }

    printf("Sent packet\n");

    close(sockfd);
}

void rx_receive(uint8_t **buffer, ssize_t *len, uint16_t port) {
    struct sockaddr_in servaddr = {
        .sin_family = AF_INET,
        .sin_port = htons(port),
        .sin_addr.s_addr = inet_addr("127.0.0.1"),
    };

    *buffer = (uint8_t *)calloc(1, sizeof(uint8_t));

    int sockfd = socket(AF_INET, SOCK_SEQPACKET, IPPROTO_SCTP);
    if (sockfd < 0) {
        printf("Error when opening the socket\n");
        exit(1);
    }

    int bind_err = bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
    if (bind_err < 0) {
        printf("Error when binding to the socket\n");
        exit(1);
    }

    int listen_err = listen(sockfd, 2);
    if (listen_err < 0) {
        printf("Error when listening to the socket\n");
        exit(1);
    }

    int received_err = sctp_recvmsg(sockfd, *buffer, *len, NULL, NULL, 0, 0);
    if (received_err < 0) {
        printf("Error when receiving msg\n");
        exit(1);
    }

    printf("Received packet\n");

    close(sockfd);
}