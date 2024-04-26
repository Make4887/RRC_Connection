/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UEAssistanceInformation-v1430-IEs.h"

#include "BW-Preference-r14.h"
#include "DelayBudgetReport-r14.h"
#include "UEAssistanceInformation-v1450-IEs.h"
#include "TrafficPatternInfoList-r14.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_rlm_Event_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_excessRep_MPDCCH_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sps_AssistanceInformation_r14_3[] = {
	{ ATF_POINTER, 2, offsetof(struct UEAssistanceInformation_v1430_IEs__sps_AssistanceInformation_r14, trafficPatternInfoListSL_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficPatternInfoList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trafficPatternInfoListSL-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1430_IEs__sps_AssistanceInformation_r14, trafficPatternInfoListUL_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficPatternInfoList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trafficPatternInfoListUL-r14"
		},
};
static const int asn_MAP_sps_AssistanceInformation_r14_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_sps_AssistanceInformation_r14_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sps_AssistanceInformation_r14_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trafficPatternInfoListSL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trafficPatternInfoListUL-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sps_AssistanceInformation_r14_specs_3 = {
	sizeof(struct UEAssistanceInformation_v1430_IEs__sps_AssistanceInformation_r14),
	offsetof(struct UEAssistanceInformation_v1430_IEs__sps_AssistanceInformation_r14, _asn_ctx),
	asn_MAP_sps_AssistanceInformation_r14_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_sps_AssistanceInformation_r14_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sps_AssistanceInformation_r14_3 = {
	"sps-AssistanceInformation-r14",
	"sps-AssistanceInformation-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_sps_AssistanceInformation_r14_tags_3,
	sizeof(asn_DEF_sps_AssistanceInformation_r14_tags_3)
		/sizeof(asn_DEF_sps_AssistanceInformation_r14_tags_3[0]) - 1, /* 1 */
	asn_DEF_sps_AssistanceInformation_r14_tags_3,	/* Same as above */
	sizeof(asn_DEF_sps_AssistanceInformation_r14_tags_3)
		/sizeof(asn_DEF_sps_AssistanceInformation_r14_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_sps_AssistanceInformation_r14_3,
	2,	/* Elements count */
	&asn_SPC_sps_AssistanceInformation_r14_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlm_Event_r14_value2enum_7[] = {
	{ 0,	14,	"earlyOutOfSync" },
	{ 1,	11,	"earlyInSync" }
};
static const unsigned int asn_MAP_rlm_Event_r14_enum2value_7[] = {
	1,	/* earlyInSync(1) */
	0	/* earlyOutOfSync(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlm_Event_r14_specs_7 = {
	asn_MAP_rlm_Event_r14_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_rlm_Event_r14_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlm_Event_r14_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlm_Event_r14_7 = {
	"rlm-Event-r14",
	"rlm-Event-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlm_Event_r14_tags_7,
	sizeof(asn_DEF_rlm_Event_r14_tags_7)
		/sizeof(asn_DEF_rlm_Event_r14_tags_7[0]) - 1, /* 1 */
	asn_DEF_rlm_Event_r14_tags_7,	/* Same as above */
	sizeof(asn_DEF_rlm_Event_r14_tags_7)
		/sizeof(asn_DEF_rlm_Event_r14_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_rlm_Event_r14_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlm_Event_r14_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_excessRep_MPDCCH_r14_value2enum_10[] = {
	{ 0,	10,	"excessRep1" },
	{ 1,	10,	"excessRep2" }
};
static const unsigned int asn_MAP_excessRep_MPDCCH_r14_enum2value_10[] = {
	0,	/* excessRep1(0) */
	1	/* excessRep2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_excessRep_MPDCCH_r14_specs_10 = {
	asn_MAP_excessRep_MPDCCH_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_excessRep_MPDCCH_r14_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_excessRep_MPDCCH_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_excessRep_MPDCCH_r14_10 = {
	"excessRep-MPDCCH-r14",
	"excessRep-MPDCCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_excessRep_MPDCCH_r14_tags_10,
	sizeof(asn_DEF_excessRep_MPDCCH_r14_tags_10)
		/sizeof(asn_DEF_excessRep_MPDCCH_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_excessRep_MPDCCH_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_excessRep_MPDCCH_r14_tags_10)
		/sizeof(asn_DEF_excessRep_MPDCCH_r14_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_excessRep_MPDCCH_r14_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_excessRep_MPDCCH_r14_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rlm_Report_r14_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEAssistanceInformation_v1430_IEs__rlm_Report_r14, rlm_Event_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlm_Event_r14_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlm-Event-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1430_IEs__rlm_Report_r14, excessRep_MPDCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_excessRep_MPDCCH_r14_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"excessRep-MPDCCH-r14"
		},
};
static const int asn_MAP_rlm_Report_r14_oms_6[] = { 1 };
static const ber_tlv_tag_t asn_DEF_rlm_Report_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rlm_Report_r14_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlm-Event-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* excessRep-MPDCCH-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_rlm_Report_r14_specs_6 = {
	sizeof(struct UEAssistanceInformation_v1430_IEs__rlm_Report_r14),
	offsetof(struct UEAssistanceInformation_v1430_IEs__rlm_Report_r14, _asn_ctx),
	asn_MAP_rlm_Report_r14_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_rlm_Report_r14_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlm_Report_r14_6 = {
	"rlm-Report-r14",
	"rlm-Report-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_rlm_Report_r14_tags_6,
	sizeof(asn_DEF_rlm_Report_r14_tags_6)
		/sizeof(asn_DEF_rlm_Report_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_rlm_Report_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_rlm_Report_r14_tags_6)
		/sizeof(asn_DEF_rlm_Report_r14_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rlm_Report_r14_6,
	2,	/* Elements count */
	&asn_SPC_rlm_Report_r14_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1430_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct UEAssistanceInformation_v1430_IEs, bw_Preference_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BW_Preference_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bw-Preference-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct UEAssistanceInformation_v1430_IEs, sps_AssistanceInformation_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sps_AssistanceInformation_r14_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-AssistanceInformation-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct UEAssistanceInformation_v1430_IEs, rlm_Report_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_rlm_Report_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlm-Report-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct UEAssistanceInformation_v1430_IEs, delayBudgetReport_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DelayBudgetReport_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayBudgetReport-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct UEAssistanceInformation_v1430_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEAssistanceInformation_v1450_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEAssistanceInformation_v1430_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEAssistanceInformation_v1430_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bw-Preference-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-AssistanceInformation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlm-Report-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* delayBudgetReport-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1430_IEs_specs_1 = {
	sizeof(struct UEAssistanceInformation_v1430_IEs),
	offsetof(struct UEAssistanceInformation_v1430_IEs, _asn_ctx),
	asn_MAP_UEAssistanceInformation_v1430_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UEAssistanceInformation_v1430_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1430_IEs = {
	"UEAssistanceInformation-v1430-IEs",
	"UEAssistanceInformation-v1430-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1,
	sizeof(asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1)
		/sizeof(asn_DEF_UEAssistanceInformation_v1430_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEAssistanceInformation_v1430_IEs_1,
	5,	/* Elements count */
	&asn_SPC_UEAssistanceInformation_v1430_IEs_specs_1	/* Additional specs */
};

