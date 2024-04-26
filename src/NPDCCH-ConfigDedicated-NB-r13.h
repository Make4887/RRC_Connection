/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NPDCCH_ConfigDedicated_NB_r13_H_
#define	_NPDCCH_ConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13 {
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r1	= 0,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r2	= 1,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r4	= 2,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r8	= 3,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r16	= 4,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r32	= 5,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r64	= 6,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r128	= 7,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r256	= 8,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r512	= 9,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r1024	= 10,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_r2048	= 11,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_spare4	= 12,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_spare3	= 13,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_spare2	= 14,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13_spare1	= 15
} e_NPDCCH_ConfigDedicated_NB_r13__npdcch_NumRepetitions_r13;
typedef enum NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13 {
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v1dot5	= 0,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v2	= 1,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v4	= 2,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v8	= 3,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v16	= 4,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v32	= 5,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v48	= 6,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13_v64	= 7
} e_NPDCCH_ConfigDedicated_NB_r13__npdcch_StartSF_USS_r13;
typedef enum NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13 {
	NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13_zero	= 0,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13_oneEighth	= 1,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13_oneFourth	= 2,
	NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13_threeEighth	= 3
} e_NPDCCH_ConfigDedicated_NB_r13__npdcch_Offset_USS_r13;

/* NPDCCH-ConfigDedicated-NB-r13 */
typedef struct NPDCCH_ConfigDedicated_NB_r13 {
	long	 npdcch_NumRepetitions_r13;
	long	 npdcch_StartSF_USS_r13;
	long	 npdcch_Offset_USS_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPDCCH_ConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitions_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_USS_r13_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_Offset_USS_r13_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPDCCH_ConfigDedicated_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_NPDCCH_ConfigDedicated_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_NPDCCH_ConfigDedicated_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NPDCCH_ConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
