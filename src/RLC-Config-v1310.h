/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RLC_Config_v1310_H_
#define	_RLC_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "PollPDU-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Config-v1310 */
typedef struct RLC_Config_v1310 {
	BOOLEAN_t	 ul_extended_RLC_AM_SN_r13;
	BOOLEAN_t	 dl_extended_RLC_AM_SN_r13;
	PollPDU_v1310_t	*pollPDU_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1310_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1310_H_ */
#include <asn_internal.h>