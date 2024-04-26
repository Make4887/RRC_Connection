/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UL-DCCH-Message-NB.h"

static asn_TYPE_member_t asn_MBR_UL_DCCH_Message_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_Message_NB, message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_DCCH_MessageType_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"message"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_DCCH_Message_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DCCH_Message_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* message */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_DCCH_Message_NB_specs_1 = {
	sizeof(struct UL_DCCH_Message_NB),
	offsetof(struct UL_DCCH_Message_NB, _asn_ctx),
	asn_MAP_UL_DCCH_Message_NB_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_DCCH_Message_NB = {
	"UL-DCCH-Message-NB",
	"UL-DCCH-Message-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_DCCH_Message_NB_tags_1,
	sizeof(asn_DEF_UL_DCCH_Message_NB_tags_1)
		/sizeof(asn_DEF_UL_DCCH_Message_NB_tags_1[0]), /* 1 */
	asn_DEF_UL_DCCH_Message_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DCCH_Message_NB_tags_1)
		/sizeof(asn_DEF_UL_DCCH_Message_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_DCCH_Message_NB_1,
	1,	/* Elements count */
	&asn_SPC_UL_DCCH_Message_NB_specs_1	/* Additional specs */
};

