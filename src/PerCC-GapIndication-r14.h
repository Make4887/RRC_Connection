/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PerCC_GapIndication_r14_H_
#define	_PerCC_GapIndication_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r13.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PerCC_GapIndication_r14__gapIndication_r14 {
	PerCC_GapIndication_r14__gapIndication_r14_gap	= 0,
	PerCC_GapIndication_r14__gapIndication_r14_ncsg	= 1,
	PerCC_GapIndication_r14__gapIndication_r14_nogap_noNcsg	= 2
} e_PerCC_GapIndication_r14__gapIndication_r14;

/* PerCC-GapIndication-r14 */
typedef struct PerCC_GapIndication_r14 {
	ServCellIndex_r13_t	 servCellId_r14;
	long	 gapIndication_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PerCC_GapIndication_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gapIndication_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PerCC_GapIndication_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_PerCC_GapIndication_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_PerCC_GapIndication_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PerCC_GapIndication_r14_H_ */
#include <asn_internal.h>
