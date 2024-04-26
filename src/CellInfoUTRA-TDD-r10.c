/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CellInfoUTRA-TDD-r10.h"

asn_TYPE_member_t asn_MBR_CellInfoUTRA_TDD_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoUTRA_TDD_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoUTRA_TDD_r10, carrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoUTRA_TDD_r10, utra_BCCH_Container_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"utra-BCCH-Container-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_CellInfoUTRA_TDD_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellInfoUTRA_TDD_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* utra-BCCH-Container-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellInfoUTRA_TDD_r10_specs_1 = {
	sizeof(struct CellInfoUTRA_TDD_r10),
	offsetof(struct CellInfoUTRA_TDD_r10, _asn_ctx),
	asn_MAP_CellInfoUTRA_TDD_r10_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellInfoUTRA_TDD_r10 = {
	"CellInfoUTRA-TDD-r10",
	"CellInfoUTRA-TDD-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CellInfoUTRA_TDD_r10_tags_1,
	sizeof(asn_DEF_CellInfoUTRA_TDD_r10_tags_1)
		/sizeof(asn_DEF_CellInfoUTRA_TDD_r10_tags_1[0]), /* 1 */
	asn_DEF_CellInfoUTRA_TDD_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellInfoUTRA_TDD_r10_tags_1)
		/sizeof(asn_DEF_CellInfoUTRA_TDD_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellInfoUTRA_TDD_r10_1,
	3,	/* Elements count */
	&asn_SPC_CellInfoUTRA_TDD_r10_specs_1	/* Additional specs */
};

