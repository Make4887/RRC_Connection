/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfiguration_v1430_IEs_H_
#define	_RRCConnectionReconfiguration_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration_v1430_IEs__perCC_GapIndicationRequest_r14 {
	RRCConnectionReconfiguration_v1430_IEs__perCC_GapIndicationRequest_r14_true	= 0
} e_RRCConnectionReconfiguration_v1430_IEs__perCC_GapIndicationRequest_r14;

/* Forward declarations */
struct SL_V2X_ConfigDedicated_r14;
struct SCellToAddModListExt_v1430;
struct RRCConnectionReconfiguration_v1510_IEs;

/* RRCConnectionReconfiguration-v1430-IEs */
typedef struct RRCConnectionReconfiguration_v1430_IEs {
	struct SL_V2X_ConfigDedicated_r14	*sl_V2X_ConfigDedicated_r14	/* OPTIONAL */;
	struct SCellToAddModListExt_v1430	*sCellToAddModListExt_v1430	/* OPTIONAL */;
	long	*perCC_GapIndicationRequest_r14	/* OPTIONAL */;
	OCTET_STRING_t	*systemInformationBlockType2Dedicated_r14	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1510_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_perCC_GapIndicationRequest_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1430_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v1430_IEs_H_ */
#include <asn_internal.h>
