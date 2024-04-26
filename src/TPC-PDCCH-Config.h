/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TPC_PDCCH_Config_H_
#define	_TPC_PDCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BIT_STRING.h>
#include "TPC-Index.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TPC_PDCCH_Config_PR {
	TPC_PDCCH_Config_PR_NOTHING,	/* No components present */
	TPC_PDCCH_Config_PR_release,
	TPC_PDCCH_Config_PR_setup
} TPC_PDCCH_Config_PR;

/* TPC-PDCCH-Config */
typedef struct TPC_PDCCH_Config {
	TPC_PDCCH_Config_PR present;
	union TPC_PDCCH_Config_u {
		NULL_t	 release;
		struct TPC_PDCCH_Config__setup {
			BIT_STRING_t	 tpc_RNTI;
			TPC_Index_t	 tpc_Index;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TPC_PDCCH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TPC_PDCCH_Config;
extern asn_CHOICE_specifics_t asn_SPC_TPC_PDCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_TPC_PDCCH_Config_1[2];
extern asn_per_constraints_t asn_PER_type_TPC_PDCCH_Config_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TPC_PDCCH_Config_H_ */
#include <asn_internal.h>
