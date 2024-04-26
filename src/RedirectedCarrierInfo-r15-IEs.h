/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RedirectedCarrierInfo_r15_IEs_H_
#define	_RedirectedCarrierInfo_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "CarrierFreqsGERAN.h"
#include "ARFCN-ValueUTRA.h"
#include "CarrierFreqCDMA2000.h"
#include "CarrierFreqListUTRA-TDD-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RedirectedCarrierInfo_r15_IEs_PR {
	RedirectedCarrierInfo_r15_IEs_PR_NOTHING,	/* No components present */
	RedirectedCarrierInfo_r15_IEs_PR_eutra_r15,
	RedirectedCarrierInfo_r15_IEs_PR_geran_r15,
	RedirectedCarrierInfo_r15_IEs_PR_utra_FDD_r15,
	RedirectedCarrierInfo_r15_IEs_PR_cdma2000_HRPD_r15,
	RedirectedCarrierInfo_r15_IEs_PR_cdma2000_1xRTT_r15,
	RedirectedCarrierInfo_r15_IEs_PR_utra_TDD_r15
} RedirectedCarrierInfo_r15_IEs_PR;

/* RedirectedCarrierInfo-r15-IEs */
typedef struct RedirectedCarrierInfo_r15_IEs {
	RedirectedCarrierInfo_r15_IEs_PR present;
	union RedirectedCarrierInfo_r15_IEs_u {
		ARFCN_ValueEUTRA_r9_t	 eutra_r15;
		CarrierFreqsGERAN_t	 geran_r15;
		ARFCN_ValueUTRA_t	 utra_FDD_r15;
		CarrierFreqCDMA2000_t	 cdma2000_HRPD_r15;
		CarrierFreqCDMA2000_t	 cdma2000_1xRTT_r15;
		CarrierFreqListUTRA_TDD_r10_t	 utra_TDD_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedirectedCarrierInfo_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_r15_IEs;
extern asn_CHOICE_specifics_t asn_SPC_RedirectedCarrierInfo_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_r15_IEs_1[6];
extern asn_per_constraints_t asn_PER_type_RedirectedCarrierInfo_r15_IEs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RedirectedCarrierInfo_r15_IEs_H_ */
#include <asn_internal.h>
