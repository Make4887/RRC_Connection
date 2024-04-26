/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_VisitedCellInfo_r12_H_
#define	_VisitedCellInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "CellGlobalIdEUTRA.h"
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VisitedCellInfo_r12__visitedCellId_r12_PR {
	VisitedCellInfo_r12__visitedCellId_r12_PR_NOTHING,	/* No components present */
	VisitedCellInfo_r12__visitedCellId_r12_PR_cellGlobalId_r12,
	VisitedCellInfo_r12__visitedCellId_r12_PR_pci_arfcn_r12
} VisitedCellInfo_r12__visitedCellId_r12_PR;

/* VisitedCellInfo-r12 */
typedef struct VisitedCellInfo_r12 {
	struct VisitedCellInfo_r12__visitedCellId_r12 {
		VisitedCellInfo_r12__visitedCellId_r12_PR present;
		union VisitedCellInfo_r12__visitedCellId_r12_u {
			CellGlobalIdEUTRA_t	 cellGlobalId_r12;
			struct VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12 {
				PhysCellId_t	 physCellId_r12;
				ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pci_arfcn_r12;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *visitedCellId_r12;
	long	 timeSpent_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VisitedCellInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VisitedCellInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_VisitedCellInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_VisitedCellInfo_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _VisitedCellInfo_r12_H_ */
#include <asn_internal.h>
