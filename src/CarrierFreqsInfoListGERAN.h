/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreqsInfoListGERAN_H_
#define	_CarrierFreqsInfoListGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqsInfoGERAN;

/* CarrierFreqsInfoListGERAN */
typedef struct CarrierFreqsInfoListGERAN {
	A_SEQUENCE_OF(struct CarrierFreqsInfoGERAN) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqsInfoListGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqsInfoListGERAN;
extern asn_SET_OF_specifics_t asn_SPC_CarrierFreqsInfoListGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqsInfoListGERAN_1[1];
extern asn_per_constraints_t asn_PER_type_CarrierFreqsInfoListGERAN_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqsInfoListGERAN_H_ */
#include <asn_internal.h>
