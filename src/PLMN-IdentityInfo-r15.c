/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PLMN-IdentityInfo-r15.h"

static int
memb_plmn_Index_r15_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_memb_plmn_Index_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_plmn_Identity_5GC_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cellReservedForOperatorUse_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cellReservedForOperatorUse_CRS_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_plmn_Identity_5GC_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15, choice.plmn_Identity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15, choice.plmn_Index_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_plmn_Index_r15_constr_4,  memb_plmn_Index_r15_constraint_2 },
		0, 0, /* No default value */
		"plmn-Index-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_plmn_Identity_5GC_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-Index-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_plmn_Identity_5GC_r15_specs_2 = {
	sizeof(struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15),
	offsetof(struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15, _asn_ctx),
	offsetof(struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15, present),
	sizeof(((struct PLMN_IdentityInfo_r15__plmn_Identity_5GC_r15 *)0)->present),
	asn_MAP_plmn_Identity_5GC_r15_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_plmn_Identity_5GC_r15_2 = {
	"plmn-Identity-5GC-r15",
	"plmn-Identity-5GC-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_plmn_Identity_5GC_r15_constr_2, CHOICE_constraint },
	asn_MBR_plmn_Identity_5GC_r15_2,
	2,	/* Elements count */
	&asn_SPC_plmn_Identity_5GC_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellReservedForOperatorUse_r15_value2enum_5[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_cellReservedForOperatorUse_r15_enum2value_5[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellReservedForOperatorUse_r15_specs_5 = {
	asn_MAP_cellReservedForOperatorUse_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_cellReservedForOperatorUse_r15_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellReservedForOperatorUse_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_r15_5 = {
	"cellReservedForOperatorUse-r15",
	"cellReservedForOperatorUse-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellReservedForOperatorUse_r15_tags_5,
	sizeof(asn_DEF_cellReservedForOperatorUse_r15_tags_5)
		/sizeof(asn_DEF_cellReservedForOperatorUse_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_cellReservedForOperatorUse_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_cellReservedForOperatorUse_r15_tags_5)
		/sizeof(asn_DEF_cellReservedForOperatorUse_r15_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_cellReservedForOperatorUse_r15_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellReservedForOperatorUse_r15_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellReservedForOperatorUse_CRS_r15_value2enum_8[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_cellReservedForOperatorUse_CRS_r15_enum2value_8[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellReservedForOperatorUse_CRS_r15_specs_8 = {
	asn_MAP_cellReservedForOperatorUse_CRS_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_cellReservedForOperatorUse_CRS_r15_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_CRS_r15_8 = {
	"cellReservedForOperatorUse-CRS-r15",
	"cellReservedForOperatorUse-CRS-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8,
	sizeof(asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8)
		/sizeof(asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8)
		/sizeof(asn_DEF_cellReservedForOperatorUse_CRS_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_cellReservedForOperatorUse_CRS_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellReservedForOperatorUse_CRS_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PLMN_IdentityInfo_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo_r15, plmn_Identity_5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_plmn_Identity_5GC_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity-5GC-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo_r15, cellReservedForOperatorUse_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellReservedForOperatorUse_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReservedForOperatorUse-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo_r15, cellReservedForOperatorUse_CRS_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellReservedForOperatorUse_CRS_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReservedForOperatorUse-CRS-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityInfo_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PLMN_IdentityInfo_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity-5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReservedForOperatorUse-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellReservedForOperatorUse-CRS-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfo_r15_specs_1 = {
	sizeof(struct PLMN_IdentityInfo_r15),
	offsetof(struct PLMN_IdentityInfo_r15, _asn_ctx),
	asn_MAP_PLMN_IdentityInfo_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo_r15 = {
	"PLMN-IdentityInfo-r15",
	"PLMN-IdentityInfo-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_PLMN_IdentityInfo_r15_tags_1,
	sizeof(asn_DEF_PLMN_IdentityInfo_r15_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfo_r15_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityInfo_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityInfo_r15_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfo_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PLMN_IdentityInfo_r15_1,
	3,	/* Elements count */
	&asn_SPC_PLMN_IdentityInfo_r15_specs_1	/* Additional specs */
};

