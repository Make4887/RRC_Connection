/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "NPRACH-Parameters-NB-v1330.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_nprach_NumCBRA_StartSubcarriers_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_nprach_NumCBRA_StartSubcarriers_r13_value2enum_2[] = {
	{ 0,	2,	"n8" },
	{ 1,	3,	"n10" },
	{ 2,	3,	"n11" },
	{ 3,	3,	"n12" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n22" },
	{ 6,	3,	"n23" },
	{ 7,	3,	"n24" },
	{ 8,	3,	"n32" },
	{ 9,	3,	"n34" },
	{ 10,	3,	"n35" },
	{ 11,	3,	"n36" },
	{ 12,	3,	"n40" },
	{ 13,	3,	"n44" },
	{ 14,	3,	"n46" },
	{ 15,	3,	"n48" }
};
static const unsigned int asn_MAP_nprach_NumCBRA_StartSubcarriers_r13_enum2value_2[] = {
	1,	/* n10(1) */
	2,	/* n11(2) */
	3,	/* n12(3) */
	4,	/* n20(4) */
	5,	/* n22(5) */
	6,	/* n23(6) */
	7,	/* n24(7) */
	8,	/* n32(8) */
	9,	/* n34(9) */
	10,	/* n35(10) */
	11,	/* n36(11) */
	12,	/* n40(12) */
	13,	/* n44(13) */
	14,	/* n46(14) */
	15,	/* n48(15) */
	0	/* n8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_NumCBRA_StartSubcarriers_r13_specs_2 = {
	asn_MAP_nprach_NumCBRA_StartSubcarriers_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_NumCBRA_StartSubcarriers_r13_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_2 = {
	"nprach-NumCBRA-StartSubcarriers-r13",
	"nprach-NumCBRA-StartSubcarriers-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2,
	sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2)
		/sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2)
		/sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_NumCBRA_StartSubcarriers_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_NumCBRA_StartSubcarriers_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NPRACH_Parameters_NB_v1330_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NPRACH_Parameters_NB_v1330, nprach_NumCBRA_StartSubcarriers_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_NumCBRA_StartSubcarriers_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumCBRA-StartSubcarriers-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_NPRACH_Parameters_NB_v1330_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPRACH_Parameters_NB_v1330_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-NumCBRA-StartSubcarriers-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPRACH_Parameters_NB_v1330_specs_1 = {
	sizeof(struct NPRACH_Parameters_NB_v1330),
	offsetof(struct NPRACH_Parameters_NB_v1330, _asn_ctx),
	asn_MAP_NPRACH_Parameters_NB_v1330_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPRACH_Parameters_NB_v1330 = {
	"NPRACH-Parameters-NB-v1330",
	"NPRACH-Parameters-NB-v1330",
	&asn_OP_SEQUENCE,
	asn_DEF_NPRACH_Parameters_NB_v1330_tags_1,
	sizeof(asn_DEF_NPRACH_Parameters_NB_v1330_tags_1)
		/sizeof(asn_DEF_NPRACH_Parameters_NB_v1330_tags_1[0]), /* 1 */
	asn_DEF_NPRACH_Parameters_NB_v1330_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPRACH_Parameters_NB_v1330_tags_1)
		/sizeof(asn_DEF_NPRACH_Parameters_NB_v1330_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NPRACH_Parameters_NB_v1330_1,
	1,	/* Elements count */
	&asn_SPC_NPRACH_Parameters_NB_v1330_specs_1	/* Additional specs */
};

