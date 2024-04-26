/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReject_v1320_IEs_H_
#define	_RRCConnectionReject_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13 {
	RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13_true	= 0
} e_RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13;

/* RRCConnectionReject-v1320-IEs */
typedef struct RRCConnectionReject_v1320_IEs {
	long	*rrc_SuspendIndication_r13	/* OPTIONAL */;
	struct RRCConnectionReject_v1320_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v1320_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rrc_SuspendIndication_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_v1320_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_v1320_IEs_H_ */
#include <asn_internal.h>
