/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_HoppingConfigComm_r12_H_
#define	_SL_HoppingConfigComm_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_HoppingConfigComm_r12__numSubbands_r12 {
	SL_HoppingConfigComm_r12__numSubbands_r12_ns1	= 0,
	SL_HoppingConfigComm_r12__numSubbands_r12_ns2	= 1,
	SL_HoppingConfigComm_r12__numSubbands_r12_ns4	= 2
} e_SL_HoppingConfigComm_r12__numSubbands_r12;

/* SL-HoppingConfigComm-r12 */
typedef struct SL_HoppingConfigComm_r12 {
	long	 hoppingParameter_r12;
	long	 numSubbands_r12;
	long	 rb_Offset_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_HoppingConfigComm_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numSubbands_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_HoppingConfigComm_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_HoppingConfigComm_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_HoppingConfigComm_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_HoppingConfigComm_r12_H_ */
#include <asn_internal.h>
