/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UL_DelayConfig_r13_H_
#define	_UL_DelayConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DelayConfig_r13_PR {
	UL_DelayConfig_r13_PR_NOTHING,	/* No components present */
	UL_DelayConfig_r13_PR_release,
	UL_DelayConfig_r13_PR_setup
} UL_DelayConfig_r13_PR;
typedef enum UL_DelayConfig_r13__setup__delayThreshold_r13 {
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms30	= 0,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms40	= 1,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms50	= 2,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms60	= 3,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms70	= 4,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms80	= 5,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms90	= 6,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms100	= 7,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms150	= 8,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms300	= 9,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms500	= 10,
	UL_DelayConfig_r13__setup__delayThreshold_r13_ms750	= 11,
	UL_DelayConfig_r13__setup__delayThreshold_r13_spare4	= 12,
	UL_DelayConfig_r13__setup__delayThreshold_r13_spare3	= 13,
	UL_DelayConfig_r13__setup__delayThreshold_r13_spare2	= 14,
	UL_DelayConfig_r13__setup__delayThreshold_r13_spare1	= 15
} e_UL_DelayConfig_r13__setup__delayThreshold_r13;

/* UL-DelayConfig-r13 */
typedef struct UL_DelayConfig_r13 {
	UL_DelayConfig_r13_PR present;
	union UL_DelayConfig_r13_u {
		NULL_t	 release;
		struct UL_DelayConfig_r13__setup {
			long	 delayThreshold_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DelayConfig_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_delayThreshold_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_DelayConfig_r13;
extern asn_CHOICE_specifics_t asn_SPC_UL_DelayConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_DelayConfig_r13_1[2];
extern asn_per_constraints_t asn_PER_type_UL_DelayConfig_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DelayConfig_r13_H_ */
#include <asn_internal.h>
