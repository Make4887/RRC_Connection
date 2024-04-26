/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "AS-Config-v1320.h"

#include "SCellToAddModListExt-r13.h"
#include "RCLWI-Configuration-r13.h"
asn_TYPE_member_t asn_MBR_AS_Config_v1320_1[] = {
	{ ATF_POINTER, 2, offsetof(struct AS_Config_v1320, sourceSCellConfigList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSCellConfigList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Config_v1320, sourceRCLWI_Configuration_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RCLWI_Configuration_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRCLWI-Configuration-r13"
		},
};
static const int asn_MAP_AS_Config_v1320_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_AS_Config_v1320_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_v1320_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceSCellConfigList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sourceRCLWI-Configuration-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_v1320_specs_1 = {
	sizeof(struct AS_Config_v1320),
	offsetof(struct AS_Config_v1320, _asn_ctx),
	asn_MAP_AS_Config_v1320_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AS_Config_v1320_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config_v1320 = {
	"AS-Config-v1320",
	"AS-Config-v1320",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_v1320_tags_1,
	sizeof(asn_DEF_AS_Config_v1320_tags_1)
		/sizeof(asn_DEF_AS_Config_v1320_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_v1320_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_v1320_tags_1)
		/sizeof(asn_DEF_AS_Config_v1320_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_v1320_1,
	2,	/* Elements count */
	&asn_SPC_AS_Config_v1320_specs_1	/* Additional specs */
};

