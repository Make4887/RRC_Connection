/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UL-CyclicPrefixLength.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_UL_CyclicPrefixLength_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_UL_CyclicPrefixLength_value2enum_1[] = {
	{ 0,	4,	"len1" },
	{ 1,	4,	"len2" }
};
static const unsigned int asn_MAP_UL_CyclicPrefixLength_enum2value_1[] = {
	0,	/* len1(0) */
	1	/* len2(1) */
};
const asn_INTEGER_specifics_t asn_SPC_UL_CyclicPrefixLength_specs_1 = {
	asn_MAP_UL_CyclicPrefixLength_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_UL_CyclicPrefixLength_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_UL_CyclicPrefixLength_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UL_CyclicPrefixLength = {
	"UL-CyclicPrefixLength",
	"UL-CyclicPrefixLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_UL_CyclicPrefixLength_tags_1,
	sizeof(asn_DEF_UL_CyclicPrefixLength_tags_1)
		/sizeof(asn_DEF_UL_CyclicPrefixLength_tags_1[0]), /* 1 */
	asn_DEF_UL_CyclicPrefixLength_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_CyclicPrefixLength_tags_1)
		/sizeof(asn_DEF_UL_CyclicPrefixLength_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_UL_CyclicPrefixLength_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_UL_CyclicPrefixLength_specs_1	/* Additional specs */
};

