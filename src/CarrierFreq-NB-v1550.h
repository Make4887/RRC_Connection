/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreq_NB_v1550_H_
#define	_CarrierFreq_NB_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreq_NB_v1550__carrierFreqOffset_v1550 {
	CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v_8dot5	= 0,
	CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v_4dot5	= 1,
	CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v3dot5	= 2,
	CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v7dot5	= 3
} e_CarrierFreq_NB_v1550__carrierFreqOffset_v1550;

/* CarrierFreq-NB-v1550 */
typedef struct CarrierFreq_NB_v1550 {
	long	 carrierFreqOffset_v1550;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreq_NB_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_carrierFreqOffset_v1550_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreq_NB_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreq_NB_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreq_NB_v1550_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreq_NB_v1550_H_ */
#include <asn_internal.h>
