/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RF_Parameters_NB_v1430_H_
#define	_RF_Parameters_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_NB_v1430__powerClassNB_14dBm_r14 {
	RF_Parameters_NB_v1430__powerClassNB_14dBm_r14_supported	= 0
} e_RF_Parameters_NB_v1430__powerClassNB_14dBm_r14;

/* RF-Parameters-NB-v1430 */
typedef struct RF_Parameters_NB_v1430 {
	long	*powerClassNB_14dBm_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_NB_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerClassNB_14dBm_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_NB_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_NB_v1430_H_ */
#include <asn_internal.h>