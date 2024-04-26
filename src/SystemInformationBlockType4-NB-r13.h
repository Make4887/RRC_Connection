/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType4_NB_r13_H_
#define	_SystemInformationBlockType4_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqNeighCellList;
struct IntraFreqBlackCellList;
struct NSSS_RRM_Config_NB_r15;
struct IntraFreqNeighCellList_NB_v1530;

/* SystemInformationBlockType4-NB-r13 */
typedef struct SystemInformationBlockType4_NB_r13 {
	struct IntraFreqNeighCellList	*intraFreqNeighCellList_r13	/* OPTIONAL */;
	struct IntraFreqBlackCellList	*intraFreqBlackCellList_r13	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NSSS_RRM_Config_NB_r15	*nsss_RRM_Config_r15	/* OPTIONAL */;
	struct IntraFreqNeighCellList_NB_v1530	*intraFreqNeighCellList_v1530	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType4_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_NB_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType4_NB_r13_H_ */
#include <asn_internal.h>
