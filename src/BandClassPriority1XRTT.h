/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandClassPriority1XRTT_H_
#define	_BandClassPriority1XRTT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include "CellReselectionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandClassPriority1XRTT */
typedef struct BandClassPriority1XRTT {
	BandclassCDMA2000_t	 bandClass;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassPriority1XRTT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassPriority1XRTT;
extern asn_SEQUENCE_specifics_t asn_SPC_BandClassPriority1XRTT_specs_1;
extern asn_TYPE_member_t asn_MBR_BandClassPriority1XRTT_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandClassPriority1XRTT_H_ */
#include <asn_internal.h>
