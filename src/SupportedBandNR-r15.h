/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedBandNR_r15_H_
#define	_SupportedBandNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicatorNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandNR-r15 */
typedef struct SupportedBandNR_r15 {
	FreqBandIndicatorNR_r15_t	 bandNR_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedBandNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedBandNR_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandNR_r15_H_ */
#include <asn_internal.h>
