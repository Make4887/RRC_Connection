/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RSRQ_RangeConfig_r12_H_
#define	_RSRQ_RangeConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "RSRQ-Range-v1250.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSRQ_RangeConfig_r12_PR {
	RSRQ_RangeConfig_r12_PR_NOTHING,	/* No components present */
	RSRQ_RangeConfig_r12_PR_release,
	RSRQ_RangeConfig_r12_PR_setup
} RSRQ_RangeConfig_r12_PR;

/* RSRQ-RangeConfig-r12 */
typedef struct RSRQ_RangeConfig_r12 {
	RSRQ_RangeConfig_r12_PR present;
	union RSRQ_RangeConfig_r12_u {
		NULL_t	 release;
		RSRQ_Range_v1250_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RSRQ_RangeConfig_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RSRQ_RangeConfig_r12;
extern asn_CHOICE_specifics_t asn_SPC_RSRQ_RangeConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RSRQ_RangeConfig_r12_1[2];
extern asn_per_constraints_t asn_PER_type_RSRQ_RangeConfig_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RSRQ_RangeConfig_r12_H_ */
#include <asn_internal.h>
