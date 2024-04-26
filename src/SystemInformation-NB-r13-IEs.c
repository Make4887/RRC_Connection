/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformation-NB-r13-IEs.h"

static int
memb_sib_TypeAndInfo_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sib_TypeAndInfo_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sib_TypeAndInfo_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib2_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib2-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib3_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType3_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib3-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib4_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType4_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib5_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType5_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib5-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib14_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType14_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib14-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib16_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType16_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib16-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib15_v1430),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType15_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib15-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib20_v1430),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType20_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib20-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib22_v1430),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType22_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib22-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib23_v1530),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType23_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib23-v1530"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib2-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sib3-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sib4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sib5-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sib14-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sib16-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sib15-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sib20-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sib22-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* sib23-v1530 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_3 = {
	sizeof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, _asn_ctx),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, present),
	sizeof(((struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member *)0)->present),
	asn_MAP_Member_tag2el_3,
	10,	/* Count of tags in the map */
	0, 0,
	6	/* Extensions start */
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
	10,	/* Elements count */
	&asn_SPC_Member_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sib_TypeAndInfo_r13_2[] = {
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
static const ber_tlv_tag_t asn_DEF_sib_TypeAndInfo_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sib_TypeAndInfo_r13_specs_2 = {
	sizeof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_TypeAndInfo_r13_2 = {
	"sib-TypeAndInfo-r13",
	"sib-TypeAndInfo-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sib_TypeAndInfo_r13_tags_2,
	sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_sib_TypeAndInfo_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_sib_TypeAndInfo_r13_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_sib_TypeAndInfo_r13_2,
	1,	/* Single element */
	&asn_SPC_sib_TypeAndInfo_r13_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_16 = {
	sizeof(struct SystemInformation_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct SystemInformation_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_16 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_16,
	sizeof(asn_DEF_nonCriticalExtension_tags_16)
		/sizeof(asn_DEF_nonCriticalExtension_tags_16[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_16,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_16)
		/sizeof(asn_DEF_nonCriticalExtension_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformation_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs, sib_TypeAndInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sib_TypeAndInfo_r13_2,
		0,
		{ 0, &asn_PER_memb_sib_TypeAndInfo_r13_constr_2,  memb_sib_TypeAndInfo_r13_constraint_1 },
		0, 0, /* No default value */
		"sib-TypeAndInfo-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformation_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformation_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformation_NB_r13_IEs_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformation_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformation_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-TypeAndInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_NB_r13_IEs_specs_1 = {
	sizeof(struct SystemInformation_NB_r13_IEs),
	offsetof(struct SystemInformation_NB_r13_IEs, _asn_ctx),
	asn_MAP_SystemInformation_NB_r13_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformation_NB_r13_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformation_NB_r13_IEs = {
	"SystemInformation-NB-r13-IEs",
	"SystemInformation-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformation_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformation_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformation_NB_r13_IEs_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformation_NB_r13_IEs_specs_1	/* Additional specs */
};

