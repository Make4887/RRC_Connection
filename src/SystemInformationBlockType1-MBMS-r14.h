/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_MBMS_r14_H_
#define	_SystemInformationBlockType1_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include "SchedulingInfoList-MBMS-r14.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "PDSCH-ConfigCommon.h"
#include "PLMN-IdentityList-MBMS-r14.h"
#include "TrackingAreaCode.h"
#include "CellIdentity.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14 {
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms1	= 0,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms2	= 1,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms5	= 2,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms10	= 3,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms15	= 4,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms20	= 5,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms40	= 6,
	SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14_ms80	= 7
} e_SystemInformationBlockType1_MBMS_r14__si_WindowLength_r14;

/* Forward declarations */
struct MultiBandInfoList_r11;
struct NonMBSFN_SubframeConfig_r14;
struct SystemInformationBlockType13_r9;
struct CellAccessRelatedInfo_r14;

/* SystemInformationBlockType1-MBMS-r14 */
typedef struct SystemInformationBlockType1_MBMS_r14 {
	struct SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfo_r14 {
		PLMN_IdentityList_MBMS_r14_t	 plmn_IdentityList_r14;
		TrackingAreaCode_t	 trackingAreaCode_r14;
		CellIdentity_t	 cellIdentity_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellAccessRelatedInfo_r14;
	FreqBandIndicator_r11_t	 freqBandIndicator_r14;
	struct MultiBandInfoList_r11	*multiBandInfoList_r14	/* OPTIONAL */;
	SchedulingInfoList_MBMS_r14_t	 schedulingInfoList_MBMS_r14;
	long	 si_WindowLength_r14;
	long	 systemInfoValueTag_r14;
	struct NonMBSFN_SubframeConfig_r14	*nonMBSFN_SubframeConfig_r14	/* OPTIONAL */;
	PDSCH_ConfigCommon_t	 pdsch_ConfigCommon_r14;
	struct SystemInformationBlockType13_r9	*systemInformationBlockType13_r14	/* OPTIONAL */;
	struct SystemInformationBlockType1_MBMS_r14__cellAccessRelatedInfoList_r14 {
		A_SEQUENCE_OF(struct CellAccessRelatedInfo_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfoList_r14;
	struct SystemInformationBlockType1_MBMS_r14__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_MBMS_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_WindowLength_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_MBMS_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_MBMS_r14_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_MBMS_r14_H_ */
#include <asn_internal.h>
