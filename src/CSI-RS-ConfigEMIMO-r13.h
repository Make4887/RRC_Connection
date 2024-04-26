/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigEMIMO_r13_H_
#define	_CSI_RS_ConfigEMIMO_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CSI-RS-ConfigNonPrecoded-r13.h"
#include "CSI-RS-ConfigBeamformed-r13.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigEMIMO_r13_PR {
	CSI_RS_ConfigEMIMO_r13_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigEMIMO_r13_PR_release,
	CSI_RS_ConfigEMIMO_r13_PR_setup
} CSI_RS_ConfigEMIMO_r13_PR;
typedef enum CSI_RS_ConfigEMIMO_r13__setup_PR {
	CSI_RS_ConfigEMIMO_r13__setup_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigEMIMO_r13__setup_PR_nonPrecoded_r13,
	CSI_RS_ConfigEMIMO_r13__setup_PR_beamformed_r13
} CSI_RS_ConfigEMIMO_r13__setup_PR;

/* CSI-RS-ConfigEMIMO-r13 */
typedef struct CSI_RS_ConfigEMIMO_r13 {
	CSI_RS_ConfigEMIMO_r13_PR present;
	union CSI_RS_ConfigEMIMO_r13_u {
		NULL_t	 release;
		struct CSI_RS_ConfigEMIMO_r13__setup {
			CSI_RS_ConfigEMIMO_r13__setup_PR present;
			union CSI_RS_ConfigEMIMO_r13__setup_u {
				CSI_RS_ConfigNonPrecoded_r13_t	 nonPrecoded_r13;
				CSI_RS_ConfigBeamformed_r13_t	 beamformed_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigEMIMO_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigEMIMO_r13;
extern asn_CHOICE_specifics_t asn_SPC_CSI_RS_ConfigEMIMO_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigEMIMO_r13_1[2];
extern asn_per_constraints_t asn_PER_type_CSI_RS_ConfigEMIMO_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigEMIMO_r13_H_ */
#include <asn_internal.h>
