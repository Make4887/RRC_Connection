/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PreconfigDiscPool_r13_H_
#define	_SL_PreconfigDiscPool_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "SL-TF-ResourceConfig-r12.h"
#include "P0-SL-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PreconfigDiscPool_r13__discPeriod_r13 {
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf4	= 0,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf6	= 1,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf7	= 2,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf8	= 3,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf12	= 4,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf14	= 5,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf16	= 6,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf24	= 7,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf28	= 8,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf32	= 9,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf64	= 10,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf128	= 11,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf256	= 12,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf512	= 13,
	SL_PreconfigDiscPool_r13__discPeriod_r13_rf1024	= 14,
	SL_PreconfigDiscPool_r13__discPeriod_r13_spare	= 15
} e_SL_PreconfigDiscPool_r13__discPeriod_r13;
typedef enum SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13 {
	SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p25	= 0,
	SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p50	= 1,
	SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p75	= 2,
	SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p100	= 3
} e_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13;

/* SL-PreconfigDiscPool-r13 */
typedef struct SL_PreconfigDiscPool_r13 {
	SL_CP_Len_r12_t	 cp_Len_r13;
	long	 discPeriod_r13;
	long	 numRetx_r13;
	long	 numRepetition_r13;
	SL_TF_ResourceConfig_r12_t	 tf_ResourceConfig_r13;
	struct SL_PreconfigDiscPool_r13__txParameters_r13 {
		P0_SL_r12_t	 txParametersGeneral_r13;
		long	 txProbability_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PreconfigDiscPool_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discPeriod_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_txProbability_r13_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PreconfigDiscPool_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigDiscPool_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PreconfigDiscPool_r13_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PreconfigDiscPool_r13_H_ */
#include <asn_internal.h>
