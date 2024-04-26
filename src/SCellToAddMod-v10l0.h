/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SCellToAddMod_v10l0_H_
#define	_SCellToAddMod_v10l0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigCommonSCell_v10l0;

/* SCellToAddMod-v10l0 */
typedef struct SCellToAddMod_v10l0 {
	struct RadioResourceConfigCommonSCell_v10l0	*radioResourceConfigCommonSCell_v10l0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddMod_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_v10l0;
extern asn_SEQUENCE_specifics_t asn_SPC_SCellToAddMod_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddMod_v10l0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SCellToAddMod_v10l0_H_ */
#include <asn_internal.h>
