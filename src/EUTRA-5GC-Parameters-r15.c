/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "EUTRA-5GC-Parameters-r15.h"

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
static asn_per_constraints_t asn_PER_type_eutra_5GC_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eutra_EPC_HO_EUTRA_5GC_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ho_EUTRA_5GC_FDD_TDD_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ho_InterfreqEUTRA_5GC_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_inactiveState_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reflectiveQoS_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_eutra_5GC_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_eutra_5GC_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutra_5GC_r15_specs_2 = {
	asn_MAP_eutra_5GC_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_5GC_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutra_5GC_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_5GC_r15_2 = {
	"eutra-5GC-r15",
	"eutra-5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutra_5GC_r15_tags_2,
	sizeof(asn_DEF_eutra_5GC_r15_tags_2)
		/sizeof(asn_DEF_eutra_5GC_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_eutra_5GC_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_eutra_5GC_r15_tags_2)
		/sizeof(asn_DEF_eutra_5GC_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_eutra_5GC_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_5GC_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutra_EPC_HO_EUTRA_5GC_r15_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_eutra_EPC_HO_EUTRA_5GC_r15_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutra_EPC_HO_EUTRA_5GC_r15_specs_4 = {
	asn_MAP_eutra_EPC_HO_EUTRA_5GC_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_EPC_HO_EUTRA_5GC_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_4 = {
	"eutra-EPC-HO-EUTRA-5GC-r15",
	"eutra-EPC-HO-EUTRA-5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4,
	sizeof(asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4)
		/sizeof(asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4)
		/sizeof(asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_eutra_EPC_HO_EUTRA_5GC_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_EPC_HO_EUTRA_5GC_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ho_EUTRA_5GC_FDD_TDD_r15_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ho_EUTRA_5GC_FDD_TDD_r15_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ho_EUTRA_5GC_FDD_TDD_r15_specs_6 = {
	asn_MAP_ho_EUTRA_5GC_FDD_TDD_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ho_EUTRA_5GC_FDD_TDD_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_6 = {
	"ho-EUTRA-5GC-FDD-TDD-r15",
	"ho-EUTRA-5GC-FDD-TDD-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6,
	sizeof(asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6)
		/sizeof(asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6)
		/sizeof(asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_ho_EUTRA_5GC_FDD_TDD_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ho_EUTRA_5GC_FDD_TDD_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ho_InterfreqEUTRA_5GC_r15_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ho_InterfreqEUTRA_5GC_r15_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ho_InterfreqEUTRA_5GC_r15_specs_8 = {
	asn_MAP_ho_InterfreqEUTRA_5GC_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ho_InterfreqEUTRA_5GC_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ho_InterfreqEUTRA_5GC_r15_8 = {
	"ho-InterfreqEUTRA-5GC-r15",
	"ho-InterfreqEUTRA-5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8,
	sizeof(asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8)
		/sizeof(asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8)
		/sizeof(asn_DEF_ho_InterfreqEUTRA_5GC_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_ho_InterfreqEUTRA_5GC_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ho_InterfreqEUTRA_5GC_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_specs_10 = {
	asn_MAP_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_10 = {
	"ims-VoiceOverMCG-BearerEUTRA-5GC-r15",
	"ims-VoiceOverMCG-BearerEUTRA-5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10,
	sizeof(asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10)
		/sizeof(asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10)
		/sizeof(asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_inactiveState_r15_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_inactiveState_r15_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_inactiveState_r15_specs_12 = {
	asn_MAP_inactiveState_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_inactiveState_r15_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_inactiveState_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_inactiveState_r15_12 = {
	"inactiveState-r15",
	"inactiveState-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_inactiveState_r15_tags_12,
	sizeof(asn_DEF_inactiveState_r15_tags_12)
		/sizeof(asn_DEF_inactiveState_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_inactiveState_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_inactiveState_r15_tags_12)
		/sizeof(asn_DEF_inactiveState_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_inactiveState_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_inactiveState_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reflectiveQoS_r15_value2enum_14[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_reflectiveQoS_r15_enum2value_14[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reflectiveQoS_r15_specs_14 = {
	asn_MAP_reflectiveQoS_r15_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_reflectiveQoS_r15_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reflectiveQoS_r15_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reflectiveQoS_r15_14 = {
	"reflectiveQoS-r15",
	"reflectiveQoS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_reflectiveQoS_r15_tags_14,
	sizeof(asn_DEF_reflectiveQoS_r15_tags_14)
		/sizeof(asn_DEF_reflectiveQoS_r15_tags_14[0]) - 1, /* 1 */
	asn_DEF_reflectiveQoS_r15_tags_14,	/* Same as above */
	sizeof(asn_DEF_reflectiveQoS_r15_tags_14)
		/sizeof(asn_DEF_reflectiveQoS_r15_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_reflectiveQoS_r15_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reflectiveQoS_r15_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EUTRA_5GC_Parameters_r15_1[] = {
	{ ATF_POINTER, 7, offsetof(struct EUTRA_5GC_Parameters_r15, eutra_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_5GC_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-5GC-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct EUTRA_5GC_Parameters_r15, eutra_EPC_HO_EUTRA_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_EPC_HO_EUTRA_5GC_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-EPC-HO-EUTRA-5GC-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct EUTRA_5GC_Parameters_r15, ho_EUTRA_5GC_FDD_TDD_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ho_EUTRA_5GC_FDD_TDD_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ho-EUTRA-5GC-FDD-TDD-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct EUTRA_5GC_Parameters_r15, ho_InterfreqEUTRA_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ho_InterfreqEUTRA_5GC_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ho-InterfreqEUTRA-5GC-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct EUTRA_5GC_Parameters_r15, ims_VoiceOverMCG_BearerEUTRA_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ims_VoiceOverMCG_BearerEUTRA_5GC_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ims-VoiceOverMCG-BearerEUTRA-5GC-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct EUTRA_5GC_Parameters_r15, inactiveState_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_inactiveState_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inactiveState-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_5GC_Parameters_r15, reflectiveQoS_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reflectiveQoS_r15_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reflectiveQoS-r15"
		},
};
static const int asn_MAP_EUTRA_5GC_Parameters_r15_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_EUTRA_5GC_Parameters_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_5GC_Parameters_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eutra-EPC-HO-EUTRA-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ho-EUTRA-5GC-FDD-TDD-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ho-InterfreqEUTRA-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ims-VoiceOverMCG-BearerEUTRA-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* inactiveState-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* reflectiveQoS-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_5GC_Parameters_r15_specs_1 = {
	sizeof(struct EUTRA_5GC_Parameters_r15),
	offsetof(struct EUTRA_5GC_Parameters_r15, _asn_ctx),
	asn_MAP_EUTRA_5GC_Parameters_r15_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_EUTRA_5GC_Parameters_r15_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_5GC_Parameters_r15 = {
	"EUTRA-5GC-Parameters-r15",
	"EUTRA-5GC-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_5GC_Parameters_r15_tags_1,
	sizeof(asn_DEF_EUTRA_5GC_Parameters_r15_tags_1)
		/sizeof(asn_DEF_EUTRA_5GC_Parameters_r15_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_5GC_Parameters_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_5GC_Parameters_r15_tags_1)
		/sizeof(asn_DEF_EUTRA_5GC_Parameters_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_5GC_Parameters_r15_1,
	7,	/* Elements count */
	&asn_SPC_EUTRA_5GC_Parameters_r15_specs_1	/* Additional specs */
};

