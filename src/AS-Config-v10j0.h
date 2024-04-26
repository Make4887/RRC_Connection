/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AS_Config_v10j0_H_
#define	_AS_Config_v10j0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AntennaInfoDedicated_v10i0;

/* AS-Config-v10j0 */
typedef struct AS_Config_v10j0 {
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPCell_v10i0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_v10j0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config_v10j0;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_Config_v10j0_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_Config_v10j0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Config_v10j0_H_ */
#include <asn_internal.h>
