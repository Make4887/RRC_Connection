/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RSRQ-RangeConfig-r12.h"

asn_per_constraints_t asn_PER_type_RSRQ_RangeConfig_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RSRQ_RangeConfig_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSRQ_RangeConfig_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSRQ_RangeConfig_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RSRQ_RangeConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_RSRQ_RangeConfig_r12_specs_1 = {
	sizeof(struct RSRQ_RangeConfig_r12),
	offsetof(struct RSRQ_RangeConfig_r12, _asn_ctx),
	offsetof(struct RSRQ_RangeConfig_r12, present),
	sizeof(((struct RSRQ_RangeConfig_r12 *)0)->present),
	asn_MAP_RSRQ_RangeConfig_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RSRQ_RangeConfig_r12 = {
	"RSRQ-RangeConfig-r12",
	"RSRQ-RangeConfig-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RSRQ_RangeConfig_r12_constr_1, CHOICE_constraint },
	asn_MBR_RSRQ_RangeConfig_r12_1,
	2,	/* Elements count */
	&asn_SPC_RSRQ_RangeConfig_r12_specs_1	/* Additional specs */
};

