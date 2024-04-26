/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportConfig_r10_H_
#define	_CQI_ReportConfig_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <NULL.h>
#include "MeasSubframePattern-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfig_r10__pmi_RI_Report_r9 {
	CQI_ReportConfig_r10__pmi_RI_Report_r9_setup	= 0
} e_CQI_ReportConfig_r10__pmi_RI_Report_r9;
typedef enum CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR {
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_NOTHING,	/* No components present */
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_release,
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_setup
} CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR;

/* Forward declarations */
struct CQI_ReportAperiodic_r10;
struct CQI_ReportPeriodic_r10;

/* CQI-ReportConfig-r10 */
typedef struct CQI_ReportConfig_r10 {
	struct CQI_ReportAperiodic_r10	*cqi_ReportAperiodic_r10	/* OPTIONAL */;
	long	 nomPDSCH_RS_EPRE_Offset;
	struct CQI_ReportPeriodic_r10	*cqi_ReportPeriodic_r10	/* OPTIONAL */;
	long	*pmi_RI_Report_r9	/* OPTIONAL */;
	struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10 {
		CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR present;
		union CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_u {
			NULL_t	 release;
			struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup {
				MeasSubframePattern_r10_t	 csi_MeasSubframeSet1_r10;
				MeasSubframePattern_r10_t	 csi_MeasSubframeSet2_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_SubframePatternConfig_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r9_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfig_r10_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_r10_H_ */
#include <asn_internal.h>
