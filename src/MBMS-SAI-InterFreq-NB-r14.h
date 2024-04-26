/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MBMS_SAI_InterFreq_NB_r14_H_
#define	_MBMS_SAI_InterFreq_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreq-NB-r13.h"
#include "MBMS-SAI-List-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalBandInfoList_NB_r14;

/* MBMS-SAI-InterFreq-NB-r14 */
typedef struct MBMS_SAI_InterFreq_NB_r14 {
	CarrierFreq_NB_r13_t	 dl_CarrierFreq_r14;
	MBMS_SAI_List_r11_t	 mbms_SAI_List_r14;
	struct AdditionalBandInfoList_NB_r14	*multiBandInfoList_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SAI_InterFreq_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreq_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MBMS_SAI_InterFreq_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_SAI_InterFreq_NB_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_SAI_InterFreq_NB_r14_H_ */
#include <asn_internal.h>
