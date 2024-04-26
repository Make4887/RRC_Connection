/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_V2X_FreqSelectionConfig_r15_H_
#define	_SL_V2X_FreqSelectionConfig_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-PriorityList-r13.h"
#include "SL-CBR-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-V2X-FreqSelectionConfig-r15 */
typedef struct SL_V2X_FreqSelectionConfig_r15 {
	SL_PriorityList_r13_t	 priorityList_r15;
	SL_CBR_r14_t	*threshCBR_FreqReselection_r15	/* OPTIONAL */;
	SL_CBR_r14_t	*threshCBR_FreqKeeping_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_FreqSelectionConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_FreqSelectionConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_FreqSelectionConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_FreqSelectionConfig_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_FreqSelectionConfig_r15_H_ */
#include <asn_internal.h>
