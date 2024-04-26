/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_PSSCH_TxParameters_r14_H_
#define	_SL_PSSCH_TxParameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14 {
	SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14_n0	= 0,
	SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14_n1	= 1,
	SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14_both	= 2,
	SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14_spare1	= 3
} e_SL_PSSCH_TxParameters_r14__allowedRetxNumberPSSCH_r14;

/* Forward declarations */
struct SL_TxPower_r14;

/* SL-PSSCH-TxParameters-r14 */
typedef struct SL_PSSCH_TxParameters_r14 {
	long	 minMCS_PSSCH_r14;
	long	 maxMCS_PSSCH_r14;
	long	 minSubChannel_NumberPSSCH_r14;
	long	 maxSubchannel_NumberPSSCH_r14;
	long	 allowedRetxNumberPSSCH_r14;
	struct SL_TxPower_r14	*maxTxPower_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PSSCH_TxParameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_allowedRetxNumberPSSCH_r14_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PSSCH_TxParameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PSSCH_TxParameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PSSCH_TxParameters_r14_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PSSCH_TxParameters_r14_H_ */
#include <asn_internal.h>
