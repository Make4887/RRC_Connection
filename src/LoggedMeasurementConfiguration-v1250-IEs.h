/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_LoggedMeasurementConfiguration_v1250_IEs_H_
#define	_LoggedMeasurementConfiguration_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TargetMBSFN_AreaList_r12;
struct LoggedMeasurementConfiguration_v1530_IEs;

/* LoggedMeasurementConfiguration-v1250-IEs */
typedef struct LoggedMeasurementConfiguration_v1250_IEs {
	struct TargetMBSFN_AreaList_r12	*targetMBSFN_AreaList_r12	/* OPTIONAL */;
	struct LoggedMeasurementConfiguration_v1530_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasurementConfiguration_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LoggedMeasurementConfiguration_v1250_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedMeasurementConfiguration_v1250_IEs_H_ */
#include <asn_internal.h>
