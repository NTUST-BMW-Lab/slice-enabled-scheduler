/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "EUTRANQoS.h"

#include "GBR-QosInformation.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_EUTRANQoS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRANQoS, qCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRANQoS, allocationAndRetentionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllocationAndRetentionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allocationAndRetentionPriority"
		},
	{ ATF_POINTER, 2, offsetof(struct EUTRANQoS, gbrQosInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GBR_QosInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gbrQosInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRANQoS, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EUTRANQoS_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_EUTRANQoS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRANQoS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allocationAndRetentionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gbrQosInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRANQoS_specs_1 = {
	sizeof(struct EUTRANQoS),
	offsetof(struct EUTRANQoS, _asn_ctx),
	asn_MAP_EUTRANQoS_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_EUTRANQoS_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRANQoS = {
	"EUTRANQoS",
	"EUTRANQoS",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRANQoS_tags_1,
	sizeof(asn_DEF_EUTRANQoS_tags_1)
		/sizeof(asn_DEF_EUTRANQoS_tags_1[0]), /* 1 */
	asn_DEF_EUTRANQoS_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRANQoS_tags_1)
		/sizeof(asn_DEF_EUTRANQoS_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRANQoS_1,
	4,	/* Elements count */
	&asn_SPC_EUTRANQoS_specs_1	/* Additional specs */
};
