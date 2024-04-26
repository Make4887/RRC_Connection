/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_Config_v1480_H_
#define	_CSI_RS_Config_v1480_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_RS_ConfigEMIMO_v1480;

/* CSI-RS-Config-v1480 */
typedef struct CSI_RS_Config_v1480 {
	struct CSI_RS_ConfigEMIMO_v1480	*eMIMO_Type_v1480	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_Config_v1480_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_Config_v1480;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_Config_v1480_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_Config_v1480_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_Config_v1480_H_ */
#include <asn_internal.h>
