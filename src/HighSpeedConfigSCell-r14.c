/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "HighSpeedConfigSCell-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_highSpeedEnhancedDemodulationFlag_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_highSpeedEnhancedDemodulationFlag_r14_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_highSpeedEnhancedDemodulationFlag_r14_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_highSpeedEnhancedDemodulationFlag_r14_specs_2 = {
	asn_MAP_highSpeedEnhancedDemodulationFlag_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_highSpeedEnhancedDemodulationFlag_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_highSpeedEnhancedDemodulationFlag_r14_2 = {
	"highSpeedEnhancedDemodulationFlag-r14",
	"highSpeedEnhancedDemodulationFlag-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2,
	sizeof(asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2)
		/sizeof(asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2)
		/sizeof(asn_DEF_highSpeedEnhancedDemodulationFlag_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_highSpeedEnhancedDemodulationFlag_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_highSpeedEnhancedDemodulationFlag_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_HighSpeedConfigSCell_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct HighSpeedConfigSCell_r14, highSpeedEnhancedDemodulationFlag_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_highSpeedEnhancedDemodulationFlag_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedEnhancedDemodulationFlag-r14"
		},
};
static const int asn_MAP_HighSpeedConfigSCell_r14_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_HighSpeedConfigSCell_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HighSpeedConfigSCell_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* highSpeedEnhancedDemodulationFlag-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_HighSpeedConfigSCell_r14_specs_1 = {
	sizeof(struct HighSpeedConfigSCell_r14),
	offsetof(struct HighSpeedConfigSCell_r14, _asn_ctx),
	asn_MAP_HighSpeedConfigSCell_r14_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_HighSpeedConfigSCell_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HighSpeedConfigSCell_r14 = {
	"HighSpeedConfigSCell-r14",
	"HighSpeedConfigSCell-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_HighSpeedConfigSCell_r14_tags_1,
	sizeof(asn_DEF_HighSpeedConfigSCell_r14_tags_1)
		/sizeof(asn_DEF_HighSpeedConfigSCell_r14_tags_1[0]), /* 1 */
	asn_DEF_HighSpeedConfigSCell_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_HighSpeedConfigSCell_r14_tags_1)
		/sizeof(asn_DEF_HighSpeedConfigSCell_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HighSpeedConfigSCell_r14_1,
	1,	/* Elements count */
	&asn_SPC_HighSpeedConfigSCell_r14_specs_1	/* Additional specs */
};

