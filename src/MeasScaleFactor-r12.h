/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasScaleFactor_r12_H_
#define	_MeasScaleFactor_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasScaleFactor_r12 {
	MeasScaleFactor_r12_sf_EUTRA_cf1	= 0,
	MeasScaleFactor_r12_sf_EUTRA_cf2	= 1
} e_MeasScaleFactor_r12;

/* MeasScaleFactor-r12 */
typedef long	 MeasScaleFactor_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MeasScaleFactor_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MeasScaleFactor_r12;
extern const asn_INTEGER_specifics_t asn_SPC_MeasScaleFactor_r12_specs_1;
asn_struct_free_f MeasScaleFactor_r12_free;
asn_struct_print_f MeasScaleFactor_r12_print;
asn_constr_check_f MeasScaleFactor_r12_constraint;
ber_type_decoder_f MeasScaleFactor_r12_decode_ber;
der_type_encoder_f MeasScaleFactor_r12_encode_der;
xer_type_decoder_f MeasScaleFactor_r12_decode_xer;
xer_type_encoder_f MeasScaleFactor_r12_encode_xer;
per_type_decoder_f MeasScaleFactor_r12_decode_uper;
per_type_encoder_f MeasScaleFactor_r12_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasScaleFactor_r12_H_ */
#include <asn_internal.h>
