/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RF-Parameters-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_multiNS_Pmax_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_multiNS_Pmax_r13_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multiNS_Pmax_r13_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiNS_Pmax_r13_specs_3 = {
	asn_MAP_multiNS_Pmax_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_multiNS_Pmax_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiNS_Pmax_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiNS_Pmax_r13_3 = {
	"multiNS-Pmax-r13",
	"multiNS-Pmax-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiNS_Pmax_r13_tags_3,
	sizeof(asn_DEF_multiNS_Pmax_r13_tags_3)
		/sizeof(asn_DEF_multiNS_Pmax_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_multiNS_Pmax_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_multiNS_Pmax_r13_tags_3)
		/sizeof(asn_DEF_multiNS_Pmax_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_multiNS_Pmax_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiNS_Pmax_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RF_Parameters_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_Parameters_NB_r13, supportedBandList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_NB_r13, multiNS_Pmax_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiNS_Pmax_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiNS-Pmax-r13"
		},
};
static const int asn_MAP_RF_Parameters_NB_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* multiNS-Pmax-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_NB_r13_specs_1 = {
	sizeof(struct RF_Parameters_NB_r13),
	offsetof(struct RF_Parameters_NB_r13, _asn_ctx),
	asn_MAP_RF_Parameters_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_NB_r13 = {
	"RF-Parameters-NB-r13",
	"RF-Parameters-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_NB_r13_tags_1,
	sizeof(asn_DEF_RF_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_RF_Parameters_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_RF_Parameters_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_RF_Parameters_NB_r13_specs_1	/* Additional specs */
};

