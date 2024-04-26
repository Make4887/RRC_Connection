#include <stdio.h>
#include <sys/types.h>

#include <Connection_coder.h>
#include <unistd.h>

int main() {
    uint8_t *buffer;
    ssize_t len;

    // cli -> serv : RRCConnectionRequest
    rx_receive(&buffer, &len, 50301);
    free(buffer);

    usleep(100);
    // serv -> cli : RRCConnectionSetup
    RRCConnectionSetup_coder(&buffer, &len);
    tx_send(&buffer, &len, 50302);
    free(buffer);
    
    // cli -> serv : RRCConnectionSetupComplete
    rx_receive(&buffer, &len, 50301);
    free(buffer);
    
    return 0;
}
