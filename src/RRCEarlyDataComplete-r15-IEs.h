/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCEarlyDataComplete_r15_IEs_H_
#define	_RRCEarlyDataComplete_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IdleModeMobilityControlInfo;
struct IdleModeMobilityControlInfo_v9e0;
struct RedirectedCarrierInfo_r15_IEs;

/* RRCEarlyDataComplete-r15-IEs */
typedef struct RRCEarlyDataComplete_r15_IEs {
	DedicatedInfoNAS_t	*dedicatedInfoNAS_r15	/* OPTIONAL */;
	long	*extendedWaitTime_r15	/* OPTIONAL */;
	struct IdleModeMobilityControlInfo	*idleModeMobilityControlInfo_r15	/* OPTIONAL */;
	struct IdleModeMobilityControlInfo_v9e0	*idleModeMobilityControlInfoExt_r15	/* OPTIONAL */;
	struct RedirectedCarrierInfo_r15_IEs	*redirectedCarrierInfo_r15	/* OPTIONAL */;
	struct RRCEarlyDataComplete_r15_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCEarlyDataComplete_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataComplete_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataComplete_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCEarlyDataComplete_r15_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEarlyDataComplete_r15_IEs_H_ */
#include <asn_internal.h>
