/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultCDMA2000_H_
#define	_MeasResultCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellIdCDMA2000.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellGlobalIdCDMA2000;

/* MeasResultCDMA2000 */
typedef struct MeasResultCDMA2000 {
	PhysCellIdCDMA2000_t	 physCellId;
	struct CellGlobalIdCDMA2000	*cgi_Info	/* OPTIONAL */;
	struct MeasResultCDMA2000__measResult {
		long	*pilotPnPhase	/* OPTIONAL */;
		long	 pilotStrength;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultCDMA2000_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCDMA2000_H_ */
#include <asn_internal.h>
