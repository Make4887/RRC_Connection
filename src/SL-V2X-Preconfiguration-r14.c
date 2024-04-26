/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-V2X-Preconfiguration-r14.h"

#include "SL-AnchorCarrierFreqList-V2X-r14.h"
#include "SL-CBR-PreconfigTxConfigList-r14.h"
#include "SL-V2X-PacketDuplicationConfig-r15.h"
#include "SL-V2X-SyncFreqList-r15.h"
#include "SL-V2X-TxProfileList-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_slss_TxMultiFreq_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_slss_TxMultiFreq_r15_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_slss_TxMultiFreq_r15_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_TxMultiFreq_r15_specs_8 = {
	asn_MAP_slss_TxMultiFreq_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_TxMultiFreq_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_TxMultiFreq_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_TxMultiFreq_r15_8 = {
	"slss-TxMultiFreq-r15",
	"slss-TxMultiFreq-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_TxMultiFreq_r15_tags_8,
	sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_8)
		/sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_slss_TxMultiFreq_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_8)
		/sizeof(asn_DEF_slss_TxMultiFreq_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_slss_TxMultiFreq_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_TxMultiFreq_r15_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_V2X_Preconfiguration_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_Preconfiguration_r14, v2x_PreconfigFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_PreconfigFreqList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-PreconfigFreqList-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_V2X_Preconfiguration_r14, anchorCarrierFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_AnchorCarrierFreqList_V2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anchorCarrierFreqList-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_V2X_Preconfiguration_r14, cbr_PreconfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CBR_PreconfigTxConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbr-PreconfigList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_V2X_Preconfiguration_r14, v2x_PacketDuplicationConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_PacketDuplicationConfig_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-PacketDuplicationConfig-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_V2X_Preconfiguration_r14, syncFreqList_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_SyncFreqList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncFreqList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_Preconfiguration_r14, slss_TxMultiFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_TxMultiFreq_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxMultiFreq-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_Preconfiguration_r14, v2x_TxProfileList_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_TxProfileList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-TxProfileList-r15"
		},
};
static const int asn_MAP_SL_V2X_Preconfiguration_r14_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SL_V2X_Preconfiguration_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_V2X_Preconfiguration_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-PreconfigFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* anchorCarrierFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cbr-PreconfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* v2x-PacketDuplicationConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* syncFreqList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* slss-TxMultiFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* v2x-TxProfileList-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_Preconfiguration_r14_specs_1 = {
	sizeof(struct SL_V2X_Preconfiguration_r14),
	offsetof(struct SL_V2X_Preconfiguration_r14, _asn_ctx),
	asn_MAP_SL_V2X_Preconfiguration_r14_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SL_V2X_Preconfiguration_r14_oms_1,	/* Optional members */
	2, 4,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_V2X_Preconfiguration_r14 = {
	"SL-V2X-Preconfiguration-r14",
	"SL-V2X-Preconfiguration-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_V2X_Preconfiguration_r14_tags_1,
	sizeof(asn_DEF_SL_V2X_Preconfiguration_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_Preconfiguration_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_V2X_Preconfiguration_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_V2X_Preconfiguration_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_Preconfiguration_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_V2X_Preconfiguration_r14_1,
	7,	/* Elements count */
	&asn_SPC_SL_V2X_Preconfiguration_r14_specs_1	/* Additional specs */
};

