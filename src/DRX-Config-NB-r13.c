/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_drx_StartOffset_r13_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_onDurationTimer_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_InactivityTimer_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_RetransmissionTimer_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_Cycle_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drx_ULRetransmissionTimer_r13_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_drx_StartOffset_r13_constr_56 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_DRX_Config_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_onDurationTimer_r13_value2enum_4[] = {
	{ 0,	3,	"pp1" },
	{ 1,	3,	"pp2" },
	{ 2,	3,	"pp3" },
	{ 3,	3,	"pp4" },
	{ 4,	3,	"pp8" },
	{ 5,	4,	"pp16" },
	{ 6,	4,	"pp32" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_onDurationTimer_r13_enum2value_4[] = {
	0,	/* pp1(0) */
	5,	/* pp16(5) */
	1,	/* pp2(1) */
	2,	/* pp3(2) */
	6,	/* pp32(6) */
	3,	/* pp4(3) */
	4,	/* pp8(4) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_onDurationTimer_r13_specs_4 = {
	asn_MAP_onDurationTimer_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_onDurationTimer_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_onDurationTimer_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_onDurationTimer_r13_4 = {
	"onDurationTimer-r13",
	"onDurationTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_onDurationTimer_r13_tags_4,
	sizeof(asn_DEF_onDurationTimer_r13_tags_4)
		/sizeof(asn_DEF_onDurationTimer_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_onDurationTimer_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_onDurationTimer_r13_tags_4)
		/sizeof(asn_DEF_onDurationTimer_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_onDurationTimer_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_onDurationTimer_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_InactivityTimer_r13_value2enum_13[] = {
	{ 0,	3,	"pp0" },
	{ 1,	3,	"pp1" },
	{ 2,	3,	"pp2" },
	{ 3,	3,	"pp3" },
	{ 4,	3,	"pp4" },
	{ 5,	3,	"pp8" },
	{ 6,	4,	"pp16" },
	{ 7,	4,	"pp32" }
};
static const unsigned int asn_MAP_drx_InactivityTimer_r13_enum2value_13[] = {
	0,	/* pp0(0) */
	1,	/* pp1(1) */
	6,	/* pp16(6) */
	2,	/* pp2(2) */
	3,	/* pp3(3) */
	7,	/* pp32(7) */
	4,	/* pp4(4) */
	5	/* pp8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_InactivityTimer_r13_specs_13 = {
	asn_MAP_drx_InactivityTimer_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_InactivityTimer_r13_enum2value_13,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_InactivityTimer_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimer_r13_13 = {
	"drx-InactivityTimer-r13",
	"drx-InactivityTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_InactivityTimer_r13_tags_13,
	sizeof(asn_DEF_drx_InactivityTimer_r13_tags_13)
		/sizeof(asn_DEF_drx_InactivityTimer_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_drx_InactivityTimer_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_drx_InactivityTimer_r13_tags_13)
		/sizeof(asn_DEF_drx_InactivityTimer_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_drx_InactivityTimer_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_InactivityTimer_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_RetransmissionTimer_r13_value2enum_22[] = {
	{ 0,	3,	"pp0" },
	{ 1,	3,	"pp1" },
	{ 2,	3,	"pp2" },
	{ 3,	3,	"pp4" },
	{ 4,	3,	"pp6" },
	{ 5,	3,	"pp8" },
	{ 6,	4,	"pp16" },
	{ 7,	4,	"pp24" },
	{ 8,	4,	"pp33" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_drx_RetransmissionTimer_r13_enum2value_22[] = {
	0,	/* pp0(0) */
	1,	/* pp1(1) */
	6,	/* pp16(6) */
	2,	/* pp2(2) */
	7,	/* pp24(7) */
	8,	/* pp33(8) */
	3,	/* pp4(3) */
	4,	/* pp6(4) */
	5,	/* pp8(5) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9	/* spare7(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_RetransmissionTimer_r13_specs_22 = {
	asn_MAP_drx_RetransmissionTimer_r13_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_RetransmissionTimer_r13_enum2value_22,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_RetransmissionTimer_r13_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_r13_22 = {
	"drx-RetransmissionTimer-r13",
	"drx-RetransmissionTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_RetransmissionTimer_r13_tags_22,
	sizeof(asn_DEF_drx_RetransmissionTimer_r13_tags_22)
		/sizeof(asn_DEF_drx_RetransmissionTimer_r13_tags_22[0]) - 1, /* 1 */
	asn_DEF_drx_RetransmissionTimer_r13_tags_22,	/* Same as above */
	sizeof(asn_DEF_drx_RetransmissionTimer_r13_tags_22)
		/sizeof(asn_DEF_drx_RetransmissionTimer_r13_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_drx_RetransmissionTimer_r13_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_RetransmissionTimer_r13_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_Cycle_r13_value2enum_39[] = {
	{ 0,	5,	"sf256" },
	{ 1,	5,	"sf512" },
	{ 2,	6,	"sf1024" },
	{ 3,	6,	"sf1536" },
	{ 4,	6,	"sf2048" },
	{ 5,	6,	"sf3072" },
	{ 6,	6,	"sf4096" },
	{ 7,	6,	"sf4608" },
	{ 8,	6,	"sf6144" },
	{ 9,	6,	"sf7680" },
	{ 10,	6,	"sf8192" },
	{ 11,	6,	"sf9216" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_drx_Cycle_r13_enum2value_39[] = {
	2,	/* sf1024(2) */
	3,	/* sf1536(3) */
	4,	/* sf2048(4) */
	0,	/* sf256(0) */
	5,	/* sf3072(5) */
	6,	/* sf4096(6) */
	7,	/* sf4608(7) */
	1,	/* sf512(1) */
	8,	/* sf6144(8) */
	9,	/* sf7680(9) */
	10,	/* sf8192(10) */
	11,	/* sf9216(11) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_Cycle_r13_specs_39 = {
	asn_MAP_drx_Cycle_r13_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_Cycle_r13_enum2value_39,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_Cycle_r13_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_Cycle_r13_39 = {
	"drx-Cycle-r13",
	"drx-Cycle-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_Cycle_r13_tags_39,
	sizeof(asn_DEF_drx_Cycle_r13_tags_39)
		/sizeof(asn_DEF_drx_Cycle_r13_tags_39[0]) - 1, /* 1 */
	asn_DEF_drx_Cycle_r13_tags_39,	/* Same as above */
	sizeof(asn_DEF_drx_Cycle_r13_tags_39)
		/sizeof(asn_DEF_drx_Cycle_r13_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_drx_Cycle_r13_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_Cycle_r13_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_ULRetransmissionTimer_r13_value2enum_57[] = {
	{ 0,	3,	"pp0" },
	{ 1,	3,	"pp1" },
	{ 2,	3,	"pp2" },
	{ 3,	3,	"pp4" },
	{ 4,	3,	"pp6" },
	{ 5,	3,	"pp8" },
	{ 6,	4,	"pp16" },
	{ 7,	4,	"pp24" },
	{ 8,	4,	"pp33" },
	{ 9,	4,	"pp40" },
	{ 10,	4,	"pp64" },
	{ 11,	4,	"pp80" },
	{ 12,	4,	"pp96" },
	{ 13,	5,	"pp112" },
	{ 14,	5,	"pp128" },
	{ 15,	5,	"pp160" },
	{ 16,	5,	"pp320" }
};
static const unsigned int asn_MAP_drx_ULRetransmissionTimer_r13_enum2value_57[] = {
	0,	/* pp0(0) */
	1,	/* pp1(1) */
	13,	/* pp112(13) */
	14,	/* pp128(14) */
	6,	/* pp16(6) */
	15,	/* pp160(15) */
	2,	/* pp2(2) */
	7,	/* pp24(7) */
	16,	/* pp320(16) */
	8,	/* pp33(8) */
	3,	/* pp4(3) */
	9,	/* pp40(9) */
	4,	/* pp6(4) */
	10,	/* pp64(10) */
	5,	/* pp8(5) */
	11,	/* pp80(11) */
	12	/* pp96(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_ULRetransmissionTimer_r13_specs_57 = {
	asn_MAP_drx_ULRetransmissionTimer_r13_value2enum_57,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_ULRetransmissionTimer_r13_enum2value_57,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_ULRetransmissionTimer_r13_tags_57[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_ULRetransmissionTimer_r13_57 = {
	"drx-ULRetransmissionTimer-r13",
	"drx-ULRetransmissionTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_ULRetransmissionTimer_r13_tags_57,
	sizeof(asn_DEF_drx_ULRetransmissionTimer_r13_tags_57)
		/sizeof(asn_DEF_drx_ULRetransmissionTimer_r13_tags_57[0]) - 1, /* 1 */
	asn_DEF_drx_ULRetransmissionTimer_r13_tags_57,	/* Same as above */
	sizeof(asn_DEF_drx_ULRetransmissionTimer_r13_tags_57)
		/sizeof(asn_DEF_drx_ULRetransmissionTimer_r13_tags_57[0]), /* 2 */
	{ 0, &asn_PER_type_drx_ULRetransmissionTimer_r13_constr_57, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_ULRetransmissionTimer_r13_specs_57	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, onDurationTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_onDurationTimer_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDurationTimer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, drx_InactivityTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_InactivityTimer_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InactivityTimer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, drx_RetransmissionTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_RetransmissionTimer_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-RetransmissionTimer-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, drx_Cycle_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_Cycle_r13_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Cycle-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, drx_StartOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_drx_StartOffset_r13_constr_56,  memb_drx_StartOffset_r13_constraint_3 },
		0, 0, /* No default value */
		"drx-StartOffset-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13__setup, drx_ULRetransmissionTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_ULRetransmissionTimer_r13_57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-ULRetransmissionTimer-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* onDurationTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-InactivityTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drx-RetransmissionTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* drx-Cycle-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* drx-StartOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* drx-ULRetransmissionTimer-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct DRX_Config_NB_r13__setup),
	offsetof(struct DRX_Config_NB_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	6,	/* Count of tags in the map */
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
	6,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRX_Config_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_Config_NB_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_DRX_Config_NB_r13_specs_1 = {
	sizeof(struct DRX_Config_NB_r13),
	offsetof(struct DRX_Config_NB_r13, _asn_ctx),
	offsetof(struct DRX_Config_NB_r13, present),
	sizeof(((struct DRX_Config_NB_r13 *)0)->present),
	asn_MAP_DRX_Config_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DRX_Config_NB_r13 = {
	"DRX-Config-NB-r13",
	"DRX-Config-NB-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_DRX_Config_NB_r13_constr_1, CHOICE_constraint },
	asn_MBR_DRX_Config_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_DRX_Config_NB_r13_specs_1	/* Additional specs */
};

