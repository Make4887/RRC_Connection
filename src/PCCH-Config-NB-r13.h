/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PCCH_Config_NB_r13_H_
#define	_PCCH_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_Config_NB_r13__defaultPagingCycle_r13 {
	PCCH_Config_NB_r13__defaultPagingCycle_r13_rf128	= 0,
	PCCH_Config_NB_r13__defaultPagingCycle_r13_rf256	= 1,
	PCCH_Config_NB_r13__defaultPagingCycle_r13_rf512	= 2,
	PCCH_Config_NB_r13__defaultPagingCycle_r13_rf1024	= 3
} e_PCCH_Config_NB_r13__defaultPagingCycle_r13;
typedef enum PCCH_Config_NB_r13__nB_r13 {
	PCCH_Config_NB_r13__nB_r13_fourT	= 0,
	PCCH_Config_NB_r13__nB_r13_twoT	= 1,
	PCCH_Config_NB_r13__nB_r13_oneT	= 2,
	PCCH_Config_NB_r13__nB_r13_halfT	= 3,
	PCCH_Config_NB_r13__nB_r13_quarterT	= 4,
	PCCH_Config_NB_r13__nB_r13_one8thT	= 5,
	PCCH_Config_NB_r13__nB_r13_one16thT	= 6,
	PCCH_Config_NB_r13__nB_r13_one32ndT	= 7,
	PCCH_Config_NB_r13__nB_r13_one64thT	= 8,
	PCCH_Config_NB_r13__nB_r13_one128thT	= 9,
	PCCH_Config_NB_r13__nB_r13_one256thT	= 10,
	PCCH_Config_NB_r13__nB_r13_one512thT	= 11,
	PCCH_Config_NB_r13__nB_r13_one1024thT	= 12,
	PCCH_Config_NB_r13__nB_r13_spare3	= 13,
	PCCH_Config_NB_r13__nB_r13_spare2	= 14,
	PCCH_Config_NB_r13__nB_r13_spare1	= 15
} e_PCCH_Config_NB_r13__nB_r13;
typedef enum PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13 {
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r1	= 0,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r2	= 1,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r4	= 2,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r8	= 3,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r16	= 4,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r32	= 5,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r64	= 6,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r128	= 7,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r256	= 8,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r512	= 9,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r1024	= 10,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r2048	= 11,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare4	= 12,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare3	= 13,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare2	= 14,
	PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare1	= 15
} e_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13;

/* PCCH-Config-NB-r13 */
typedef struct PCCH_Config_NB_r13 {
	long	 defaultPagingCycle_r13;
	long	 nB_r13;
	long	 npdcch_NumRepetitionPaging_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_defaultPagingCycle_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nB_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitionPaging_r13_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Config_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_Config_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Config_NB_r13_H_ */
#include <asn_internal.h>
