/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CellReselectionServingFreqInfo-v1310.h"

asn_TYPE_member_t asn_MBR_CellReselectionServingFreqInfo_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionServingFreqInfo_v1310, cellReselectionSubPriority_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionSubPriority_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionSubPriority-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellReselectionServingFreqInfo_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellReselectionSubPriority-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellReselectionServingFreqInfo_v1310_specs_1 = {
	sizeof(struct CellReselectionServingFreqInfo_v1310),
	offsetof(struct CellReselectionServingFreqInfo_v1310, _asn_ctx),
	asn_MAP_CellReselectionServingFreqInfo_v1310_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionServingFreqInfo_v1310 = {
	"CellReselectionServingFreqInfo-v1310",
	"CellReselectionServingFreqInfo-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1,
	sizeof(asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1)
		/sizeof(asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1)
		/sizeof(asn_DEF_CellReselectionServingFreqInfo_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellReselectionServingFreqInfo_v1310_1,
	1,	/* Elements count */
	&asn_SPC_CellReselectionServingFreqInfo_v1310_specs_1	/* Additional specs */
};

