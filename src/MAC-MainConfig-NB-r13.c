/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MAC-MainConfig-NB-r13.h"

#include "DRX-Config-NB-r13.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_logicalChannelSR_ProhibitTimer_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelSR_Config_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rai_Activation_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dataInactivityTimerConfig_r14_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_Cycle_v1430_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ra_CFRA_Config_r14_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ul_SCH_Config_r13_2[] = {
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig_NB_r13__ul_SCH_Config_r13, periodicBSR_Timer_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicBSR_Timer_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicBSR-Timer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__ul_SCH_Config_r13, retxBSR_Timer_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RetxBSR_Timer_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"retxBSR-Timer-r13"
		},
};
static const int asn_MAP_ul_SCH_Config_r13_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ul_SCH_Config_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_SCH_Config_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicBSR-Timer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* retxBSR-Timer-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_SCH_Config_r13_specs_2 = {
	sizeof(struct MAC_MainConfig_NB_r13__ul_SCH_Config_r13),
	offsetof(struct MAC_MainConfig_NB_r13__ul_SCH_Config_r13, _asn_ctx),
	asn_MAP_ul_SCH_Config_r13_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_ul_SCH_Config_r13_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SCH_Config_r13_2 = {
	"ul-SCH-Config-r13",
	"ul-SCH-Config-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_SCH_Config_r13_tags_2,
	sizeof(asn_DEF_ul_SCH_Config_r13_tags_2)
		/sizeof(asn_DEF_ul_SCH_Config_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_ul_SCH_Config_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_ul_SCH_Config_r13_tags_2)
		/sizeof(asn_DEF_ul_SCH_Config_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_SCH_Config_r13_2,
	2,	/* Elements count */
	&asn_SPC_ul_SCH_Config_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logicalChannelSR_ProhibitTimer_r13_value2enum_10[] = {
	{ 0,	3,	"pp2" },
	{ 1,	3,	"pp8" },
	{ 2,	4,	"pp32" },
	{ 3,	5,	"pp128" },
	{ 4,	5,	"pp512" },
	{ 5,	6,	"pp1024" },
	{ 6,	6,	"pp2048" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_logicalChannelSR_ProhibitTimer_r13_enum2value_10[] = {
	5,	/* pp1024(5) */
	3,	/* pp128(3) */
	0,	/* pp2(0) */
	6,	/* pp2048(6) */
	2,	/* pp32(2) */
	4,	/* pp512(4) */
	1,	/* pp8(1) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_logicalChannelSR_ProhibitTimer_r13_specs_10 = {
	asn_MAP_logicalChannelSR_ProhibitTimer_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_logicalChannelSR_ProhibitTimer_r13_enum2value_10,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_ProhibitTimer_r13_10 = {
	"logicalChannelSR-ProhibitTimer-r13",
	"logicalChannelSR-ProhibitTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10,
	sizeof(asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10)
		/sizeof(asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10)
		/sizeof(asn_DEF_logicalChannelSR_ProhibitTimer_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_logicalChannelSR_ProhibitTimer_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logicalChannelSR_ProhibitTimer_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup, logicalChannelSR_ProhibitTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logicalChannelSR_ProhibitTimer_r13_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelSR-ProhibitTimer-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* logicalChannelSR-ProhibitTimer-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_9 = {
	sizeof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup),
	offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_9,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_9 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_9,
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]) - 1, /* 1 */
	asn_DEF_setup_tags_9,	/* Same as above */
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_9,
	1,	/* Elements count */
	&asn_SPC_setup_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_logicalChannelSR_Config_r13_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_logicalChannelSR_Config_r13_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelSR_Config_r13_specs_7 = {
	sizeof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13),
	offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13, _asn_ctx),
	offsetof(struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13, present),
	sizeof(((struct MAC_MainConfig_NB_r13__logicalChannelSR_Config_r13 *)0)->present),
	asn_MAP_logicalChannelSR_Config_r13_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_Config_r13_7 = {
	"logicalChannelSR-Config-r13",
	"logicalChannelSR-Config-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_logicalChannelSR_Config_r13_constr_7, CHOICE_constraint },
	asn_MBR_logicalChannelSR_Config_r13_7,
	2,	/* Elements count */
	&asn_SPC_logicalChannelSR_Config_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rai_Activation_r14_value2enum_20[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rai_Activation_r14_enum2value_20[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rai_Activation_r14_specs_20 = {
	asn_MAP_rai_Activation_r14_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_rai_Activation_r14_enum2value_20,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rai_Activation_r14_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rai_Activation_r14_20 = {
	"rai-Activation-r14",
	"rai-Activation-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rai_Activation_r14_tags_20,
	sizeof(asn_DEF_rai_Activation_r14_tags_20)
		/sizeof(asn_DEF_rai_Activation_r14_tags_20[0]) - 1, /* 1 */
	asn_DEF_rai_Activation_r14_tags_20,	/* Same as above */
	sizeof(asn_DEF_rai_Activation_r14_tags_20)
		/sizeof(asn_DEF_rai_Activation_r14_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_rai_Activation_r14_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rai_Activation_r14_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14__setup, dataInactivityTimer_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataInactivityTimer_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataInactivityTimer-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dataInactivityTimer-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_24 = {
	sizeof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14__setup),
	offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_24,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_24 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_24,
	sizeof(asn_DEF_setup_tags_24)
		/sizeof(asn_DEF_setup_tags_24[0]) - 1, /* 1 */
	asn_DEF_setup_tags_24,	/* Same as above */
	sizeof(asn_DEF_setup_tags_24)
		/sizeof(asn_DEF_setup_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_24,
	1,	/* Elements count */
	&asn_SPC_setup_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dataInactivityTimerConfig_r14_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dataInactivityTimerConfig_r14_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_dataInactivityTimerConfig_r14_specs_22 = {
	sizeof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14),
	offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14, _asn_ctx),
	offsetof(struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14, present),
	sizeof(((struct MAC_MainConfig_NB_r13__dataInactivityTimerConfig_r14 *)0)->present),
	asn_MAP_dataInactivityTimerConfig_r14_tag2el_22,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dataInactivityTimerConfig_r14_22 = {
	"dataInactivityTimerConfig-r14",
	"dataInactivityTimerConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_dataInactivityTimerConfig_r14_constr_22, CHOICE_constraint },
	asn_MBR_dataInactivityTimerConfig_r14_22,
	2,	/* Elements count */
	&asn_SPC_dataInactivityTimerConfig_r14_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_Cycle_v1430_value2enum_26[] = {
	{ 0,	6,	"sf1280" },
	{ 1,	6,	"sf2560" },
	{ 2,	6,	"sf5120" },
	{ 3,	7,	"sf10240" }
};
static const unsigned int asn_MAP_drx_Cycle_v1430_enum2value_26[] = {
	3,	/* sf10240(3) */
	0,	/* sf1280(0) */
	1,	/* sf2560(1) */
	2	/* sf5120(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_Cycle_v1430_specs_26 = {
	asn_MAP_drx_Cycle_v1430_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_Cycle_v1430_enum2value_26,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_Cycle_v1430_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_Cycle_v1430_26 = {
	"drx-Cycle-v1430",
	"drx-Cycle-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_Cycle_v1430_tags_26,
	sizeof(asn_DEF_drx_Cycle_v1430_tags_26)
		/sizeof(asn_DEF_drx_Cycle_v1430_tags_26[0]) - 1, /* 1 */
	asn_DEF_drx_Cycle_v1430_tags_26,	/* Same as above */
	sizeof(asn_DEF_drx_Cycle_v1430_tags_26)
		/sizeof(asn_DEF_drx_Cycle_v1430_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_drx_Cycle_v1430_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_Cycle_v1430_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ra_CFRA_Config_r14_value2enum_31[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ra_CFRA_Config_r14_enum2value_31[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ra_CFRA_Config_r14_specs_31 = {
	asn_MAP_ra_CFRA_Config_r14_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_ra_CFRA_Config_r14_enum2value_31,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ra_CFRA_Config_r14_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ra_CFRA_Config_r14_31 = {
	"ra-CFRA-Config-r14",
	"ra-CFRA-Config-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ra_CFRA_Config_r14_tags_31,
	sizeof(asn_DEF_ra_CFRA_Config_r14_tags_31)
		/sizeof(asn_DEF_ra_CFRA_Config_r14_tags_31[0]) - 1, /* 1 */
	asn_DEF_ra_CFRA_Config_r14_tags_31,	/* Same as above */
	sizeof(asn_DEF_ra_CFRA_Config_r14_tags_31)
		/sizeof(asn_DEF_ra_CFRA_Config_r14_tags_31[0]), /* 2 */
	{ 0, &asn_PER_type_ra_CFRA_Config_r14_constr_31, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ra_CFRA_Config_r14_specs_31	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_MainConfig_NB_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MAC_MainConfig_NB_r13, ul_SCH_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_SCH_Config_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-SCH-Config-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig_NB_r13, drx_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DRX_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MAC_MainConfig_NB_r13, timeAlignmentTimerDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerDedicated-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct MAC_MainConfig_NB_r13, logicalChannelSR_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelSR_Config_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelSR-Config-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct MAC_MainConfig_NB_r13, rai_Activation_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rai_Activation_r14_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rai-Activation-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_MainConfig_NB_r13, dataInactivityTimerConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dataInactivityTimerConfig_r14_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataInactivityTimerConfig-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_MainConfig_NB_r13, drx_Cycle_v1430),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_Cycle_v1430_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Cycle-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_MainConfig_NB_r13, ra_CFRA_Config_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ra_CFRA_Config_r14_31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-CFRA-Config-r14"
		},
};
static const int asn_MAP_MAC_MainConfig_NB_r13_oms_1[] = { 0, 1, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_MAC_MainConfig_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_MainConfig_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-SCH-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeAlignmentTimerDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* logicalChannelSR-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rai-Activation-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dataInactivityTimerConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* drx-Cycle-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ra-CFRA-Config-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfig_NB_r13_specs_1 = {
	sizeof(struct MAC_MainConfig_NB_r13),
	offsetof(struct MAC_MainConfig_NB_r13, _asn_ctx),
	asn_MAP_MAC_MainConfig_NB_r13_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_MAC_MainConfig_NB_r13_oms_1,	/* Optional members */
	3, 4,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_MainConfig_NB_r13 = {
	"MAC-MainConfig-NB-r13",
	"MAC-MainConfig-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_MainConfig_NB_r13_tags_1,
	sizeof(asn_DEF_MAC_MainConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_MAC_MainConfig_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_MAC_MainConfig_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_MainConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_MAC_MainConfig_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_MainConfig_NB_r13_1,
	8,	/* Elements count */
	&asn_SPC_MAC_MainConfig_NB_r13_specs_1	/* Additional specs */
};

