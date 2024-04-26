/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "DRX-Config-v1130.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sf60_v1130_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 59)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sf70_v1130_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 69)) {
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
static asn_per_constraints_t asn_PER_type_drx_RetransmissionTimer_v1130_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf60_v1130_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  59 }	/* (0..59) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sf70_v1130_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  69 }	/* (0..69) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_longDRX_CycleStartOffset_v1130_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_shortDRX_Cycle_v1130_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drx_RetransmissionTimer_v1130_value2enum_2[] = {
	{ 0,	10,	"psf0-v1130" }
};
static const unsigned int asn_MAP_drx_RetransmissionTimer_v1130_enum2value_2[] = {
	0	/* psf0-v1130(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_RetransmissionTimer_v1130_specs_2 = {
	asn_MAP_drx_RetransmissionTimer_v1130_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_RetransmissionTimer_v1130_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_RetransmissionTimer_v1130_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_v1130_2 = {
	"drx-RetransmissionTimer-v1130",
	"drx-RetransmissionTimer-v1130",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_RetransmissionTimer_v1130_tags_2,
	sizeof(asn_DEF_drx_RetransmissionTimer_v1130_tags_2)
		/sizeof(asn_DEF_drx_RetransmissionTimer_v1130_tags_2[0]) - 1, /* 1 */
	asn_DEF_drx_RetransmissionTimer_v1130_tags_2,	/* Same as above */
	sizeof(asn_DEF_drx_RetransmissionTimer_v1130_tags_2)
		/sizeof(asn_DEF_drx_RetransmissionTimer_v1130_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_drx_RetransmissionTimer_v1130_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_RetransmissionTimer_v1130_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_longDRX_CycleStartOffset_v1130_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130, choice.sf60_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf60_v1130_constr_5,  memb_sf60_v1130_constraint_4 },
		0, 0, /* No default value */
		"sf60-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130, choice.sf70_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sf70_v1130_constr_6,  memb_sf70_v1130_constraint_4 },
		0, 0, /* No default value */
		"sf70-v1130"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_longDRX_CycleStartOffset_v1130_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf60-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sf70-v1130 */
};
static asn_CHOICE_specifics_t asn_SPC_longDRX_CycleStartOffset_v1130_specs_4 = {
	sizeof(struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130),
	offsetof(struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130, _asn_ctx),
	offsetof(struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130, present),
	sizeof(((struct DRX_Config_v1130__longDRX_CycleStartOffset_v1130 *)0)->present),
	asn_MAP_longDRX_CycleStartOffset_v1130_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_longDRX_CycleStartOffset_v1130_4 = {
	"longDRX-CycleStartOffset-v1130",
	"longDRX-CycleStartOffset-v1130",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_longDRX_CycleStartOffset_v1130_constr_4, CHOICE_constraint },
	asn_MBR_longDRX_CycleStartOffset_v1130_4,
	2,	/* Elements count */
	&asn_SPC_longDRX_CycleStartOffset_v1130_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_shortDRX_Cycle_v1130_value2enum_7[] = {
	{ 0,	9,	"sf4-v1130" }
};
static const unsigned int asn_MAP_shortDRX_Cycle_v1130_enum2value_7[] = {
	0	/* sf4-v1130(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortDRX_Cycle_v1130_specs_7 = {
	asn_MAP_shortDRX_Cycle_v1130_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_shortDRX_Cycle_v1130_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortDRX_Cycle_v1130_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortDRX_Cycle_v1130_7 = {
	"shortDRX-Cycle-v1130",
	"shortDRX-Cycle-v1130",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortDRX_Cycle_v1130_tags_7,
	sizeof(asn_DEF_shortDRX_Cycle_v1130_tags_7)
		/sizeof(asn_DEF_shortDRX_Cycle_v1130_tags_7[0]) - 1, /* 1 */
	asn_DEF_shortDRX_Cycle_v1130_tags_7,	/* Same as above */
	sizeof(asn_DEF_shortDRX_Cycle_v1130_tags_7)
		/sizeof(asn_DEF_shortDRX_Cycle_v1130_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_shortDRX_Cycle_v1130_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortDRX_Cycle_v1130_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRX_Config_v1130_1[] = {
	{ ATF_POINTER, 3, offsetof(struct DRX_Config_v1130, drx_RetransmissionTimer_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_RetransmissionTimer_v1130_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-RetransmissionTimer-v1130"
		},
	{ ATF_POINTER, 2, offsetof(struct DRX_Config_v1130, longDRX_CycleStartOffset_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_longDRX_CycleStartOffset_v1130_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longDRX-CycleStartOffset-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct DRX_Config_v1130, shortDRX_Cycle_v1130),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortDRX_Cycle_v1130_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortDRX-Cycle-v1130"
		},
};
static const int asn_MAP_DRX_Config_v1130_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_DRX_Config_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_Config_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-RetransmissionTimer-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longDRX-CycleStartOffset-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* shortDRX-Cycle-v1130 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRX_Config_v1130_specs_1 = {
	sizeof(struct DRX_Config_v1130),
	offsetof(struct DRX_Config_v1130, _asn_ctx),
	asn_MAP_DRX_Config_v1130_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DRX_Config_v1130_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRX_Config_v1130 = {
	"DRX-Config-v1130",
	"DRX-Config-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_DRX_Config_v1130_tags_1,
	sizeof(asn_DEF_DRX_Config_v1130_tags_1)
		/sizeof(asn_DEF_DRX_Config_v1130_tags_1[0]), /* 1 */
	asn_DEF_DRX_Config_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRX_Config_v1130_tags_1)
		/sizeof(asn_DEF_DRX_Config_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRX_Config_v1130_1,
	3,	/* Elements count */
	&asn_SPC_DRX_Config_v1130_specs_1	/* Additional specs */
};

