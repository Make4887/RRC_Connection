/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigDedicatedPSCell_v1370_H_
#define	_RadioResourceConfigDedicatedPSCell_v1370_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysicalConfigDedicated_v1370;

/* RadioResourceConfigDedicatedPSCell-v1370 */
typedef struct RadioResourceConfigDedicatedPSCell_v1370 {
	struct PhysicalConfigDedicated_v1370	*physicalConfigDedicatedPSCell_v1370	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedPSCell_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_v1370_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigDedicatedPSCell_v1370_H_ */
#include <asn_internal.h>
