/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParametersRxSL_r14_H_
#define	_BandParametersRxSL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2X-BandwidthClassSL-r14.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandParametersRxSL_r14__v2x_HighReception_r14 {
	BandParametersRxSL_r14__v2x_HighReception_r14_supported	= 0
} e_BandParametersRxSL_r14__v2x_HighReception_r14;

/* BandParametersRxSL-r14 */
typedef struct BandParametersRxSL_r14 {
	V2X_BandwidthClassSL_r14_t	 v2x_BandwidthClassRxSL_r14;
	long	*v2x_HighReception_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParametersRxSL_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_HighReception_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandParametersRxSL_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParametersRxSL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParametersRxSL_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParametersRxSL_r14_H_ */
#include <asn_internal.h>
