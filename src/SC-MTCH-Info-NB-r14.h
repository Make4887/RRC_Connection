/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SC_MTCH_Info_NB_r14_H_
#define	_SC_MTCH_Info_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMSSessionInfo-r13.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include "DL-CarrierConfigCommon-NB-r14.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR {
	SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR_NOTHING,	/* No components present */
	SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR_dl_CarrierConfig_r14,
	SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR_dl_CarrierIndex_r14
} SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR;
typedef enum SC_MTCH_Info_NB_r14__npdcch_NPDSCH_MaxTBS_SC_MTCH_r14 {
	SC_MTCH_Info_NB_r14__npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_n680	= 0,
	SC_MTCH_Info_NB_r14__npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_n2536	= 1
} e_SC_MTCH_Info_NB_r14__npdcch_NPDSCH_MaxTBS_SC_MTCH_r14;
typedef enum SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14 {
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r1	= 0,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r2	= 1,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r4	= 2,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r8	= 3,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r16	= 4,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r32	= 5,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r64	= 6,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r128	= 7,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r256	= 8,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r512	= 9,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r1024	= 10,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_r2048	= 11,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_spare4	= 12,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_spare3	= 13,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_spare2	= 14,
	SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14_spare1	= 15
} e_SC_MTCH_Info_NB_r14__npdcch_NumRepetitions_SC_MTCH_r14;
typedef enum SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14 {
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v1dot5	= 0,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v2	= 1,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v4	= 2,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v8	= 3,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v16	= 4,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v32	= 5,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v48	= 6,
	SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14_v64	= 7
} e_SC_MTCH_Info_NB_r14__npdcch_StartSF_SC_MTCH_r14;
typedef enum SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14 {
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_zero	= 0,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_oneEighth	= 1,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_oneQuarter	= 2,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_threeEighth	= 3,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_oneHalf	= 4,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_fiveEighth	= 5,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_threeQuarter	= 6,
	SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14_sevenEighth	= 7
} e_SC_MTCH_Info_NB_r14__npdcch_Offset_SC_MTCH_r14;

/* Forward declarations */
struct SC_MTCH_SchedulingInfo_NB_r14;

/* SC-MTCH-Info-NB-r14 */
typedef struct SC_MTCH_Info_NB_r14 {
	struct SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14 {
		SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_PR present;
		union SC_MTCH_Info_NB_r14__sc_mtch_CarrierConfig_r14_u {
			DL_CarrierConfigCommon_NB_r14_t	 dl_CarrierConfig_r14;
			long	 dl_CarrierIndex_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sc_mtch_CarrierConfig_r14;
	MBMSSessionInfo_r13_t	 mbmsSessionInfo_r14;
	BIT_STRING_t	 g_RNTI_r14;
	struct SC_MTCH_SchedulingInfo_NB_r14	*sc_mtch_SchedulingInfo_r14	/* OPTIONAL */;
	BIT_STRING_t	*sc_mtch_NeighbourCell_r14	/* OPTIONAL */;
	long	 npdcch_NPDSCH_MaxTBS_SC_MTCH_r14;
	long	 npdcch_NumRepetitions_SC_MTCH_r14;
	long	 npdcch_StartSF_SC_MTCH_r14;
	long	 npdcch_Offset_SC_MTCH_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MTCH_Info_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NPDSCH_MaxTBS_SC_MTCH_r14_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitions_SC_MTCH_r14_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_SC_MTCH_r14_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npdcch_Offset_SC_MTCH_r14_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SC_MTCH_Info_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SC_MTCH_Info_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SC_MTCH_Info_NB_r14_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _SC_MTCH_Info_NB_r14_H_ */
#include <asn_internal.h>