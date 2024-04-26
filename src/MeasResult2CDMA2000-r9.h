/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResult2CDMA2000_r9_H_
#define	_MeasResult2CDMA2000_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreqCDMA2000.h"
#include "MeasResultsCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResult2CDMA2000-r9 */
typedef struct MeasResult2CDMA2000_r9 {
	CarrierFreqCDMA2000_t	 carrierFreq_r9;
	MeasResultsCDMA2000_t	 measResultList_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResult2CDMA2000_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResult2CDMA2000_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResult2CDMA2000_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResult2CDMA2000_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResult2CDMA2000_r9_H_ */
#include <asn_internal.h>
