/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RLCMode_H_
#define	_RLCMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLCMode {
	RLCMode_rlc_am	= 0,
	RLCMode_rlc_um_bidirectional	= 1,
	RLCMode_rlc_um_unidirectional_ul	= 2,
	RLCMode_rlc_um_unidirectional_dl	= 3
	/*
	 * Enumeration is extensible
	 */
} e_RLCMode;

/* RLCMode */
typedef long	 RLCMode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RLCMode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RLCMode;
extern const asn_INTEGER_specifics_t asn_SPC_RLCMode_specs_1;
asn_struct_free_f RLCMode_free;
asn_struct_print_f RLCMode_print;
asn_constr_check_f RLCMode_constraint;
ber_type_decoder_f RLCMode_decode_ber;
der_type_encoder_f RLCMode_encode_der;
xer_type_decoder_f RLCMode_decode_xer;
xer_type_encoder_f RLCMode_encode_xer;
oer_type_decoder_f RLCMode_decode_oer;
oer_type_encoder_f RLCMode_encode_oer;
per_type_decoder_f RLCMode_decode_uper;
per_type_encoder_f RLCMode_encode_uper;
per_type_decoder_f RLCMode_decode_aper;
per_type_encoder_f RLCMode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RLCMode_H_ */
#include <asn_internal.h>