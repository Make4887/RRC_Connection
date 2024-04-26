/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockPos-r15.h"

asn_TYPE_member_t asn_MBR_SystemInformationBlockPos_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockPos_r15, assistanceDataSIB_Element_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistanceDataSIB-Element-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockPos_r15, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockPos_r15_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockPos_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockPos_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* assistanceDataSIB-Element-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockPos_r15_specs_1 = {
	sizeof(struct SystemInformationBlockPos_r15),
	offsetof(struct SystemInformationBlockPos_r15, _asn_ctx),
	asn_MAP_SystemInformationBlockPos_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockPos_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockPos_r15 = {
	"SystemInformationBlockPos-r15",
	"SystemInformationBlockPos-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockPos_r15_tags_1,
	sizeof(asn_DEF_SystemInformationBlockPos_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockPos_r15_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockPos_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockPos_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockPos_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockPos_r15_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockPos_r15_specs_1	/* Additional specs */
};

