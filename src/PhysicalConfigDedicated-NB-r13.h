/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PhysicalConfigDedicated_NB_r13_H_
#define	_PhysicalConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicated_NB_r13__twoHARQ_ProcessesConfig_r14 {
	PhysicalConfigDedicated_NB_r13__twoHARQ_ProcessesConfig_r14_true	= 0
} e_PhysicalConfigDedicated_NB_r13__twoHARQ_ProcessesConfig_r14;
typedef enum PhysicalConfigDedicated_NB_r13__interferenceRandomisationConfig_r14 {
	PhysicalConfigDedicated_NB_r13__interferenceRandomisationConfig_r14_true	= 0
} e_PhysicalConfigDedicated_NB_r13__interferenceRandomisationConfig_r14;
typedef enum PhysicalConfigDedicated_NB_r13__additionalTxSIB1_Config_v1540 {
	PhysicalConfigDedicated_NB_r13__additionalTxSIB1_Config_v1540_true	= 0
} e_PhysicalConfigDedicated_NB_r13__additionalTxSIB1_Config_v1540;

/* Forward declarations */
struct CarrierConfigDedicated_NB_r13;
struct NPDCCH_ConfigDedicated_NB_r13;
struct NPUSCH_ConfigDedicated_NB_r13;
struct UplinkPowerControlDedicated_NB_r13;
struct NPDCCH_ConfigDedicated_NB_v1530;

/* PhysicalConfigDedicated-NB-r13 */
typedef struct PhysicalConfigDedicated_NB_r13 {
	struct CarrierConfigDedicated_NB_r13	*carrierConfigDedicated_r13	/* OPTIONAL */;
	struct NPDCCH_ConfigDedicated_NB_r13	*npdcch_ConfigDedicated_r13	/* OPTIONAL */;
	struct NPUSCH_ConfigDedicated_NB_r13	*npusch_ConfigDedicated_r13	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_NB_r13	*uplinkPowerControlDedicated_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*twoHARQ_ProcessesConfig_r14	/* OPTIONAL */;
	long	*interferenceRandomisationConfig_r14	/* OPTIONAL */;
	struct NPDCCH_ConfigDedicated_NB_v1530	*npdcch_ConfigDedicated_v1530	/* OPTIONAL */;
	long	*additionalTxSIB1_Config_v1540	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoHARQ_ProcessesConfig_r14_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interferenceRandomisationConfig_r14_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalTxSIB1_Config_v1540_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicated_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicated_NB_r13_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
