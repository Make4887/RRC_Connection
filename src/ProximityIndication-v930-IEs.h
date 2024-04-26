/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ProximityIndication_v930_IEs_H_
#define	_ProximityIndication_v930_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProximityIndication-v930-IEs */
typedef struct ProximityIndication_v930_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct ProximityIndication_v930_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProximityIndication_v930_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProximityIndication_v930_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ProximityIndication_v930_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ProximityIndication_v930_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ProximityIndication_v930_IEs_H_ */
#include <asn_internal.h>
