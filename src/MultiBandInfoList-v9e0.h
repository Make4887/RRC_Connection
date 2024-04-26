/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MultiBandInfoList_v9e0_H_
#define	_MultiBandInfoList_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfo_v9e0;

/* MultiBandInfoList-v9e0 */
typedef struct MultiBandInfoList_v9e0 {
	A_SEQUENCE_OF(struct MultiBandInfo_v9e0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiBandInfoList_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiBandInfoList_v9e0;
extern asn_SET_OF_specifics_t asn_SPC_MultiBandInfoList_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiBandInfoList_v9e0_1[1];
extern asn_per_constraints_t asn_PER_type_MultiBandInfoList_v9e0_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiBandInfoList_v9e0_H_ */
#include <asn_internal.h>
