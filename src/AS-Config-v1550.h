/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AS_Config_v1550_H_
#define	_AS_Config_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include "P-Max.h"
#include "SubframeAssignment-r15.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AS-Config-v1550 */
typedef struct AS_Config_v1550 {
	struct AS_Config_v1550__tdm_PatternConfig_r15 {
		SubframeAssignment_r15_t	 subframeAssignment_r15;
		long	 harq_Offset_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdm_PatternConfig_r15;
	P_Max_t	*p_MaxEUTRA_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_v1550_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_Config_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_Config_v1550_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Config_v1550_H_ */
#include <asn_internal.h>
