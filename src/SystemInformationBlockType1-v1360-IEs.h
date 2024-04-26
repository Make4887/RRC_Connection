/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_v1360_IEs_H_
#define	_SystemInformationBlockType1_v1360_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectionInfoCE1_v1360;
struct SystemInformationBlockType1_v1430_IEs;

/* SystemInformationBlockType1-v1360-IEs */
typedef struct SystemInformationBlockType1_v1360_IEs {
	struct CellSelectionInfoCE1_v1360	*cellSelectionInfoCE1_v1360	/* OPTIONAL */;
	struct SystemInformationBlockType1_v1430_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1360_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1360_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1360_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1360_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_v1360_IEs_H_ */
#include <asn_internal.h>
