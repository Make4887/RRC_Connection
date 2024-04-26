/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCellToAddModExt-r13.h"

#include "RadioResourceConfigCommonSCell-r10.h"
#include "RadioResourceConfigDedicatedSCell-r10.h"
#include "AntennaInfoDedicated-v10i0.h"
static asn_TYPE_member_t asn_MBR_cellIdentification_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddModExt_r13__cellIdentification_r13, physCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddModExt_r13__cellIdentification_r13, dl_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_cellIdentification_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellIdentification_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierFreq-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellIdentification_r13_specs_3 = {
	sizeof(struct SCellToAddModExt_r13__cellIdentification_r13),
	offsetof(struct SCellToAddModExt_r13__cellIdentification_r13, _asn_ctx),
	asn_MAP_cellIdentification_r13_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellIdentification_r13_3 = {
	"cellIdentification-r13",
	"cellIdentification-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_cellIdentification_r13_tags_3,
	sizeof(asn_DEF_cellIdentification_r13_tags_3)
		/sizeof(asn_DEF_cellIdentification_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellIdentification_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellIdentification_r13_tags_3)
		/sizeof(asn_DEF_cellIdentification_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellIdentification_r13_3,
	2,	/* Elements count */
	&asn_SPC_cellIdentification_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCellToAddModExt_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddModExt_r13, sCellIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SCellToAddModExt_r13, cellIdentification_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellIdentification_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentification-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SCellToAddModExt_r13, radioResourceConfigCommonSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommonSCell-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SCellToAddModExt_r13, radioResourceConfigDedicatedSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedSCell-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SCellToAddModExt_r13, antennaInfoDedicatedSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v10i0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoDedicatedSCell-r13"
		},
};
static const int asn_MAP_SCellToAddModExt_r13_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SCellToAddModExt_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCellToAddModExt_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentification-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* radioResourceConfigCommonSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicatedSCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* antennaInfoDedicatedSCell-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCellToAddModExt_r13_specs_1 = {
	sizeof(struct SCellToAddModExt_r13),
	offsetof(struct SCellToAddModExt_r13, _asn_ctx),
	asn_MAP_SCellToAddModExt_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SCellToAddModExt_r13_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCellToAddModExt_r13 = {
	"SCellToAddModExt-r13",
	"SCellToAddModExt-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SCellToAddModExt_r13_tags_1,
	sizeof(asn_DEF_SCellToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_SCellToAddModExt_r13_tags_1[0]), /* 1 */
	asn_DEF_SCellToAddModExt_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellToAddModExt_r13_tags_1)
		/sizeof(asn_DEF_SCellToAddModExt_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCellToAddModExt_r13_1,
	5,	/* Elements count */
	&asn_SPC_SCellToAddModExt_r13_specs_1	/* Additional specs */
};

