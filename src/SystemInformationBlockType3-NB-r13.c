/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType3-NB-r13.h"

#include "NS-PmaxList-NB-r13.h"
#include "IntraFreqCellReselectionInfo-NB-v1350.h"
#include "IntraFreqCellReselectionInfo-NB-v1360.h"
#include "IntraFreqCellReselectionInfo-NB-v1430.h"
#include "CellReselectionInfoCommon-NB-v1450.h"
#include "NSSS-RRM-Config-NB-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_multiBandInfoList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_q_Hyst_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiBandInfoList_r13_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_npbch_RRM_Config_r15_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_multiBandInfoList_r13_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_q_Hyst_r13_value2enum_3[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB1" },
	{ 2,	3,	"dB2" },
	{ 3,	3,	"dB3" },
	{ 4,	3,	"dB4" },
	{ 5,	3,	"dB5" },
	{ 6,	3,	"dB6" },
	{ 7,	3,	"dB8" },
	{ 8,	4,	"dB10" },
	{ 9,	4,	"dB12" },
	{ 10,	4,	"dB14" },
	{ 11,	4,	"dB16" },
	{ 12,	4,	"dB18" },
	{ 13,	4,	"dB20" },
	{ 14,	4,	"dB22" },
	{ 15,	4,	"dB24" }
};
static const unsigned int asn_MAP_q_Hyst_r13_enum2value_3[] = {
	0,	/* dB0(0) */
	1,	/* dB1(1) */
	8,	/* dB10(8) */
	9,	/* dB12(9) */
	10,	/* dB14(10) */
	11,	/* dB16(11) */
	12,	/* dB18(12) */
	2,	/* dB2(2) */
	13,	/* dB20(13) */
	14,	/* dB22(14) */
	15,	/* dB24(15) */
	3,	/* dB3(3) */
	4,	/* dB4(4) */
	5,	/* dB5(5) */
	6,	/* dB6(6) */
	7	/* dB8(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_q_Hyst_r13_specs_3 = {
	asn_MAP_q_Hyst_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_q_Hyst_r13_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_q_Hyst_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_q_Hyst_r13_3 = {
	"q-Hyst-r13",
	"q-Hyst-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_q_Hyst_r13_tags_3,
	sizeof(asn_DEF_q_Hyst_r13_tags_3)
		/sizeof(asn_DEF_q_Hyst_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_q_Hyst_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_q_Hyst_r13_tags_3)
		/sizeof(asn_DEF_q_Hyst_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_q_Hyst_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_q_Hyst_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionInfoCommon_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13, q_Hyst_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_q_Hyst_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-Hyst-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_cellReselectionInfoCommon_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionInfoCommon_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-Hyst-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionInfoCommon_r13_specs_2 = {
	sizeof(struct SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13),
	offsetof(struct SystemInformationBlockType3_NB_r13__cellReselectionInfoCommon_r13, _asn_ctx),
	asn_MAP_cellReselectionInfoCommon_r13_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionInfoCommon_r13_2 = {
	"cellReselectionInfoCommon-r13",
	"cellReselectionInfoCommon-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionInfoCommon_r13_tags_2,
	sizeof(asn_DEF_cellReselectionInfoCommon_r13_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellReselectionInfoCommon_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellReselectionInfoCommon_r13_tags_2)
		/sizeof(asn_DEF_cellReselectionInfoCommon_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionInfoCommon_r13_2,
	1,	/* Elements count */
	&asn_SPC_cellReselectionInfoCommon_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellReselectionServingFreqInfo_r13_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13__cellReselectionServingFreqInfo_r13, s_NonIntraSearch_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-NonIntraSearch-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_cellReselectionServingFreqInfo_r13_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellReselectionServingFreqInfo_r13_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* s-NonIntraSearch-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellReselectionServingFreqInfo_r13_specs_20 = {
	sizeof(struct SystemInformationBlockType3_NB_r13__cellReselectionServingFreqInfo_r13),
	offsetof(struct SystemInformationBlockType3_NB_r13__cellReselectionServingFreqInfo_r13, _asn_ctx),
	asn_MAP_cellReselectionServingFreqInfo_r13_tag2el_20,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellReselectionServingFreqInfo_r13_20 = {
	"cellReselectionServingFreqInfo-r13",
	"cellReselectionServingFreqInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_cellReselectionServingFreqInfo_r13_tags_20,
	sizeof(asn_DEF_cellReselectionServingFreqInfo_r13_tags_20)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_r13_tags_20[0]) - 1, /* 1 */
	asn_DEF_cellReselectionServingFreqInfo_r13_tags_20,	/* Same as above */
	sizeof(asn_DEF_cellReselectionServingFreqInfo_r13_tags_20)
		/sizeof(asn_DEF_cellReselectionServingFreqInfo_r13_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellReselectionServingFreqInfo_r13_20,
	1,	/* Elements count */
	&asn_SPC_cellReselectionServingFreqInfo_r13_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_intraFreqCellReselectionInfo_r13_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, q_QualMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-QualMin-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, p_Max_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, s_IntraSearchP_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-IntraSearchP-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, t_Reselection_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-Reselection-r13"
		},
};
static const int asn_MAP_intraFreqCellReselectionInfo_r13_oms_22[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_intraFreqCellReselectionInfo_r13_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_intraFreqCellReselectionInfo_r13_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-QualMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-Max-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* s-IntraSearchP-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* t-Reselection-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_intraFreqCellReselectionInfo_r13_specs_22 = {
	sizeof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13),
	offsetof(struct SystemInformationBlockType3_NB_r13__intraFreqCellReselectionInfo_r13, _asn_ctx),
	asn_MAP_intraFreqCellReselectionInfo_r13_tag2el_22,
	5,	/* Count of tags in the map */
	asn_MAP_intraFreqCellReselectionInfo_r13_oms_22,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqCellReselectionInfo_r13_22 = {
	"intraFreqCellReselectionInfo-r13",
	"intraFreqCellReselectionInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_intraFreqCellReselectionInfo_r13_tags_22,
	sizeof(asn_DEF_intraFreqCellReselectionInfo_r13_tags_22)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_r13_tags_22[0]) - 1, /* 1 */
	asn_DEF_intraFreqCellReselectionInfo_r13_tags_22,	/* Same as above */
	sizeof(asn_DEF_intraFreqCellReselectionInfo_r13_tags_22)
		/sizeof(asn_DEF_intraFreqCellReselectionInfo_r13_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_intraFreqCellReselectionInfo_r13_22,
	5,	/* Elements count */
	&asn_SPC_intraFreqCellReselectionInfo_r13_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_multiBandInfoList_r13_29[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NS_PmaxList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_multiBandInfoList_r13_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_multiBandInfoList_r13_specs_29 = {
	sizeof(struct SystemInformationBlockType3_NB_r13__multiBandInfoList_r13),
	offsetof(struct SystemInformationBlockType3_NB_r13__multiBandInfoList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiBandInfoList_r13_29 = {
	"multiBandInfoList-r13",
	"multiBandInfoList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_multiBandInfoList_r13_tags_29,
	sizeof(asn_DEF_multiBandInfoList_r13_tags_29)
		/sizeof(asn_DEF_multiBandInfoList_r13_tags_29[0]) - 1, /* 1 */
	asn_DEF_multiBandInfoList_r13_tags_29,	/* Same as above */
	sizeof(asn_DEF_multiBandInfoList_r13_tags_29)
		/sizeof(asn_DEF_multiBandInfoList_r13_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_multiBandInfoList_r13_constr_29, SEQUENCE_OF_constraint },
	asn_MBR_multiBandInfoList_r13_29,
	1,	/* Single element */
	&asn_SPC_multiBandInfoList_r13_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_npbch_RRM_Config_r15_value2enum_38[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_npbch_RRM_Config_r15_enum2value_38[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_npbch_RRM_Config_r15_specs_38 = {
	asn_MAP_npbch_RRM_Config_r15_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_npbch_RRM_Config_r15_enum2value_38,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_npbch_RRM_Config_r15_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_npbch_RRM_Config_r15_38 = {
	"npbch-RRM-Config-r15",
	"npbch-RRM-Config-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_npbch_RRM_Config_r15_tags_38,
	sizeof(asn_DEF_npbch_RRM_Config_r15_tags_38)
		/sizeof(asn_DEF_npbch_RRM_Config_r15_tags_38[0]) - 1, /* 1 */
	asn_DEF_npbch_RRM_Config_r15_tags_38,	/* Same as above */
	sizeof(asn_DEF_npbch_RRM_Config_r15_tags_38)
		/sizeof(asn_DEF_npbch_RRM_Config_r15_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_npbch_RRM_Config_r15_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_npbch_RRM_Config_r15_specs_38	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType3_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13, cellReselectionInfoCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellReselectionInfoCommon_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13, cellReselectionServingFreqInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellReselectionServingFreqInfo_r13_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionServingFreqInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType3_NB_r13, intraFreqCellReselectionInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_intraFreqCellReselectionInfo_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct SystemInformationBlockType3_NB_r13, freqBandInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NS_PmaxList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandInfo-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType3_NB_r13, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_multiBandInfoList_r13_29,
		0,
		{ 0, &asn_PER_memb_multiBandInfoList_r13_constr_29,  memb_multiBandInfoList_r13_constraint_1 },
		0, 0, /* No default value */
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType3_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType3_NB_r13, intraFreqCellReselectionInfo_v1350),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellReselectionInfo_NB_v1350,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo-v1350"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType3_NB_r13, intraFreqCellReselectionInfo_v1360),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellReselectionInfo_NB_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo-v1360"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType3_NB_r13, intraFreqCellReselectionInfo_v1430),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellReselectionInfo_NB_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqCellReselectionInfo-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType3_NB_r13, cellReselectionInfoCommon_v1450),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionInfoCommon_NB_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionInfoCommon-v1450"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType3_NB_r13, nsss_RRM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NSSS_RRM_Config_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nsss-RRM-Config-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType3_NB_r13, npbch_RRM_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_npbch_RRM_Config_r15_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npbch-RRM-Config-r15"
		},
};
static const int asn_MAP_SystemInformationBlockType3_NB_r13_oms_1[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType3_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType3_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellReselectionInfoCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionServingFreqInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqCellReselectionInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqBandInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multiBandInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* intraFreqCellReselectionInfo-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* intraFreqCellReselectionInfo-v1360 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* intraFreqCellReselectionInfo-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellReselectionInfoCommon-v1450 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* nsss-RRM-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* npbch-RRM-Config-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType3_NB_r13_specs_1 = {
	sizeof(struct SystemInformationBlockType3_NB_r13),
	offsetof(struct SystemInformationBlockType3_NB_r13, _asn_ctx),
	asn_MAP_SystemInformationBlockType3_NB_r13_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType3_NB_r13_oms_1,	/* Optional members */
	3, 6,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType3_NB_r13 = {
	"SystemInformationBlockType3-NB-r13",
	"SystemInformationBlockType3-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType3_NB_r13_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType3_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType3_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType3_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType3_NB_r13_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType3_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType3_NB_r13_1,
	12,	/* Elements count */
	&asn_SPC_SystemInformationBlockType3_NB_r13_specs_1	/* Additional specs */
};

