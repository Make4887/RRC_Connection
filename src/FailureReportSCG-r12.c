/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "FailureReportSCG-r12.h"

#include "MeasResultServFreqList-r10.h"
#include "MeasResultList2EUTRA-r9.h"
#include "MeasResultServFreqListExt-r13.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_failureType_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_failureType_v1290_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_failureType_r12_value2enum_2[] = {
	{ 0,	11,	"t313-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	17,	"scg-ChangeFailure" }
};
static const unsigned int asn_MAP_failureType_r12_enum2value_2[] = {
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	3,	/* scg-ChangeFailure(3) */
	0	/* t313-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_failureType_r12_specs_2 = {
	asn_MAP_failureType_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_failureType_r12_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_failureType_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_failureType_r12_2 = {
	"failureType-r12",
	"failureType-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_failureType_r12_tags_2,
	sizeof(asn_DEF_failureType_r12_tags_2)
		/sizeof(asn_DEF_failureType_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_failureType_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_failureType_r12_tags_2)
		/sizeof(asn_DEF_failureType_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_failureType_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_failureType_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_failureType_v1290_value2enum_10[] = {
	{ 0,	22,	"maxUL-TimingDiff-v1290" }
};
static const unsigned int asn_MAP_failureType_v1290_enum2value_10[] = {
	0	/* maxUL-TimingDiff-v1290(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_failureType_v1290_specs_10 = {
	asn_MAP_failureType_v1290_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_failureType_v1290_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_failureType_v1290_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_failureType_v1290_10 = {
	"failureType-v1290",
	"failureType-v1290",
	&asn_OP_NativeEnumerated,
	asn_DEF_failureType_v1290_tags_10,
	sizeof(asn_DEF_failureType_v1290_tags_10)
		/sizeof(asn_DEF_failureType_v1290_tags_10[0]) - 1, /* 1 */
	asn_DEF_failureType_v1290_tags_10,	/* Same as above */
	sizeof(asn_DEF_failureType_v1290_tags_10)
		/sizeof(asn_DEF_failureType_v1290_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_failureType_v1290_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_failureType_v1290_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FailureReportSCG_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FailureReportSCG_r12, failureType_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_failureType_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct FailureReportSCG_r12, measResultServFreqList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultServFreqList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServFreqList-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct FailureReportSCG_r12, measResultNeighCells_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct FailureReportSCG_r12, failureType_v1290),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_failureType_v1290_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType-v1290"
		},
	{ ATF_POINTER, 1, offsetof(struct FailureReportSCG_r12, measResultServFreqListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultServFreqListExt_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServFreqListExt-r13"
		},
};
static const int asn_MAP_FailureReportSCG_r12_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_FailureReportSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FailureReportSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureType-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultServFreqList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultNeighCells-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* failureType-v1290 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* measResultServFreqListExt-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_r12_specs_1 = {
	sizeof(struct FailureReportSCG_r12),
	offsetof(struct FailureReportSCG_r12, _asn_ctx),
	asn_MAP_FailureReportSCG_r12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_FailureReportSCG_r12_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FailureReportSCG_r12 = {
	"FailureReportSCG-r12",
	"FailureReportSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_FailureReportSCG_r12_tags_1,
	sizeof(asn_DEF_FailureReportSCG_r12_tags_1)
		/sizeof(asn_DEF_FailureReportSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_FailureReportSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_FailureReportSCG_r12_tags_1)
		/sizeof(asn_DEF_FailureReportSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FailureReportSCG_r12_1,
	5,	/* Elements count */
	&asn_SPC_FailureReportSCG_r12_specs_1	/* Additional specs */
};

