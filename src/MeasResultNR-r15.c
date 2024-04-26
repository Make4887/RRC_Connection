/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasResultNR-r15.h"

asn_TYPE_member_t asn_MBR_MeasResultNR_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasResultNR_r15, rsrpResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultNR_r15, rsrqResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR_r15, rs_sinr_Result_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r15"
		},
};
static const int asn_MAP_MeasResultNR_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrqResult-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rs-sinr-Result-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultNR_r15_specs_1 = {
	sizeof(struct MeasResultNR_r15),
	offsetof(struct MeasResultNR_r15, _asn_ctx),
	asn_MAP_MeasResultNR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultNR_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultNR_r15 = {
	"MeasResultNR-r15",
	"MeasResultNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultNR_r15_tags_1,
	sizeof(asn_DEF_MeasResultNR_r15_tags_1)
		/sizeof(asn_DEF_MeasResultNR_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasResultNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultNR_r15_tags_1)
		/sizeof(asn_DEF_MeasResultNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultNR_r15_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultNR_r15_specs_1	/* Additional specs */
};

