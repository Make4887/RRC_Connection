/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-PreconfigCommPool-r12.h"

#include "SL-PriorityList-r13.h"
asn_TYPE_member_t asn_MBR_SL_PreconfigCommPool_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, sc_CP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-CP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, sc_Period_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PeriodComm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-Period-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, sc_TF_ResourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_ResourceConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-TF-ResourceConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, sc_TxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P0_SL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-TxParameters-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, data_CP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CP_Len_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-CP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, data_TF_ResourceConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TF_ResourceConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-TF-ResourceConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, dataHoppingConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_HoppingConfigComm_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataHoppingConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, dataTxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P0_SL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataTxParameters-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigCommPool_r12, trpt_Subset_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TRPT_Subset_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trpt-Subset-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigCommPool_r12, priorityList_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PriorityList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityList-r13"
		},
};
static const int asn_MAP_SL_PreconfigCommPool_r12_oms_1[] = { 9 };
static const ber_tlv_tag_t asn_DEF_SL_PreconfigCommPool_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PreconfigCommPool_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-CP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sc-Period-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sc-TF-ResourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sc-TxParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* data-CP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* data-TF-ResourceConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dataHoppingConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dataTxParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* trpt-Subset-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* priorityList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigCommPool_r12_specs_1 = {
	sizeof(struct SL_PreconfigCommPool_r12),
	offsetof(struct SL_PreconfigCommPool_r12, _asn_ctx),
	asn_MAP_SL_PreconfigCommPool_r12_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SL_PreconfigCommPool_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PreconfigCommPool_r12 = {
	"SL-PreconfigCommPool-r12",
	"SL-PreconfigCommPool-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PreconfigCommPool_r12_tags_1,
	sizeof(asn_DEF_SL_PreconfigCommPool_r12_tags_1)
		/sizeof(asn_DEF_SL_PreconfigCommPool_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_PreconfigCommPool_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PreconfigCommPool_r12_tags_1)
		/sizeof(asn_DEF_SL_PreconfigCommPool_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PreconfigCommPool_r12_1,
	10,	/* Elements count */
	&asn_SPC_SL_PreconfigCommPool_r12_specs_1	/* Additional specs */
};

