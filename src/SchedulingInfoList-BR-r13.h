/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingInfoList_BR_r13_H_
#define	_SchedulingInfoList_BR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingInfo_BR_r13;

/* SchedulingInfoList-BR-r13 */
typedef struct SchedulingInfoList_BR_r13 {
	A_SEQUENCE_OF(struct SchedulingInfo_BR_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfoList_BR_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfoList_BR_r13;
extern asn_SET_OF_specifics_t asn_SPC_SchedulingInfoList_BR_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfoList_BR_r13_1[1];
extern asn_per_constraints_t asn_PER_type_SchedulingInfoList_BR_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfoList_BR_r13_H_ */
#include <asn_internal.h>
