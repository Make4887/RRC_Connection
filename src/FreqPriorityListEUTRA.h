/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_FreqPriorityListEUTRA_H_
#define	_FreqPriorityListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityEUTRA;

/* FreqPriorityListEUTRA */
typedef struct FreqPriorityListEUTRA {
	A_SEQUENCE_OF(struct FreqPriorityEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityListEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_FreqPriorityListEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityListEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_FreqPriorityListEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityListEUTRA_H_ */
#include <asn_internal.h>
