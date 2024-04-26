/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "LAA-Parameters-v1530.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_aul_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_laa_PUSCH_Mode1_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_laa_PUSCH_Mode2_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_laa_PUSCH_Mode3_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_aul_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_aul_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_aul_r15_specs_2 = {
	asn_MAP_aul_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_aul_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_aul_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aul_r15_2 = {
	"aul-r15",
	"aul-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_aul_r15_tags_2,
	sizeof(asn_DEF_aul_r15_tags_2)
		/sizeof(asn_DEF_aul_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_aul_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_aul_r15_tags_2)
		/sizeof(asn_DEF_aul_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_aul_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_aul_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_laa_PUSCH_Mode1_r15_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_laa_PUSCH_Mode1_r15_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_laa_PUSCH_Mode1_r15_specs_4 = {
	asn_MAP_laa_PUSCH_Mode1_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_laa_PUSCH_Mode1_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_laa_PUSCH_Mode1_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode1_r15_4 = {
	"laa-PUSCH-Mode1-r15",
	"laa-PUSCH-Mode1-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_laa_PUSCH_Mode1_r15_tags_4,
	sizeof(asn_DEF_laa_PUSCH_Mode1_r15_tags_4)
		/sizeof(asn_DEF_laa_PUSCH_Mode1_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_laa_PUSCH_Mode1_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_laa_PUSCH_Mode1_r15_tags_4)
		/sizeof(asn_DEF_laa_PUSCH_Mode1_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_laa_PUSCH_Mode1_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_laa_PUSCH_Mode1_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_laa_PUSCH_Mode2_r15_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_laa_PUSCH_Mode2_r15_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_laa_PUSCH_Mode2_r15_specs_6 = {
	asn_MAP_laa_PUSCH_Mode2_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_laa_PUSCH_Mode2_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_laa_PUSCH_Mode2_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode2_r15_6 = {
	"laa-PUSCH-Mode2-r15",
	"laa-PUSCH-Mode2-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_laa_PUSCH_Mode2_r15_tags_6,
	sizeof(asn_DEF_laa_PUSCH_Mode2_r15_tags_6)
		/sizeof(asn_DEF_laa_PUSCH_Mode2_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_laa_PUSCH_Mode2_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_laa_PUSCH_Mode2_r15_tags_6)
		/sizeof(asn_DEF_laa_PUSCH_Mode2_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_laa_PUSCH_Mode2_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_laa_PUSCH_Mode2_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_laa_PUSCH_Mode3_r15_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_laa_PUSCH_Mode3_r15_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_laa_PUSCH_Mode3_r15_specs_8 = {
	asn_MAP_laa_PUSCH_Mode3_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_laa_PUSCH_Mode3_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_laa_PUSCH_Mode3_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laa_PUSCH_Mode3_r15_8 = {
	"laa-PUSCH-Mode3-r15",
	"laa-PUSCH-Mode3-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_laa_PUSCH_Mode3_r15_tags_8,
	sizeof(asn_DEF_laa_PUSCH_Mode3_r15_tags_8)
		/sizeof(asn_DEF_laa_PUSCH_Mode3_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_laa_PUSCH_Mode3_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_laa_PUSCH_Mode3_r15_tags_8)
		/sizeof(asn_DEF_laa_PUSCH_Mode3_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_laa_PUSCH_Mode3_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_laa_PUSCH_Mode3_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LAA_Parameters_v1530_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LAA_Parameters_v1530, aul_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_aul_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aul-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LAA_Parameters_v1530, laa_PUSCH_Mode1_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_laa_PUSCH_Mode1_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-PUSCH-Mode1-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LAA_Parameters_v1530, laa_PUSCH_Mode2_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_laa_PUSCH_Mode2_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-PUSCH-Mode2-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LAA_Parameters_v1530, laa_PUSCH_Mode3_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_laa_PUSCH_Mode3_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-PUSCH-Mode3-r15"
		},
};
static const int asn_MAP_LAA_Parameters_v1530_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LAA_Parameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LAA_Parameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aul-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laa-PUSCH-Mode1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laa-PUSCH-Mode2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* laa-PUSCH-Mode3-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LAA_Parameters_v1530_specs_1 = {
	sizeof(struct LAA_Parameters_v1530),
	offsetof(struct LAA_Parameters_v1530, _asn_ctx),
	asn_MAP_LAA_Parameters_v1530_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LAA_Parameters_v1530_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LAA_Parameters_v1530 = {
	"LAA-Parameters-v1530",
	"LAA-Parameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LAA_Parameters_v1530_tags_1,
	sizeof(asn_DEF_LAA_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_LAA_Parameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_LAA_Parameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LAA_Parameters_v1530_tags_1)
		/sizeof(asn_DEF_LAA_Parameters_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LAA_Parameters_v1530_1,
	4,	/* Elements count */
	&asn_SPC_LAA_Parameters_v1530_specs_1	/* Additional specs */
};

