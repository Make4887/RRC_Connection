/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CQI-ReportConfig-v1250.h"

#include "CQI-ReportBoth-v1250.h"
#include "CQI-ReportAperiodic-v1250.h"
static int
memb_csi_MeasSubframeSets_r12_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_memb_csi_MeasSubframeSets_r12_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_SubframePatternConfig_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_altCQI_Table_r12_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup, csi_MeasSubframeSets_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_csi_MeasSubframeSets_r12_constr_5,  memb_csi_MeasSubframeSets_r12_constraint_4 },
		0, 0, /* No default value */
		"csi-MeasSubframeSets-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-MeasSubframeSets-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_4,
	1,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_SubframePatternConfig_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_SubframePatternConfig_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_SubframePatternConfig_r12_specs_2 = {
	sizeof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, _asn_ctx),
	offsetof(struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12, present),
	sizeof(((struct CQI_ReportConfig_v1250__csi_SubframePatternConfig_r12 *)0)->present),
	asn_MAP_csi_SubframePatternConfig_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_SubframePatternConfig_r12_2 = {
	"csi-SubframePatternConfig-r12",
	"csi-SubframePatternConfig-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_csi_SubframePatternConfig_r12_constr_2, CHOICE_constraint },
	asn_MBR_csi_SubframePatternConfig_r12_2,
	2,	/* Elements count */
	&asn_SPC_csi_SubframePatternConfig_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_altCQI_Table_r12_value2enum_8[] = {
	{ 0,	12,	"allSubframes" },
	{ 1,	16,	"csi-SubframeSet1" },
	{ 2,	16,	"csi-SubframeSet2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_altCQI_Table_r12_enum2value_8[] = {
	0,	/* allSubframes(0) */
	1,	/* csi-SubframeSet1(1) */
	2,	/* csi-SubframeSet2(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_altCQI_Table_r12_specs_8 = {
	asn_MAP_altCQI_Table_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_altCQI_Table_r12_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altCQI_Table_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altCQI_Table_r12_8 = {
	"altCQI-Table-r12",
	"altCQI-Table-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_altCQI_Table_r12_tags_8,
	sizeof(asn_DEF_altCQI_Table_r12_tags_8)
		/sizeof(asn_DEF_altCQI_Table_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_altCQI_Table_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_altCQI_Table_r12_tags_8)
		/sizeof(asn_DEF_altCQI_Table_r12_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_altCQI_Table_r12_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altCQI_Table_r12_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v1250_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CQI_ReportConfig_v1250, csi_SubframePatternConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_SubframePatternConfig_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-SubframePatternConfig-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportConfig_v1250, cqi_ReportBoth_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportBoth_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportBoth-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportConfig_v1250, cqi_ReportAperiodic_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportAperiodic_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportAperiodic-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig_v1250, altCQI_Table_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altCQI_Table_r12_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altCQI-Table-r12"
		},
};
static const int asn_MAP_CQI_ReportConfig_v1250_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfig_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-SubframePatternConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-ReportBoth-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-ReportAperiodic-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* altCQI-Table-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v1250_specs_1 = {
	sizeof(struct CQI_ReportConfig_v1250),
	offsetof(struct CQI_ReportConfig_v1250, _asn_ctx),
	asn_MAP_CQI_ReportConfig_v1250_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfig_v1250_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1250 = {
	"CQI-ReportConfig-v1250",
	"CQI-ReportConfig-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportConfig_v1250_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CQI_ReportConfig_v1250_1,
	4,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_v1250_specs_1	/* Additional specs */
};

