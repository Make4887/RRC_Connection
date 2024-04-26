/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_CarrierFreqInfo_v1310_H_
#define	_SL_CarrierFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_ResourcesInterFreq_r13;
struct SL_DiscConfigOtherInterFreq_r13;

/* SL-CarrierFreqInfo-v1310 */
typedef struct SL_CarrierFreqInfo_v1310 {
	struct SL_ResourcesInterFreq_r13	*discResourcesNonPS_r13	/* OPTIONAL */;
	struct SL_ResourcesInterFreq_r13	*discResourcesPS_r13	/* OPTIONAL */;
	struct SL_DiscConfigOtherInterFreq_r13	*discConfigOther_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CarrierFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CarrierFreqInfo_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CarrierFreqInfo_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CarrierFreqInfo_v1310_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CarrierFreqInfo_v1310_H_ */
#include <asn_internal.h>
