/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PUSCH_ConfigDedicated_v1430_H_
#define	_PUSCH_ConfigDedicated_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigDedicated_v1430__ce_PUSCH_NB_MaxTBS_r14 {
	PUSCH_ConfigDedicated_v1430__ce_PUSCH_NB_MaxTBS_r14_on	= 0
} e_PUSCH_ConfigDedicated_v1430__ce_PUSCH_NB_MaxTBS_r14;
typedef enum PUSCH_ConfigDedicated_v1430__ce_PUSCH_MaxBandwidth_r14 {
	PUSCH_ConfigDedicated_v1430__ce_PUSCH_MaxBandwidth_r14_bw5	= 0
} e_PUSCH_ConfigDedicated_v1430__ce_PUSCH_MaxBandwidth_r14;

/* Forward declarations */
struct TDD_PUSCH_UpPTS_r14;
struct Enable256QAM_r14;

/* PUSCH-ConfigDedicated-v1430 */
typedef struct PUSCH_ConfigDedicated_v1430 {
	long	*ce_PUSCH_NB_MaxTBS_r14	/* OPTIONAL */;
	long	*ce_PUSCH_MaxBandwidth_r14	/* OPTIONAL */;
	struct TDD_PUSCH_UpPTS_r14	*tdd_PUSCH_UpPTS_r14	/* OPTIONAL */;
	BOOLEAN_t	 ul_DMRS_IFDMA_r14;
	struct Enable256QAM_r14	*enable256QAM_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PUSCH_NB_MaxTBS_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PUSCH_MaxBandwidth_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1430_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_v1430_H_ */
#include <asn_internal.h>
