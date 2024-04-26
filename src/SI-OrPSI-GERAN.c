/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SI-OrPSI-GERAN.h"

asn_per_constraints_t asn_PER_type_SI_OrPSI_GERAN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SI_OrPSI_GERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SI_OrPSI_GERAN, choice.si),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoListGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SI_OrPSI_GERAN, choice.psi),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoListGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"psi"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SI_OrPSI_GERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* si */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* psi */
};
asn_CHOICE_specifics_t asn_SPC_SI_OrPSI_GERAN_specs_1 = {
	sizeof(struct SI_OrPSI_GERAN),
	offsetof(struct SI_OrPSI_GERAN, _asn_ctx),
	offsetof(struct SI_OrPSI_GERAN, present),
	sizeof(((struct SI_OrPSI_GERAN *)0)->present),
	asn_MAP_SI_OrPSI_GERAN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SI_OrPSI_GERAN = {
	"SI-OrPSI-GERAN",
	"SI-OrPSI-GERAN",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SI_OrPSI_GERAN_constr_1, CHOICE_constraint },
	asn_MBR_SI_OrPSI_GERAN_1,
	2,	/* Elements count */
	&asn_SPC_SI_OrPSI_GERAN_specs_1	/* Additional specs */
};

