/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigBeamformed_v1430_H_
#define	_CSI_RS_ConfigBeamformed_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_RS_Config_NZP_v1430;
struct CSI_RS_ConfigNZP_Activation_r14;
struct CSI_RS_ConfigNZP_r11;

/* CSI-RS-ConfigBeamformed-v1430 */
typedef struct CSI_RS_ConfigBeamformed_v1430 {
	struct CSI_RS_ConfigBeamformed_v1430__csi_RS_ConfigNZP_ApList_r14 {
		A_SEQUENCE_OF(struct CSI_RS_ConfigNZP_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_RS_ConfigNZP_ApList_r14;
	struct CSI_RS_Config_NZP_v1430	*nzp_ResourceConfigOriginal_v1430	/* OPTIONAL */;
	struct CSI_RS_ConfigNZP_Activation_r14	*csi_RS_NZP_Activation_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigBeamformed_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigBeamformed_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigBeamformed_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigBeamformed_v1430_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigBeamformed_v1430_H_ */
#include <asn_internal.h>
