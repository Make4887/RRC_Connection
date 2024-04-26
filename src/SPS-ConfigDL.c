/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SPS-ConfigDL.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_numberOfConfSPS_Processes_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_semiPersistSchedIntervalDL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_twoAntennaPortActivated_r10_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfConfSPS_Processes_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SPS_ConfigDL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_semiPersistSchedIntervalDL_value2enum_4[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf32" },
	{ 3,	4,	"sf40" },
	{ 4,	4,	"sf64" },
	{ 5,	4,	"sf80" },
	{ 6,	5,	"sf128" },
	{ 7,	5,	"sf160" },
	{ 8,	5,	"sf320" },
	{ 9,	5,	"sf640" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_semiPersistSchedIntervalDL_enum2value_4[] = {
	0,	/* sf10(0) */
	6,	/* sf128(6) */
	7,	/* sf160(7) */
	1,	/* sf20(1) */
	2,	/* sf32(2) */
	8,	/* sf320(8) */
	3,	/* sf40(3) */
	4,	/* sf64(4) */
	9,	/* sf640(9) */
	5,	/* sf80(5) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_semiPersistSchedIntervalDL_specs_4 = {
	asn_MAP_semiPersistSchedIntervalDL_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_semiPersistSchedIntervalDL_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_semiPersistSchedIntervalDL_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalDL_4 = {
	"semiPersistSchedIntervalDL",
	"semiPersistSchedIntervalDL",
	&asn_OP_NativeEnumerated,
	asn_DEF_semiPersistSchedIntervalDL_tags_4,
	sizeof(asn_DEF_semiPersistSchedIntervalDL_tags_4)
		/sizeof(asn_DEF_semiPersistSchedIntervalDL_tags_4[0]) - 1, /* 1 */
	asn_DEF_semiPersistSchedIntervalDL_tags_4,	/* Same as above */
	sizeof(asn_DEF_semiPersistSchedIntervalDL_tags_4)
		/sizeof(asn_DEF_semiPersistSchedIntervalDL_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_semiPersistSchedIntervalDL_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_semiPersistSchedIntervalDL_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10__setup, n1PUCCH_AN_PersistentListP1_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N1PUCCH_AN_PersistentList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n1PUCCH-AN-PersistentListP1-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n1PUCCH-AN-PersistentListP1-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_26 = {
	sizeof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10__setup),
	offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_26,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_26 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_26,
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]) - 1, /* 1 */
	asn_DEF_setup_tags_26,	/* Same as above */
	sizeof(asn_DEF_setup_tags_26)
		/sizeof(asn_DEF_setup_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_26,
	1,	/* Elements count */
	&asn_SPC_setup_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_twoAntennaPortActivated_r10_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_twoAntennaPortActivated_r10_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_twoAntennaPortActivated_r10_specs_24 = {
	sizeof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10),
	offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10, _asn_ctx),
	offsetof(struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10, present),
	sizeof(((struct SPS_ConfigDL__setup__twoAntennaPortActivated_r10 *)0)->present),
	asn_MAP_twoAntennaPortActivated_r10_tag2el_24,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortActivated_r10_24 = {
	"twoAntennaPortActivated-r10",
	"twoAntennaPortActivated-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_twoAntennaPortActivated_r10_constr_24, CHOICE_constraint },
	asn_MBR_twoAntennaPortActivated_r10_24,
	2,	/* Elements count */
	&asn_SPC_twoAntennaPortActivated_r10_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup, semiPersistSchedIntervalDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_semiPersistSchedIntervalDL_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedIntervalDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup, numberOfConfSPS_Processes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_numberOfConfSPS_Processes_constr_21,  memb_numberOfConfSPS_Processes_constraint_3 },
		0, 0, /* No default value */
		"numberOfConfSPS-Processes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL__setup, n1PUCCH_AN_PersistentList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N1PUCCH_AN_PersistentList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n1PUCCH-AN-PersistentList"
		},
	{ ATF_POINTER, 1, offsetof(struct SPS_ConfigDL__setup, twoAntennaPortActivated_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_twoAntennaPortActivated_r10_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoAntennaPortActivated-r10"
		},
};
static const int asn_MAP_setup_oms_3[] = { 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedIntervalDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfConfSPS-Processes */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n1PUCCH-AN-PersistentList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* twoAntennaPortActivated-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SPS_ConfigDL__setup),
	offsetof(struct SPS_ConfigDL__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	0, 1,	/* Root/Additions */
	3,	/* First extension addition */
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
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPS_ConfigDL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigDL, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPS_ConfigDL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SPS_ConfigDL_specs_1 = {
	sizeof(struct SPS_ConfigDL),
	offsetof(struct SPS_ConfigDL, _asn_ctx),
	offsetof(struct SPS_ConfigDL, present),
	sizeof(((struct SPS_ConfigDL *)0)->present),
	asn_MAP_SPS_ConfigDL_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPS_ConfigDL = {
	"SPS-ConfigDL",
	"SPS-ConfigDL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SPS_ConfigDL_constr_1, CHOICE_constraint },
	asn_MBR_SPS_ConfigDL_1,
	2,	/* Elements count */
	&asn_SPC_SPS_ConfigDL_specs_1	/* Additional specs */
};

