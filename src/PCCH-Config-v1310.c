/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PCCH-Config-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_paging_narrowBands_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_mpdcch_NumRepetition_Paging_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nB_v1310_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_paging_narrowBands_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_NumRepetition_Paging_r13_value2enum_3[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" }
};
static const unsigned int asn_MAP_mpdcch_NumRepetition_Paging_r13_enum2value_3[] = {
	0,	/* r1(0) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_NumRepetition_Paging_r13_specs_3 = {
	asn_MAP_mpdcch_NumRepetition_Paging_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_NumRepetition_Paging_r13_enum2value_3,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_Paging_r13_3 = {
	"mpdcch-NumRepetition-Paging-r13",
	"mpdcch-NumRepetition-Paging-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3,
	sizeof(asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3)
		/sizeof(asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3)
		/sizeof(asn_DEF_mpdcch_NumRepetition_Paging_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_mpdcch_NumRepetition_Paging_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_NumRepetition_Paging_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nB_v1310_value2enum_13[] = {
	{ 0,	8,	"one64thT" },
	{ 1,	9,	"one128thT" },
	{ 2,	9,	"one256thT" }
};
static const unsigned int asn_MAP_nB_v1310_enum2value_13[] = {
	1,	/* one128thT(1) */
	2,	/* one256thT(2) */
	0	/* one64thT(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nB_v1310_specs_13 = {
	asn_MAP_nB_v1310_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_nB_v1310_enum2value_13,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nB_v1310_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nB_v1310_13 = {
	"nB-v1310",
	"nB-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_nB_v1310_tags_13,
	sizeof(asn_DEF_nB_v1310_tags_13)
		/sizeof(asn_DEF_nB_v1310_tags_13[0]) - 1, /* 1 */
	asn_DEF_nB_v1310_tags_13,	/* Same as above */
	sizeof(asn_DEF_nB_v1310_tags_13)
		/sizeof(asn_DEF_nB_v1310_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_nB_v1310_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nB_v1310_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PCCH_Config_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PCCH_Config_v1310, paging_narrowBands_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_paging_narrowBands_r13_constr_2,  memb_paging_narrowBands_r13_constraint_1 },
		0, 0, /* No default value */
		"paging-narrowBands-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PCCH_Config_v1310, mpdcch_NumRepetition_Paging_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_NumRepetition_Paging_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-NumRepetition-Paging-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PCCH_Config_v1310, nB_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nB_v1310_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nB-v1310"
		},
};
static const int asn_MAP_PCCH_Config_v1310_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_PCCH_Config_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PCCH_Config_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* paging-narrowBands-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpdcch-NumRepetition-Paging-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nB-v1310 */
};
asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_v1310_specs_1 = {
	sizeof(struct PCCH_Config_v1310),
	offsetof(struct PCCH_Config_v1310, _asn_ctx),
	asn_MAP_PCCH_Config_v1310_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PCCH_Config_v1310_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PCCH_Config_v1310 = {
	"PCCH-Config-v1310",
	"PCCH-Config-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_PCCH_Config_v1310_tags_1,
	sizeof(asn_DEF_PCCH_Config_v1310_tags_1)
		/sizeof(asn_DEF_PCCH_Config_v1310_tags_1[0]), /* 1 */
	asn_DEF_PCCH_Config_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_PCCH_Config_v1310_tags_1)
		/sizeof(asn_DEF_PCCH_Config_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PCCH_Config_v1310_1,
	3,	/* Elements count */
	&asn_SPC_PCCH_Config_v1310_specs_1	/* Additional specs */
};

