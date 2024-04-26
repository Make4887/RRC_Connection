/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-Parameters-v1310.h"

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
static asn_per_constraints_t asn_PER_type_discSysInfoReporting_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_commMultipleTx_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discInterFreqTx_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discPeriodicSLSS_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_discSysInfoReporting_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_discSysInfoReporting_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_discSysInfoReporting_r13_specs_2 = {
	asn_MAP_discSysInfoReporting_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_discSysInfoReporting_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discSysInfoReporting_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discSysInfoReporting_r13_2 = {
	"discSysInfoReporting-r13",
	"discSysInfoReporting-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_discSysInfoReporting_r13_tags_2,
	sizeof(asn_DEF_discSysInfoReporting_r13_tags_2)
		/sizeof(asn_DEF_discSysInfoReporting_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_discSysInfoReporting_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_discSysInfoReporting_r13_tags_2)
		/sizeof(asn_DEF_discSysInfoReporting_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_discSysInfoReporting_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discSysInfoReporting_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_commMultipleTx_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_commMultipleTx_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_commMultipleTx_r13_specs_4 = {
	asn_MAP_commMultipleTx_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_commMultipleTx_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_commMultipleTx_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commMultipleTx_r13_4 = {
	"commMultipleTx-r13",
	"commMultipleTx-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_commMultipleTx_r13_tags_4,
	sizeof(asn_DEF_commMultipleTx_r13_tags_4)
		/sizeof(asn_DEF_commMultipleTx_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_commMultipleTx_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_commMultipleTx_r13_tags_4)
		/sizeof(asn_DEF_commMultipleTx_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_commMultipleTx_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_commMultipleTx_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_discInterFreqTx_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_discInterFreqTx_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_discInterFreqTx_r13_specs_6 = {
	asn_MAP_discInterFreqTx_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_discInterFreqTx_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discInterFreqTx_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discInterFreqTx_r13_6 = {
	"discInterFreqTx-r13",
	"discInterFreqTx-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_discInterFreqTx_r13_tags_6,
	sizeof(asn_DEF_discInterFreqTx_r13_tags_6)
		/sizeof(asn_DEF_discInterFreqTx_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_discInterFreqTx_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_discInterFreqTx_r13_tags_6)
		/sizeof(asn_DEF_discInterFreqTx_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_discInterFreqTx_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discInterFreqTx_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_discPeriodicSLSS_r13_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_discPeriodicSLSS_r13_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_discPeriodicSLSS_r13_specs_8 = {
	asn_MAP_discPeriodicSLSS_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_discPeriodicSLSS_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discPeriodicSLSS_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discPeriodicSLSS_r13_8 = {
	"discPeriodicSLSS-r13",
	"discPeriodicSLSS-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_discPeriodicSLSS_r13_tags_8,
	sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8)
		/sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_discPeriodicSLSS_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8)
		/sizeof(asn_DEF_discPeriodicSLSS_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_discPeriodicSLSS_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discPeriodicSLSS_r13_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_Parameters_v1310_1[] = {
	{ ATF_POINTER, 4, offsetof(struct SL_Parameters_v1310, discSysInfoReporting_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discSysInfoReporting_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSysInfoReporting-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_Parameters_v1310, commMultipleTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_commMultipleTx_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commMultipleTx-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_Parameters_v1310, discInterFreqTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discInterFreqTx_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discInterFreqTx-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_Parameters_v1310, discPeriodicSLSS_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discPeriodicSLSS_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discPeriodicSLSS-r13"
		},
};
static const int asn_MAP_SL_Parameters_v1310_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SL_Parameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_Parameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discSysInfoReporting-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commMultipleTx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discInterFreqTx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* discPeriodicSLSS-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_Parameters_v1310_specs_1 = {
	sizeof(struct SL_Parameters_v1310),
	offsetof(struct SL_Parameters_v1310, _asn_ctx),
	asn_MAP_SL_Parameters_v1310_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SL_Parameters_v1310_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_Parameters_v1310 = {
	"SL-Parameters-v1310",
	"SL-Parameters-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_Parameters_v1310_tags_1,
	sizeof(asn_DEF_SL_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_SL_Parameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_Parameters_v1310_tags_1)
		/sizeof(asn_DEF_SL_Parameters_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_Parameters_v1310_1,
	4,	/* Elements count */
	&asn_SPC_SL_Parameters_v1310_specs_1	/* Additional specs */
};

