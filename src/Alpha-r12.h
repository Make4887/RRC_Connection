/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Alpha_r12_H_
#define	_Alpha_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Alpha_r12 {
	Alpha_r12_al0	= 0,
	Alpha_r12_al04	= 1,
	Alpha_r12_al05	= 2,
	Alpha_r12_al06	= 3,
	Alpha_r12_al07	= 4,
	Alpha_r12_al08	= 5,
	Alpha_r12_al09	= 6,
	Alpha_r12_al1	= 7
} e_Alpha_r12;

/* Alpha-r12 */
typedef long	 Alpha_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Alpha_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Alpha_r12;
extern const asn_INTEGER_specifics_t asn_SPC_Alpha_r12_specs_1;
asn_struct_free_f Alpha_r12_free;
asn_struct_print_f Alpha_r12_print;
asn_constr_check_f Alpha_r12_constraint;
ber_type_decoder_f Alpha_r12_decode_ber;
der_type_encoder_f Alpha_r12_encode_der;
xer_type_decoder_f Alpha_r12_decode_xer;
xer_type_encoder_f Alpha_r12_encode_xer;
per_type_decoder_f Alpha_r12_decode_uper;
per_type_encoder_f Alpha_r12_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Alpha_r12_H_ */
#include <asn_internal.h>
