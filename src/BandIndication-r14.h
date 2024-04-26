/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandIndication_r14_H_
#define	_BandIndication_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include "CA-BandwidthClass-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandIndication-r14 */
typedef struct BandIndication_r14 {
	FreqBandIndicator_r11_t	 bandEUTRA_r14;
	CA_BandwidthClass_r10_t	 ca_BandwidthClassDL_r14;
	CA_BandwidthClass_r10_t	*ca_BandwidthClassUL_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandIndication_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandIndication_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_BandIndication_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_BandIndication_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BandIndication_r14_H_ */
#include <asn_internal.h>
