/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "rrc-15.6.asn1"
 * 	`asn1c -D src -pdu=RRCConnectionSetupComplete -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType11_H_
#define	_SystemInformationBlockType11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType11__warningMessageSegmentType {
	SystemInformationBlockType11__warningMessageSegmentType_notLastSegment	= 0,
	SystemInformationBlockType11__warningMessageSegmentType_lastSegment	= 1
} e_SystemInformationBlockType11__warningMessageSegmentType;

/* SystemInformationBlockType11 */
typedef struct SystemInformationBlockType11 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType11;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType11_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType11_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType11_H_ */
#include <asn_internal.h>
