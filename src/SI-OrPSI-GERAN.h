/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SI_OrPSI_GERAN_H_
#define	_SI_OrPSI_GERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemInfoListGERAN.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SI_OrPSI_GERAN_PR {
	SI_OrPSI_GERAN_PR_NOTHING,	/* No components present */
	SI_OrPSI_GERAN_PR_si,
	SI_OrPSI_GERAN_PR_psi
} SI_OrPSI_GERAN_PR;

/* SI-OrPSI-GERAN */
typedef struct SI_OrPSI_GERAN {
	SI_OrPSI_GERAN_PR present;
	union SI_OrPSI_GERAN_u {
		SystemInfoListGERAN_t	 si;
		SystemInfoListGERAN_t	 psi;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SI_OrPSI_GERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SI_OrPSI_GERAN;
extern asn_CHOICE_specifics_t asn_SPC_SI_OrPSI_GERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_SI_OrPSI_GERAN_1[2];
extern asn_per_constraints_t asn_PER_type_SI_OrPSI_GERAN_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SI_OrPSI_GERAN_H_ */
#include <asn_internal.h>
