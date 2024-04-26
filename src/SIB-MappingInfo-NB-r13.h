/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SIB_MappingInfo_NB_r13_H_
#define	_SIB_MappingInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB-MappingInfo-NB-r13 */
typedef struct SIB_MappingInfo_NB_r13 {
	A_SEQUENCE_OF(SIB_Type_NB_r13_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_MappingInfo_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_MappingInfo_NB_r13;
extern asn_SET_OF_specifics_t asn_SPC_SIB_MappingInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB_MappingInfo_NB_r13_1[1];
extern asn_per_constraints_t asn_PER_type_SIB_MappingInfo_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_MappingInfo_NB_r13_H_ */
#include <asn_internal.h>