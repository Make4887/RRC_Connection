/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigCommonPSCell_r12_H_
#define	_RadioResourceConfigCommonPSCell_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigCommonSCell-r10.h"
#include "PUCCH-ConfigCommon.h"
#include "RACH-ConfigCommon.h"
#include "UplinkPowerControlCommonPSCell-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UplinkPowerControlCommon_v1310;
struct UplinkPowerControlCommon_v1530;

/* RadioResourceConfigCommonPSCell-r12 */
typedef struct RadioResourceConfigCommonPSCell_r12 {
	RadioResourceConfigCommonSCell_r10_t	 basicFields_r12;
	PUCCH_ConfigCommon_t	 pucch_ConfigCommon_r12;
	RACH_ConfigCommon_t	 rach_ConfigCommon_r12;
	UplinkPowerControlCommonPSCell_r12_t	 uplinkPowerControlCommonPSCell_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct UplinkPowerControlCommon_v1310	*uplinkPowerControlCommonPSCell_v1310	/* OPTIONAL */;
	struct UplinkPowerControlCommon_v1530	*uplinkPowerControlCommonPSCell_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonPSCell_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonPSCell_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonPSCell_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonPSCell_r12_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonPSCell_r12_H_ */
#include <asn_internal.h>
