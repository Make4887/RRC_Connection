/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformation-r8-IEs.h"

#include "SystemInformation-v8a0-IEs.h"
static int
memb_sib_TypeAndInfo_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  9 }	/* (0..9,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sib_TypeAndInfo_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sib_TypeAndInfo_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib5),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib6),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib7),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib7"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib8),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib10),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib11),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib12_v920),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType12_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib12-v920"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib13_v920),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType13_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib13-v920"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib14_v1130),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType14_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib14-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib15_v1130),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType15_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib15-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib16_v1130),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType16_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib16-v1130"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib17_v1250),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType17_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib17-v1250"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib18_v1250),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType18_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib18-v1250"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib19_v1250),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType19_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib19-v1250"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib20_v1310),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType20_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib20-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib21_v1430),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType21_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib21-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib24_v1530),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType24_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib24-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib25_v1530),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType25_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib25-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, choice.sib26_v1530),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType26_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib26-v1530"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sib3 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sib4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sib5 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sib6 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sib7 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sib8 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sib9 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sib10 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sib11 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sib12-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* sib13-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sib14-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* sib15-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sib16-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* sib17-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* sib18-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* sib19-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* sib20-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* sib21-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* sib24-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* sib25-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 } /* sib26-v1530 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_3 = {
	sizeof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member),
	offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, _asn_ctx),
	offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member, present),
	sizeof(((struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member *)0)->present),
	asn_MAP_Member_tag2el_3,
	23,	/* Count of tags in the map */
	0, 0,
	10	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_3 = {
	"CHOICE",
	"CHOICE",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_Member_constr_3, CHOICE_constraint },
	asn_MBR_Member_3,
	23,	/* Elements count */
	&asn_SPC_Member_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sib_TypeAndInfo_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sib_TypeAndInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sib_TypeAndInfo_specs_2 = {
	sizeof(struct SystemInformation_r8_IEs__sib_TypeAndInfo),
	offsetof(struct SystemInformation_r8_IEs__sib_TypeAndInfo, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_TypeAndInfo_2 = {
	"sib-TypeAndInfo",
	"sib-TypeAndInfo",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sib_TypeAndInfo_tags_2,
	sizeof(asn_DEF_sib_TypeAndInfo_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_sib_TypeAndInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_sib_TypeAndInfo_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_sib_TypeAndInfo_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_sib_TypeAndInfo_2,
	1,	/* Single element */
	&asn_SPC_sib_TypeAndInfo_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformation_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_r8_IEs, sib_TypeAndInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sib_TypeAndInfo_2,
		0,
		{ 0, &asn_PER_memb_sib_TypeAndInfo_constr_2,  memb_sib_TypeAndInfo_constraint_1 },
		0, 0, /* No default value */
		"sib-TypeAndInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformation_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformation_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformation_r8_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformation_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformation_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-TypeAndInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_r8_IEs_specs_1 = {
	sizeof(struct SystemInformation_r8_IEs),
	offsetof(struct SystemInformation_r8_IEs, _asn_ctx),
	asn_MAP_SystemInformation_r8_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformation_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformation_r8_IEs = {
	"SystemInformation-r8-IEs",
	"SystemInformation-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformation_r8_IEs_tags_1,
	sizeof(asn_DEF_SystemInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformation_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformation_r8_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformation_r8_IEs_specs_1	/* Additional specs */
};

