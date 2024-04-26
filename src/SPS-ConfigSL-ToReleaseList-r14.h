/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SPS_ConfigSL_ToReleaseList_r14_H_
#define	_SPS_ConfigSL_ToReleaseList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SPS-ConfigIndex-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SPS-ConfigSL-ToReleaseList-r14 */
typedef struct SPS_ConfigSL_ToReleaseList_r14 {
	A_SEQUENCE_OF(SPS_ConfigIndex_r14_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigSL_ToReleaseList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigSL_ToReleaseList_r14;
extern asn_SET_OF_specifics_t asn_SPC_SPS_ConfigSL_ToReleaseList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigSL_ToReleaseList_r14_1[1];
extern asn_per_constraints_t asn_PER_type_SPS_ConfigSL_ToReleaseList_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigSL_ToReleaseList_r14_H_ */
#include <asn_internal.h>
