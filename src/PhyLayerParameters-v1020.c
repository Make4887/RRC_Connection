/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PhyLayerParameters-v1020.h"

#include "NonContiguousUL-RA-WithinCC-List-r10.h"
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_twoAntennaPortsForPUCCH_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tm9_With_8Tx_FDD_r10_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pmi_Disabling_r10_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_crossCarrierScheduling_r10_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiClusterPUSCH_WithinCC_r10_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_twoAntennaPortsForPUCCH_r10_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoAntennaPortsForPUCCH_r10_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoAntennaPortsForPUCCH_r10_specs_2 = {
	asn_MAP_twoAntennaPortsForPUCCH_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_twoAntennaPortsForPUCCH_r10_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortsForPUCCH_r10_2 = {
	"twoAntennaPortsForPUCCH-r10",
	"twoAntennaPortsForPUCCH-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2,
	sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2)
		/sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2)
		/sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_twoAntennaPortsForPUCCH_r10_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoAntennaPortsForPUCCH_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tm9_With_8Tx_FDD_r10_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_tm9_With_8Tx_FDD_r10_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tm9_With_8Tx_FDD_r10_specs_4 = {
	asn_MAP_tm9_With_8Tx_FDD_r10_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_tm9_With_8Tx_FDD_r10_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tm9_With_8Tx_FDD_r10_4 = {
	"tm9-With-8Tx-FDD-r10",
	"tm9-With-8Tx-FDD-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_tm9_With_8Tx_FDD_r10_tags_4,
	sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4)
		/sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[0]) - 1, /* 1 */
	asn_DEF_tm9_With_8Tx_FDD_r10_tags_4,	/* Same as above */
	sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4)
		/sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_tm9_With_8Tx_FDD_r10_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tm9_With_8Tx_FDD_r10_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pmi_Disabling_r10_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pmi_Disabling_r10_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pmi_Disabling_r10_specs_6 = {
	asn_MAP_pmi_Disabling_r10_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_pmi_Disabling_r10_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pmi_Disabling_r10_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pmi_Disabling_r10_6 = {
	"pmi-Disabling-r10",
	"pmi-Disabling-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_pmi_Disabling_r10_tags_6,
	sizeof(asn_DEF_pmi_Disabling_r10_tags_6)
		/sizeof(asn_DEF_pmi_Disabling_r10_tags_6[0]) - 1, /* 1 */
	asn_DEF_pmi_Disabling_r10_tags_6,	/* Same as above */
	sizeof(asn_DEF_pmi_Disabling_r10_tags_6)
		/sizeof(asn_DEF_pmi_Disabling_r10_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_pmi_Disabling_r10_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pmi_Disabling_r10_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_crossCarrierScheduling_r10_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_crossCarrierScheduling_r10_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_crossCarrierScheduling_r10_specs_8 = {
	asn_MAP_crossCarrierScheduling_r10_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_crossCarrierScheduling_r10_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crossCarrierScheduling_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_r10_8 = {
	"crossCarrierScheduling-r10",
	"crossCarrierScheduling-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_crossCarrierScheduling_r10_tags_8,
	sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_crossCarrierScheduling_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_crossCarrierScheduling_r10_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crossCarrierScheduling_r10_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_10 = {
	asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousPUCCH_PUSCH_r10_10 = {
	"simultaneousPUCCH-PUSCH-r10",
	"simultaneousPUCCH-PUSCH-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10,
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[0]) - 1, /* 1 */
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10,	/* Same as above */
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multiClusterPUSCH_WithinCC_r10_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multiClusterPUSCH_WithinCC_r10_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiClusterPUSCH_WithinCC_r10_specs_12 = {
	asn_MAP_multiClusterPUSCH_WithinCC_r10_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_multiClusterPUSCH_WithinCC_r10_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiClusterPUSCH_WithinCC_r10_12 = {
	"multiClusterPUSCH-WithinCC-r10",
	"multiClusterPUSCH-WithinCC-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12,
	sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12)
		/sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[0]) - 1, /* 1 */
	asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12,	/* Same as above */
	sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12)
		/sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_multiClusterPUSCH_WithinCC_r10_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiClusterPUSCH_WithinCC_r10_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1020_1[] = {
	{ ATF_POINTER, 7, offsetof(struct PhyLayerParameters_v1020, twoAntennaPortsForPUCCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoAntennaPortsForPUCCH_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoAntennaPortsForPUCCH-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct PhyLayerParameters_v1020, tm9_With_8Tx_FDD_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tm9_With_8Tx_FDD_r10_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tm9-With-8Tx-FDD-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct PhyLayerParameters_v1020, pmi_Disabling_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pmi_Disabling_r10_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmi-Disabling-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct PhyLayerParameters_v1020, crossCarrierScheduling_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crossCarrierScheduling_r10_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossCarrierScheduling-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhyLayerParameters_v1020, simultaneousPUCCH_PUSCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousPUCCH_PUSCH_r10_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousPUCCH-PUSCH-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhyLayerParameters_v1020, multiClusterPUSCH_WithinCC_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiClusterPUSCH_WithinCC_r10_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiClusterPUSCH-WithinCC-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PhyLayerParameters_v1020, nonContiguousUL_RA_WithinCC_List_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NonContiguousUL_RA_WithinCC_List_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonContiguousUL-RA-WithinCC-List-r10"
		},
};
static const int asn_MAP_PhyLayerParameters_v1020_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_PhyLayerParameters_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhyLayerParameters_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* twoAntennaPortsForPUCCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tm9-With-8Tx-FDD-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pmi-Disabling-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* crossCarrierScheduling-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* simultaneousPUCCH-PUSCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* multiClusterPUSCH-WithinCC-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonContiguousUL-RA-WithinCC-List-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1020_specs_1 = {
	sizeof(struct PhyLayerParameters_v1020),
	offsetof(struct PhyLayerParameters_v1020, _asn_ctx),
	asn_MAP_PhyLayerParameters_v1020_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PhyLayerParameters_v1020_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1020 = {
	"PhyLayerParameters-v1020",
	"PhyLayerParameters-v1020",
	&asn_OP_SEQUENCE,
	asn_DEF_PhyLayerParameters_v1020_tags_1,
	sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1[0]), /* 1 */
	asn_DEF_PhyLayerParameters_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhyLayerParameters_v1020_1,
	7,	/* Elements count */
	&asn_SPC_PhyLayerParameters_v1020_specs_1	/* Additional specs */
};

