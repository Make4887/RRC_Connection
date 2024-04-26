/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1530.h"

#include "NeighCellSI-AcquisitionParameters-v1530.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_reducedCP_Latency_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_reducedCP_Latency_r15_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_reducedCP_Latency_r15_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reducedCP_Latency_r15_specs_3 = {
	asn_MAP_reducedCP_Latency_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_reducedCP_Latency_r15_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reducedCP_Latency_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedCP_Latency_r15_3 = {
	"reducedCP-Latency-r15",
	"reducedCP-Latency-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_reducedCP_Latency_r15_tags_3,
	sizeof(asn_DEF_reducedCP_Latency_r15_tags_3)
		/sizeof(asn_DEF_reducedCP_Latency_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_reducedCP_Latency_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_reducedCP_Latency_r15_tags_3)
		/sizeof(asn_DEF_reducedCP_Latency_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_reducedCP_Latency_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reducedCP_Latency_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1530_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1530, neighCellSI_AcquisitionParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellSI_AcquisitionParameters_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellSI-AcquisitionParameters-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1530, reducedCP_Latency_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reducedCP_Latency_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedCP-Latency-r15"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1530_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* neighCellSI-AcquisitionParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedCP-Latency-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1530_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1530),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1530, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1530_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1530",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1530_1,
	2,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1530_specs_1	/* Additional specs */
};

