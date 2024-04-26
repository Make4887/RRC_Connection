/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportConfigSCell_r15_H_
#define	_CQI_ReportConfigSCell_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15 {
	CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15_allSubframes	= 0,
	CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15_csi_SubframeSet1	= 1,
	CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15_csi_SubframeSet2	= 2,
	CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15_spare1	= 3
} e_CQI_ReportConfigSCell_r15__altCQI_Table_1024QAM_r15;

/* Forward declarations */
struct CQI_ReportPeriodicSCell_r15;

/* CQI-ReportConfigSCell-r15 */
typedef struct CQI_ReportConfigSCell_r15 {
	struct CQI_ReportPeriodicSCell_r15	*cqi_ReportPeriodicSCell_r15	/* OPTIONAL */;
	long	*altCQI_Table_1024QAM_r15	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfigSCell_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_altCQI_Table_1024QAM_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfigSCell_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfigSCell_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfigSCell_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfigSCell_r15_H_ */
#include <asn_internal.h>
