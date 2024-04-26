/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PresenceAntennaPort1_H_
#define	_PresenceAntennaPort1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PresenceAntennaPort1 */
typedef BOOLEAN_t	 PresenceAntennaPort1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PresenceAntennaPort1;
asn_struct_free_f PresenceAntennaPort1_free;
asn_struct_print_f PresenceAntennaPort1_print;
asn_constr_check_f PresenceAntennaPort1_constraint;
ber_type_decoder_f PresenceAntennaPort1_decode_ber;
der_type_encoder_f PresenceAntennaPort1_encode_der;
xer_type_decoder_f PresenceAntennaPort1_decode_xer;
xer_type_encoder_f PresenceAntennaPort1_encode_xer;
per_type_decoder_f PresenceAntennaPort1_decode_uper;
per_type_encoder_f PresenceAntennaPort1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PresenceAntennaPort1_H_ */
#include <asn_internal.h>
