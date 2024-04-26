/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasGapConfig_H_
#define	_MeasGapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasGapConfig_PR {
	MeasGapConfig_PR_NOTHING,	/* No components present */
	MeasGapConfig_PR_release,
	MeasGapConfig_PR_setup
} MeasGapConfig_PR;
typedef enum MeasGapConfig__setup__gapOffset_PR {
	MeasGapConfig__setup__gapOffset_PR_NOTHING,	/* No components present */
	MeasGapConfig__setup__gapOffset_PR_gp0,
	MeasGapConfig__setup__gapOffset_PR_gp1,
	/* Extensions may appear below */
	MeasGapConfig__setup__gapOffset_PR_gp2_r14,
	MeasGapConfig__setup__gapOffset_PR_gp3_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_ncsg0_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_ncsg1_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_ncsg2_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_ncsg3_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_nonUniform1_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_nonUniform2_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_nonUniform3_r14,
	MeasGapConfig__setup__gapOffset_PR_gp_nonUniform4_r14,
	MeasGapConfig__setup__gapOffset_PR_gp4_r15,
	MeasGapConfig__setup__gapOffset_PR_gp5_r15,
	MeasGapConfig__setup__gapOffset_PR_gp6_r15,
	MeasGapConfig__setup__gapOffset_PR_gp7_r15,
	MeasGapConfig__setup__gapOffset_PR_gp8_r15,
	MeasGapConfig__setup__gapOffset_PR_gp9_r15,
	MeasGapConfig__setup__gapOffset_PR_gp10_r15,
	MeasGapConfig__setup__gapOffset_PR_gp11_r15
} MeasGapConfig__setup__gapOffset_PR;

/* MeasGapConfig */
typedef struct MeasGapConfig {
	MeasGapConfig_PR present;
	union MeasGapConfig_u {
		NULL_t	 release;
		struct MeasGapConfig__setup {
			struct MeasGapConfig__setup__gapOffset {
				MeasGapConfig__setup__gapOffset_PR present;
				union MeasGapConfig__setup__gapOffset_u {
					long	 gp0;
					long	 gp1;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
					long	 gp2_r14;
					long	 gp3_r14;
					long	 gp_ncsg0_r14;
					long	 gp_ncsg1_r14;
					long	 gp_ncsg2_r14;
					long	 gp_ncsg3_r14;
					long	 gp_nonUniform1_r14;
					long	 gp_nonUniform2_r14;
					long	 gp_nonUniform3_r14;
					long	 gp_nonUniform4_r14;
					long	 gp4_r15;
					long	 gp5_r15;
					long	 gp6_r15;
					long	 gp7_r15;
					long	 gp8_r15;
					long	 gp9_r15;
					long	 gp10_r15;
					long	 gp11_r15;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gapOffset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapConfig;
extern asn_CHOICE_specifics_t asn_SPC_MeasGapConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapConfig_1[2];
extern asn_per_constraints_t asn_PER_type_MeasGapConfig_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasGapConfig_H_ */
#include <asn_internal.h>