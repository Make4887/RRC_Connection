/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasReportAppLayer_r15_IEs_H_
#define	_MeasReportAppLayer_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasReportAppLayer_r15_IEs__serviceType {
	MeasReportAppLayer_r15_IEs__serviceType_qoe	= 0,
	MeasReportAppLayer_r15_IEs__serviceType_qoemtsi	= 1,
	MeasReportAppLayer_r15_IEs__serviceType_spare6	= 2,
	MeasReportAppLayer_r15_IEs__serviceType_spare5	= 3,
	MeasReportAppLayer_r15_IEs__serviceType_spare4	= 4,
	MeasReportAppLayer_r15_IEs__serviceType_spare3	= 5,
	MeasReportAppLayer_r15_IEs__serviceType_spare2	= 6,
	MeasReportAppLayer_r15_IEs__serviceType_spare1	= 7
} e_MeasReportAppLayer_r15_IEs__serviceType;

/* MeasReportAppLayer-r15-IEs */
typedef struct MeasReportAppLayer_r15_IEs {
	OCTET_STRING_t	*measReportAppLayerContainer_r15	/* OPTIONAL */;
	long	*serviceType	/* OPTIONAL */;
	struct MeasReportAppLayer_r15_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasReportAppLayer_r15_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_serviceType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasReportAppLayer_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasReportAppLayer_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasReportAppLayer_r15_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasReportAppLayer_r15_IEs_H_ */
#include <asn_internal.h>
