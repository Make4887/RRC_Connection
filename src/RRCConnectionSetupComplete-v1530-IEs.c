/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionSetupComplete-v1530-IEs.h"

#include "RegisteredAMF-r15.h"
#include "RRCConnectionSetupComplete-v1540-IEs.h"
#include "S-NSSAI-r15.h"
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
memb_ng_5G_S_TMSI_Part2_r15_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_s_NSSAI_list_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_logMeasAvailableBT_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logMeasAvailableWLAN_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_idleMeasAvailable_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_flightPathInfoAvailable_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_connectTo5GC_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_s_NSSAI_list_r15_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ng_5G_S_TMSI_Part2_r15_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ng_5G_S_TMSI_Bits_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_s_NSSAI_list_r15_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailableBT_r15_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailableBT_r15_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailableBT_r15_specs_2 = {
	asn_MAP_logMeasAvailableBT_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailableBT_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailableBT_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailableBT_r15_2 = {
	"logMeasAvailableBT-r15",
	"logMeasAvailableBT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailableBT_r15_tags_2,
	sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2)
		/sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailableBT_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2)
		/sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailableBT_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailableBT_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailableWLAN_r15_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailableWLAN_r15_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailableWLAN_r15_specs_4 = {
	asn_MAP_logMeasAvailableWLAN_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailableWLAN_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailableWLAN_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailableWLAN_r15_4 = {
	"logMeasAvailableWLAN-r15",
	"logMeasAvailableWLAN-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailableWLAN_r15_tags_4,
	sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4)
		/sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailableWLAN_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4)
		/sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailableWLAN_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailableWLAN_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_idleMeasAvailable_r15_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_idleMeasAvailable_r15_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idleMeasAvailable_r15_specs_6 = {
	asn_MAP_idleMeasAvailable_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_idleMeasAvailable_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idleMeasAvailable_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idleMeasAvailable_r15_6 = {
	"idleMeasAvailable-r15",
	"idleMeasAvailable-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_idleMeasAvailable_r15_tags_6,
	sizeof(asn_DEF_idleMeasAvailable_r15_tags_6)
		/sizeof(asn_DEF_idleMeasAvailable_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_idleMeasAvailable_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_idleMeasAvailable_r15_tags_6)
		/sizeof(asn_DEF_idleMeasAvailable_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_idleMeasAvailable_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idleMeasAvailable_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_flightPathInfoAvailable_r15_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_flightPathInfoAvailable_r15_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_flightPathInfoAvailable_r15_specs_8 = {
	asn_MAP_flightPathInfoAvailable_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_flightPathInfoAvailable_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_flightPathInfoAvailable_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_flightPathInfoAvailable_r15_8 = {
	"flightPathInfoAvailable-r15",
	"flightPathInfoAvailable-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_flightPathInfoAvailable_r15_tags_8,
	sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8)
		/sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_flightPathInfoAvailable_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8)
		/sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_flightPathInfoAvailable_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_flightPathInfoAvailable_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_connectTo5GC_r15_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_connectTo5GC_r15_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_connectTo5GC_r15_specs_10 = {
	asn_MAP_connectTo5GC_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_connectTo5GC_r15_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connectTo5GC_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connectTo5GC_r15_10 = {
	"connectTo5GC-r15",
	"connectTo5GC-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_connectTo5GC_r15_tags_10,
	sizeof(asn_DEF_connectTo5GC_r15_tags_10)
		/sizeof(asn_DEF_connectTo5GC_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_connectTo5GC_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_connectTo5GC_r15_tags_10)
		/sizeof(asn_DEF_connectTo5GC_r15_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_connectTo5GC_r15_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connectTo5GC_r15_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_s_NSSAI_list_r15_13[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_S_NSSAI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_s_NSSAI_list_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_s_NSSAI_list_r15_specs_13 = {
	sizeof(struct RRCConnectionSetupComplete_v1530_IEs__s_NSSAI_list_r15),
	offsetof(struct RRCConnectionSetupComplete_v1530_IEs__s_NSSAI_list_r15, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_NSSAI_list_r15_13 = {
	"s-NSSAI-list-r15",
	"s-NSSAI-list-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_s_NSSAI_list_r15_tags_13,
	sizeof(asn_DEF_s_NSSAI_list_r15_tags_13)
		/sizeof(asn_DEF_s_NSSAI_list_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_s_NSSAI_list_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_s_NSSAI_list_r15_tags_13)
		/sizeof(asn_DEF_s_NSSAI_list_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_s_NSSAI_list_r15_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_s_NSSAI_list_r15_13,
	1,	/* Single element */
	&asn_SPC_s_NSSAI_list_r15_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ng_5G_S_TMSI_Bits_r15_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15, choice.ng_5G_S_TMSI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NG_5G_S_TMSI_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15, choice.ng_5G_S_TMSI_Part2_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ng_5G_S_TMSI_Part2_r15_constr_17,  memb_ng_5G_S_TMSI_Part2_r15_constraint_15 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-Part2-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ng_5G_S_TMSI_Bits_r15_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ng-5G-S-TMSI-Part2-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_ng_5G_S_TMSI_Bits_r15_specs_15 = {
	sizeof(struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15),
	offsetof(struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15, _asn_ctx),
	offsetof(struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15, present),
	sizeof(((struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15 *)0)->present),
	asn_MAP_ng_5G_S_TMSI_Bits_r15_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ng_5G_S_TMSI_Bits_r15_15 = {
	"ng-5G-S-TMSI-Bits-r15",
	"ng-5G-S-TMSI-Bits-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_ng_5G_S_TMSI_Bits_r15_constr_15, CHOICE_constraint },
	asn_MBR_ng_5G_S_TMSI_Bits_r15_15,
	2,	/* Elements count */
	&asn_SPC_ng_5G_S_TMSI_Bits_r15_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1530_IEs_1[] = {
	{ ATF_POINTER, 9, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, logMeasAvailableBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailableBT_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableBT-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, logMeasAvailableWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailableWLAN_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableWLAN-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, idleMeasAvailable_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idleMeasAvailable_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleMeasAvailable-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, flightPathInfoAvailable_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_flightPathInfoAvailable_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"flightPathInfoAvailable-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, connectTo5GC_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connectTo5GC_r15_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectTo5GC-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, registeredAMF_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegisteredAMF_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"registeredAMF-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, s_NSSAI_list_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_s_NSSAI_list_r15_13,
		0,
		{ 0, &asn_PER_memb_s_NSSAI_list_r15_constr_13,  memb_s_NSSAI_list_r15_constraint_1 },
		0, 0, /* No default value */
		"s-NSSAI-list-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, ng_5G_S_TMSI_Bits_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ng_5G_S_TMSI_Bits_r15_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-Bits-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionSetupComplete_v1530_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logMeasAvailableBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logMeasAvailableWLAN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* idleMeasAvailable-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* flightPathInfoAvailable-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* connectTo5GC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* registeredAMF-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* s-NSSAI-list-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ng-5G-S-TMSI-Bits-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1530_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_v1530_IEs),
	offsetof(struct RRCConnectionSetupComplete_v1530_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_v1530_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_v1530_IEs_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1530_IEs = {
	"RRCConnectionSetupComplete-v1530-IEs",
	"RRCConnectionSetupComplete-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionSetupComplete_v1530_IEs_1,
	9,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_v1530_IEs_specs_1	/* Additional specs */
};

