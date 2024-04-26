/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MasterInformationBlock-TDD-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_systemFrameNumber_MSB_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
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
memb_hyperSFN_LSB_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
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
memb_schedulingInfoSIB1_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_systemInfoValueTag_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_operationModeInfo_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sib1_CarrierInfo_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemFrameNumber_MSB_r15_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hyperSFN_LSB_r15_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_schedulingInfoSIB1_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemInfoValueTag_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_spare_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_operationModeInfo_r15_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, choice.inband_SamePCI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_SamePCI_TDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inband-SamePCI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, choice.inband_DifferentPCI_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_DifferentPCI_TDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inband-DifferentPCI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, choice.guardband_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GuardbandTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"guardband-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, choice.standalone_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StandaloneTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"standalone-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_operationModeInfo_r15_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* inband-SamePCI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inband-DifferentPCI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* guardband-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* standalone-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_operationModeInfo_r15_specs_7 = {
	sizeof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15),
	offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, _asn_ctx),
	offsetof(struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15, present),
	sizeof(((struct MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15 *)0)->present),
	asn_MAP_operationModeInfo_r15_tag2el_7,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_operationModeInfo_r15_7 = {
	"operationModeInfo-r15",
	"operationModeInfo-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_operationModeInfo_r15_constr_7, CHOICE_constraint },
	asn_MBR_operationModeInfo_r15_7,
	4,	/* Elements count */
	&asn_SPC_operationModeInfo_r15_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sib1_CarrierInfo_r15_value2enum_12[] = {
	{ 0,	6,	"anchor" },
	{ 1,	10,	"non-anchor" }
};
static const unsigned int asn_MAP_sib1_CarrierInfo_r15_enum2value_12[] = {
	0,	/* anchor(0) */
	1	/* non-anchor(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_sib1_CarrierInfo_r15_specs_12 = {
	asn_MAP_sib1_CarrierInfo_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_sib1_CarrierInfo_r15_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sib1_CarrierInfo_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib1_CarrierInfo_r15_12 = {
	"sib1-CarrierInfo-r15",
	"sib1-CarrierInfo-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_sib1_CarrierInfo_r15_tags_12,
	sizeof(asn_DEF_sib1_CarrierInfo_r15_tags_12)
		/sizeof(asn_DEF_sib1_CarrierInfo_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_sib1_CarrierInfo_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_sib1_CarrierInfo_r15_tags_12)
		/sizeof(asn_DEF_sib1_CarrierInfo_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_sib1_CarrierInfo_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sib1_CarrierInfo_r15_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MasterInformationBlock_TDD_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, systemFrameNumber_MSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_systemFrameNumber_MSB_r15_constr_2,  memb_systemFrameNumber_MSB_r15_constraint_1 },
		0, 0, /* No default value */
		"systemFrameNumber-MSB-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, hyperSFN_LSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_hyperSFN_LSB_r15_constr_3,  memb_hyperSFN_LSB_r15_constraint_1 },
		0, 0, /* No default value */
		"hyperSFN-LSB-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, schedulingInfoSIB1_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_schedulingInfoSIB1_r15_constr_4,  memb_schedulingInfoSIB1_r15_constraint_1 },
		0, 0, /* No default value */
		"schedulingInfoSIB1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, systemInfoValueTag_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_systemInfoValueTag_r15_constr_5,  memb_systemInfoValueTag_r15_constraint_1 },
		0, 0, /* No default value */
		"systemInfoValueTag-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, ab_Enabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ab-Enabled-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, operationModeInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_operationModeInfo_r15_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"operationModeInfo-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, sib1_CarrierInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sib1_CarrierInfo_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib1-CarrierInfo-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_TDD_NB_r15, spare),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_spare_constr_15,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MasterInformationBlock_TDD_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemFrameNumber-MSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hyperSFN-LSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* schedulingInfoSIB1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoValueTag-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ab-Enabled-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* operationModeInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sib1-CarrierInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_TDD_NB_r15_specs_1 = {
	sizeof(struct MasterInformationBlock_TDD_NB_r15),
	offsetof(struct MasterInformationBlock_TDD_NB_r15, _asn_ctx),
	asn_MAP_MasterInformationBlock_TDD_NB_r15_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_TDD_NB_r15 = {
	"MasterInformationBlock-TDD-NB-r15",
	"MasterInformationBlock-TDD-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1,
	sizeof(asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_TDD_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MasterInformationBlock_TDD_NB_r15_1,
	8,	/* Elements count */
	&asn_SPC_MasterInformationBlock_TDD_NB_r15_specs_1	/* Additional specs */
};

