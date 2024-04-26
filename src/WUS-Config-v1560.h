/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_WUS_Config_v1560_H_
#define	_WUS_Config_v1560_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WUS_Config_v1560__powerBoost_r15 {
	WUS_Config_v1560__powerBoost_r15_dB0	= 0,
	WUS_Config_v1560__powerBoost_r15_dB1dot8	= 1,
	WUS_Config_v1560__powerBoost_r15_dB3	= 2,
	WUS_Config_v1560__powerBoost_r15_dB4dot8	= 3
} e_WUS_Config_v1560__powerBoost_r15;

/* WUS-Config-v1560 */
typedef struct WUS_Config_v1560 {
	long	 powerBoost_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WUS_Config_v1560_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerBoost_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WUS_Config_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_WUS_Config_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_WUS_Config_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _WUS_Config_v1560_H_ */
#include <asn_internal.h>