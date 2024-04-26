/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NPDCCH_ConfigDedicated_NB_v1530_H_
#define	_NPDCCH_ConfigDedicated_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530 {
	NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530_v96	= 0,
	NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530_v128	= 1
} e_NPDCCH_ConfigDedicated_NB_v1530__npdcch_StartSF_USS_v1530;

/* NPDCCH-ConfigDedicated-NB-v1530 */
typedef struct NPDCCH_ConfigDedicated_NB_v1530 {
	long	 npdcch_StartSF_USS_v1530;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPDCCH_ConfigDedicated_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_USS_v1530_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPDCCH_ConfigDedicated_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_NPDCCH_ConfigDedicated_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_NPDCCH_ConfigDedicated_NB_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPDCCH_ConfigDedicated_NB_v1530_H_ */
#include <asn_internal.h>
