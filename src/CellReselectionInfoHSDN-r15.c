/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CellReselectionInfoHSDN-r15.h"

static int
memb_cellEquivalentSize_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cellEquivalentSize_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellReselectionInfoHSDN_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionInfoHSDN_r15, cellEquivalentSize_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cellEquivalentSize_r15_constr_2,  memb_cellEquivalentSize_r15_constraint_1 },
		0, 0, /* No default value */
		"cellEquivalentSize-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_CellReselectionInfoHSDN_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellReselectionInfoHSDN_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellEquivalentSize-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellReselectionInfoHSDN_r15_specs_1 = {
	sizeof(struct CellReselectionInfoHSDN_r15),
	offsetof(struct CellReselectionInfoHSDN_r15, _asn_ctx),
	asn_MAP_CellReselectionInfoHSDN_r15_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionInfoHSDN_r15 = {
	"CellReselectionInfoHSDN-r15",
	"CellReselectionInfoHSDN-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CellReselectionInfoHSDN_r15_tags_1,
	sizeof(asn_DEF_CellReselectionInfoHSDN_r15_tags_1)
		/sizeof(asn_DEF_CellReselectionInfoHSDN_r15_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionInfoHSDN_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionInfoHSDN_r15_tags_1)
		/sizeof(asn_DEF_CellReselectionInfoHSDN_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellReselectionInfoHSDN_r15_1,
	1,	/* Elements count */
	&asn_SPC_CellReselectionInfoHSDN_r15_specs_1	/* Additional specs */
};

