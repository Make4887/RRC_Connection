/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType25-r15.h"

#include "UAC-BarringPerCatList-r15.h"
#include "UAC-BarringPerPLMN-List-r15.h"
static int
memb_individualPLMNList_r15_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 2 && size <= 6)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_individualPLMNList_r15_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  2,  6 }	/* (SIZE(2..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_individualPLMNList_r15_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  2,  6 }	/* (SIZE(2..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_uac_AC1_SelectAssistInfo_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_individualPLMNList_r15_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_UAC_AC1_SelectAssistInfo_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_individualPLMNList_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_individualPLMNList_r15_specs_7 = {
	sizeof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15__individualPLMNList_r15),
	offsetof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15__individualPLMNList_r15, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individualPLMNList_r15_7 = {
	"individualPLMNList-r15",
	"individualPLMNList-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_individualPLMNList_r15_tags_7,
	sizeof(asn_DEF_individualPLMNList_r15_tags_7)
		/sizeof(asn_DEF_individualPLMNList_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_individualPLMNList_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_individualPLMNList_r15_tags_7)
		/sizeof(asn_DEF_individualPLMNList_r15_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_individualPLMNList_r15_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_individualPLMNList_r15_7,
	1,	/* Single element */
	&asn_SPC_individualPLMNList_r15_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uac_AC1_SelectAssistInfo_r15_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15, choice.plmnCommon_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_AC1_SelectAssistInfo_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmnCommon-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15, choice.individualPLMNList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_individualPLMNList_r15_7,
		0,
		{ 0, &asn_PER_memb_individualPLMNList_r15_constr_7,  memb_individualPLMNList_r15_constraint_5 },
		0, 0, /* No default value */
		"individualPLMNList-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_uac_AC1_SelectAssistInfo_r15_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmnCommon-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* individualPLMNList-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_uac_AC1_SelectAssistInfo_r15_specs_5 = {
	sizeof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15),
	offsetof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15, _asn_ctx),
	offsetof(struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15, present),
	sizeof(((struct SystemInformationBlockType25_r15__uac_AC1_SelectAssistInfo_r15 *)0)->present),
	asn_MAP_uac_AC1_SelectAssistInfo_r15_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_AC1_SelectAssistInfo_r15_5 = {
	"uac-AC1-SelectAssistInfo-r15",
	"uac-AC1-SelectAssistInfo-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_uac_AC1_SelectAssistInfo_r15_constr_5, CHOICE_constraint },
	asn_MBR_uac_AC1_SelectAssistInfo_r15_5,
	2,	/* Elements count */
	&asn_SPC_uac_AC1_SelectAssistInfo_r15_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType25_r15_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType25_r15, uac_BarringForCommon_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringPerCatList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringForCommon-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType25_r15, uac_BarringPerPLMN_List_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringPerPLMN_List_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringPerPLMN-List-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType25_r15, uac_BarringInfoSetList_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringInfoSetList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-BarringInfoSetList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType25_r15, uac_AC1_SelectAssistInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_uac_AC1_SelectAssistInfo_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-AC1-SelectAssistInfo-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType25_r15, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType25_r15_oms_1[] = { 0, 1, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType25_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType25_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uac-BarringForCommon-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uac-BarringPerPLMN-List-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uac-BarringInfoSetList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uac-AC1-SelectAssistInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType25_r15_specs_1 = {
	sizeof(struct SystemInformationBlockType25_r15),
	offsetof(struct SystemInformationBlockType25_r15, _asn_ctx),
	asn_MAP_SystemInformationBlockType25_r15_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType25_r15_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType25_r15 = {
	"SystemInformationBlockType25-r15",
	"SystemInformationBlockType25-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType25_r15_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType25_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType25_r15_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType25_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType25_r15_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType25_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType25_r15_1,
	5,	/* Elements count */
	&asn_SPC_SystemInformationBlockType25_r15_specs_1	/* Additional specs */
};

