/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasObjectToAddMod.h"

static asn_per_constraints_t asn_PER_type_measObject_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measObject_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectCDMA2000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectWLAN_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectWLAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod__measObject, choice.measObjectNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectNR-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measObject_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measObjectGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measObjectCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measObjectWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* measObjectNR-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_measObject_specs_3 = {
	sizeof(struct MeasObjectToAddMod__measObject),
	offsetof(struct MeasObjectToAddMod__measObject, _asn_ctx),
	offsetof(struct MeasObjectToAddMod__measObject, present),
	sizeof(((struct MeasObjectToAddMod__measObject *)0)->present),
	asn_MAP_measObject_tag2el_3,
	6,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measObject_3 = {
	"measObject",
	"measObject",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_measObject_constr_3, CHOICE_constraint },
	asn_MBR_measObject_3,
	6,	/* Elements count */
	&asn_SPC_measObject_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod, measObjectId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod, measObject),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measObject_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObject"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasObjectToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measObject */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_specs_1 = {
	sizeof(struct MeasObjectToAddMod),
	offsetof(struct MeasObjectToAddMod, _asn_ctx),
	asn_MAP_MeasObjectToAddMod_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod = {
	"MeasObjectToAddMod",
	"MeasObjectToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectToAddMod_tags_1,
	sizeof(asn_DEF_MeasObjectToAddMod_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddMod_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectToAddMod_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectToAddMod_1,
	2,	/* Elements count */
	&asn_SPC_MeasObjectToAddMod_specs_1	/* Additional specs */
};

