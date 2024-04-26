/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "VarRLF-Report-r10.h"

static asn_TYPE_member_t asn_MBR_VarRLF_Report_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarRLF_Report_r10, rlf_Report_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLF_Report_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-Report-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarRLF_Report_r10, plmn_Identity_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_VarRLF_Report_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarRLF_Report_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlf-Report-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-Identity-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarRLF_Report_r10_specs_1 = {
	sizeof(struct VarRLF_Report_r10),
	offsetof(struct VarRLF_Report_r10, _asn_ctx),
	asn_MAP_VarRLF_Report_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarRLF_Report_r10 = {
	"VarRLF-Report-r10",
	"VarRLF-Report-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_VarRLF_Report_r10_tags_1,
	sizeof(asn_DEF_VarRLF_Report_r10_tags_1)
		/sizeof(asn_DEF_VarRLF_Report_r10_tags_1[0]), /* 1 */
	asn_DEF_VarRLF_Report_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarRLF_Report_r10_tags_1)
		/sizeof(asn_DEF_VarRLF_Report_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarRLF_Report_r10_1,
	2,	/* Elements count */
	&asn_SPC_VarRLF_Report_r10_specs_1	/* Additional specs */
};

