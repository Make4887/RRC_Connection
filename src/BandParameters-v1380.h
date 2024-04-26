/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParameters_v1380_H_
#define	_BandParameters_v1380_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandParameters-v1380 */
typedef struct BandParameters_v1380 {
	long	*txAntennaSwitchDL_r13	/* OPTIONAL */;
	long	*txAntennaSwitchUL_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1380_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1380;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1380_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1380_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v1380_H_ */
#include <asn_internal.h>
