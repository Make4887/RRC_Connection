/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UL_256QAM_perCC_Info_r14_H_
#define	_UL_256QAM_perCC_Info_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_256QAM_perCC_Info_r14__ul_256QAM_perCC_r14 {
	UL_256QAM_perCC_Info_r14__ul_256QAM_perCC_r14_supported	= 0
} e_UL_256QAM_perCC_Info_r14__ul_256QAM_perCC_r14;

/* UL-256QAM-perCC-Info-r14 */
typedef struct UL_256QAM_perCC_Info_r14 {
	long	*ul_256QAM_perCC_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_256QAM_perCC_Info_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_256QAM_perCC_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_256QAM_perCC_Info_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_256QAM_perCC_Info_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_256QAM_perCC_Info_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_256QAM_perCC_Info_r14_H_ */
#include <asn_internal.h>
