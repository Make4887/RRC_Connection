/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfigurationComplete_NB_H_
#define	_RRCConnectionReconfigurationComplete_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionReconfigurationComplete-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR {
	RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR_rrcConnectionReconfigurationComplete_r13,
	RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR;

/* RRCConnectionReconfigurationComplete-NB */
typedef struct RRCConnectionReconfigurationComplete_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReconfigurationComplete_NB__criticalExtensions {
		RRCConnectionReconfigurationComplete_NB__criticalExtensions_PR present;
		union RRCConnectionReconfigurationComplete_NB__criticalExtensions_u {
			RRCConnectionReconfigurationComplete_NB_r13_IEs_t	 rrcConnectionReconfigurationComplete_r13;
			struct RRCConnectionReconfigurationComplete_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_NB_H_ */
#include <asn_internal.h>
