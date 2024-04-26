/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PDCP_ParametersNR_v1560_H_
#define	_PDCP_ParametersNR_v1560_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_ParametersNR_v1560__ims_VoNR_PDCP_SCG_NGENDC_r15 {
	PDCP_ParametersNR_v1560__ims_VoNR_PDCP_SCG_NGENDC_r15_supported	= 0
} e_PDCP_ParametersNR_v1560__ims_VoNR_PDCP_SCG_NGENDC_r15;

/* PDCP-ParametersNR-v1560 */
typedef struct PDCP_ParametersNR_v1560 {
	long	*ims_VoNR_PDCP_SCG_NGENDC_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_ParametersNR_v1560_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ims_VoNR_PDCP_SCG_NGENDC_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_ParametersNR_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_ParametersNR_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_ParametersNR_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_ParametersNR_v1560_H_ */
#include <asn_internal.h>
