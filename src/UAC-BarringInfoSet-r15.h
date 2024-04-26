/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UAC_BarringInfoSet_r15_H_
#define	_UAC_BarringInfoSet_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UAC_BarringInfoSet_r15__uac_BarringFactor_r15 {
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p00	= 0,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p05	= 1,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p10	= 2,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p15	= 3,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p20	= 4,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p25	= 5,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p30	= 6,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p40	= 7,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p50	= 8,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p60	= 9,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p70	= 10,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p75	= 11,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p80	= 12,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p85	= 13,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p90	= 14,
	UAC_BarringInfoSet_r15__uac_BarringFactor_r15_p95	= 15
} e_UAC_BarringInfoSet_r15__uac_BarringFactor_r15;
typedef enum UAC_BarringInfoSet_r15__uac_BarringTime_r15 {
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s4	= 0,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s8	= 1,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s16	= 2,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s32	= 3,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s64	= 4,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s128	= 5,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s256	= 6,
	UAC_BarringInfoSet_r15__uac_BarringTime_r15_s512	= 7
} e_UAC_BarringInfoSet_r15__uac_BarringTime_r15;

/* UAC-BarringInfoSet-r15 */
typedef struct UAC_BarringInfoSet_r15 {
	long	 uac_BarringFactor_r15;
	long	 uac_BarringTime_r15;
	BIT_STRING_t	 uac_BarringForAccessIdentity_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UAC_BarringInfoSet_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_uac_BarringFactor_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uac_BarringTime_r15_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UAC_BarringInfoSet_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringInfoSet_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_UAC_BarringInfoSet_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_BarringInfoSet_r15_H_ */
#include <asn_internal.h>
