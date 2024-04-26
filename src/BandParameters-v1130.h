/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParameters_v1130_H_
#define	_BandParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParameters_v1130__supportedCSI_Proc_r11 {
	BandParameters_v1130__supportedCSI_Proc_r11_n1	= 0,
	BandParameters_v1130__supportedCSI_Proc_r11_n3	= 1,
	BandParameters_v1130__supportedCSI_Proc_r11_n4	= 2
} e_BandParameters_v1130__supportedCSI_Proc_r11;

/* BandParameters-v1130 */
typedef struct BandParameters_v1130 {
	long	 supportedCSI_Proc_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v1130_H_ */
#include <asn_internal.h>
