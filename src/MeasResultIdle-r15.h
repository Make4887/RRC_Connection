/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultIdle_r15_H_
#define	_MeasResultIdle_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range-r13.h"
#include <constr_SEQUENCE.h>
#include "MeasResultIdleListEUTRA-r15.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultIdle_r15__measResultNeighCells_r15_PR {
	MeasResultIdle_r15__measResultNeighCells_r15_PR_NOTHING,	/* No components present */
	MeasResultIdle_r15__measResultNeighCells_r15_PR_measResultIdleListEUTRA_r15
	/* Extensions may appear below */
	
} MeasResultIdle_r15__measResultNeighCells_r15_PR;

/* MeasResultIdle-r15 */
typedef struct MeasResultIdle_r15 {
	struct MeasResultIdle_r15__measResultServingCell_r15 {
		RSRP_Range_t	 rsrpResult_r15;
		RSRQ_Range_r13_t	 rsrqResult_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultServingCell_r15;
	struct MeasResultIdle_r15__measResultNeighCells_r15 {
		MeasResultIdle_r15__measResultNeighCells_r15_PR present;
		union MeasResultIdle_r15__measResultNeighCells_r15_u {
			MeasResultIdleListEUTRA_r15_t	 measResultIdleListEUTRA_r15;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultIdle_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultIdle_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultIdle_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultIdle_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultIdle_r15_H_ */
#include <asn_internal.h>
