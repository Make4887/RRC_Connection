/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SchedulingRequestConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sr_PUCCH_ResourceIndex_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_sr_ConfigIndex_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 157)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_dsr_TransMax_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sr_PUCCH_ResourceIndex_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sr_ConfigIndex_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  157 }	/* (0..157) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SchedulingRequestConfig_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dsr_TransMax_value2enum_6[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" },
	{ 4,	3,	"n64" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_dsr_TransMax_enum2value_6[] = {
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	4,	/* n64(4) */
	1,	/* n8(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_dsr_TransMax_specs_6 = {
	asn_MAP_dsr_TransMax_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_dsr_TransMax_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dsr_TransMax_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dsr_TransMax_6 = {
	"dsr-TransMax",
	"dsr-TransMax",
	&asn_OP_NativeEnumerated,
	asn_DEF_dsr_TransMax_tags_6,
	sizeof(asn_DEF_dsr_TransMax_tags_6)
		/sizeof(asn_DEF_dsr_TransMax_tags_6[0]) - 1, /* 1 */
	asn_DEF_dsr_TransMax_tags_6,	/* Same as above */
	sizeof(asn_DEF_dsr_TransMax_tags_6)
		/sizeof(asn_DEF_dsr_TransMax_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_dsr_TransMax_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dsr_TransMax_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingRequestConfig__setup, sr_PUCCH_ResourceIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sr_PUCCH_ResourceIndex_constr_4,  memb_sr_PUCCH_ResourceIndex_constraint_3 },
		0, 0, /* No default value */
		"sr-PUCCH-ResourceIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingRequestConfig__setup, sr_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sr_ConfigIndex_constr_5,  memb_sr_ConfigIndex_constraint_3 },
		0, 0, /* No default value */
		"sr-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingRequestConfig__setup, dsr_TransMax),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dsr_TransMax_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dsr-TransMax"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sr-PUCCH-ResourceIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sr-ConfigIndex */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dsr-TransMax */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SchedulingRequestConfig__setup),
	offsetof(struct SchedulingRequestConfig__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingRequestConfig, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingRequestConfig, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SchedulingRequestConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SchedulingRequestConfig_specs_1 = {
	sizeof(struct SchedulingRequestConfig),
	offsetof(struct SchedulingRequestConfig, _asn_ctx),
	offsetof(struct SchedulingRequestConfig, present),
	sizeof(((struct SchedulingRequestConfig *)0)->present),
	asn_MAP_SchedulingRequestConfig_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig = {
	"SchedulingRequestConfig",
	"SchedulingRequestConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SchedulingRequestConfig_constr_1, CHOICE_constraint },
	asn_MBR_SchedulingRequestConfig_1,
	2,	/* Elements count */
	&asn_SPC_SchedulingRequestConfig_specs_1	/* Additional specs */
};

