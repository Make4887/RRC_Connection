/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType22-NB-r14.h"

#include "DL-ConfigCommonList-NB-r14.h"
#include "UL-ConfigCommonList-NB-r14.h"
#include "NPRACH-ProbabilityAnchorList-NB-r14.h"
#include "UL-ConfigCommonListTDD-NB-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_pagingDistribution_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_Distribution_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pagingDistribution_r15_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_pagingDistribution_r15_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pagingDistribution_r15_specs_11 = {
	asn_MAP_pagingDistribution_r15_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_pagingDistribution_r15_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pagingDistribution_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pagingDistribution_r15_11 = {
	"pagingDistribution-r15",
	"pagingDistribution-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_pagingDistribution_r15_tags_11,
	sizeof(asn_DEF_pagingDistribution_r15_tags_11)
		/sizeof(asn_DEF_pagingDistribution_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_pagingDistribution_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_pagingDistribution_r15_tags_11)
		/sizeof(asn_DEF_pagingDistribution_r15_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_pagingDistribution_r15_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pagingDistribution_r15_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_Distribution_r15_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_nprach_Distribution_r15_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_Distribution_r15_specs_13 = {
	asn_MAP_nprach_Distribution_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_Distribution_r15_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_Distribution_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_Distribution_r15_13 = {
	"nprach-Distribution-r15",
	"nprach-Distribution-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_Distribution_r15_tags_13,
	sizeof(asn_DEF_nprach_Distribution_r15_tags_13)
		/sizeof(asn_DEF_nprach_Distribution_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_nprach_Distribution_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_nprach_Distribution_r15_tags_13)
		/sizeof(asn_DEF_nprach_Distribution_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_Distribution_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_Distribution_r15_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mixedOperationModeConfig_r15_8[] = {
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15, dl_ConfigListMixed_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-ConfigListMixed-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15, ul_ConfigListMixed_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigListMixed-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15, pagingDistribution_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pagingDistribution_r15_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingDistribution-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15, nprach_Distribution_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_Distribution_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Distribution-r15"
		},
};
static const int asn_MAP_mixedOperationModeConfig_r15_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_mixedOperationModeConfig_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mixedOperationModeConfig_r15_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigListMixed-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigListMixed-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingDistribution-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nprach-Distribution-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mixedOperationModeConfig_r15_specs_8 = {
	sizeof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15),
	offsetof(struct SystemInformationBlockType22_NB_r14__mixedOperationModeConfig_r15, _asn_ctx),
	asn_MAP_mixedOperationModeConfig_r15_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_mixedOperationModeConfig_r15_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mixedOperationModeConfig_r15_8 = {
	"mixedOperationModeConfig-r15",
	"mixedOperationModeConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_mixedOperationModeConfig_r15_tags_8,
	sizeof(asn_DEF_mixedOperationModeConfig_r15_tags_8)
		/sizeof(asn_DEF_mixedOperationModeConfig_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_mixedOperationModeConfig_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_mixedOperationModeConfig_r15_tags_8)
		/sizeof(asn_DEF_mixedOperationModeConfig_r15_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_mixedOperationModeConfig_r15_8,
	4,	/* Elements count */
	&asn_SPC_mixedOperationModeConfig_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType22_NB_r14_1[] = {
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType22_NB_r14, dl_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-ConfigList-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType22_NB_r14, ul_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigList-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType22_NB_r14, pagingWeightAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingWeight_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingWeightAnchor-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType22_NB_r14, nprach_ProbabilityAnchorList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ProbabilityAnchorList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ProbabilityAnchorList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType22_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType22_NB_r14, mixedOperationModeConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_mixedOperationModeConfig_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mixedOperationModeConfig-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType22_NB_r14, ul_ConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ConfigCommonListTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigList-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType22_NB_r14_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType22_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingWeightAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-ProbabilityAnchorList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mixedOperationModeConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ul-ConfigList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType22_NB_r14_specs_1 = {
	sizeof(struct SystemInformationBlockType22_NB_r14),
	offsetof(struct SystemInformationBlockType22_NB_r14, _asn_ctx),
	asn_MAP_SystemInformationBlockType22_NB_r14_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType22_NB_r14_oms_1,	/* Optional members */
	5, 2,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType22_NB_r14 = {
	"SystemInformationBlockType22-NB-r14",
	"SystemInformationBlockType22-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType22_NB_r14_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType22_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType22_NB_r14_1,
	7,	/* Elements count */
	&asn_SPC_SystemInformationBlockType22_NB_r14_specs_1	/* Additional specs */
};

