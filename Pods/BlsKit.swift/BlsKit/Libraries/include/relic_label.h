/*
 * RELIC is an Efficient LIbrary for Cryptography
 * Copyright (C) 2007-2019 RELIC Authors
 *
 * This file is part of RELIC. RELIC is legal property of its developers,
 * whose names are not listed here. Please refer to the COPYRIGHT file
 * for contact information.
 *
 * RELIC is free software; you can redistribute it and/or modify it under the
 * terms of the version 2.1 (or later) of the GNU Lesser General Public License
 * as published by the Free Software Foundation; or version 2.0 of the Apache
 * License as published by the Apache Software Foundation. See the LICENSE files
 * for more details.
 *
 * RELIC is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the LICENSE files for more details.
 *
 * You should have received a copy of the GNU Lesser General Public or the
 * Apache License along with RELIC. If not, see <https://www.gnu.org/licenses/>
 * or <https://www.apache.org/licenses/>.
 */

/**
 * @file
 *
 * Symbol renaming to a#undef clashes when simultaneous linking multiple builds.
 *
 * @ingroup core
 */

#ifndef RLC_LABEL_H
#define RLC_LABEL_H

#include "relic_conf.h"

#define PREFIX(F)		_PREFIX(LABEL, F)
#define _PREFIX(A, B)		__PREFIX(A, B)
#define __PREFIX(A, B)		A ## _ ## B

/*============================================================================*/
/* Macro definitions                                                          */
/*============================================================================*/

#ifdef LABEL

#undef first_ctx
#define first_ctx     PREFIX(first_ctx)
#undef core_ctx
#define core_ctx      PREFIX(core_ctx)

#undef core_init
#undef core_clean
#undef core_get
#undef core_set

#define core_init 	PREFIX(core_init)
#define core_clean 	PREFIX(core_clean)
#define core_get 	PREFIX(core_get)
#define core_set 	PREFIX(core_set)

#undef arch_init
#undef arch_clean
#undef arch_cycles
#undef arch_copy_rom

#define arch_init 	PREFIX(arch_init)
#define arch_clean 	PREFIX(arch_clean)
#define arch_cycles 	PREFIX(arch_cycles)
#define arch_copy_rom 	PREFIX(arch_copy_rom)

#undef bench_overhead
#undef bench_reset
#undef bench_before
#undef bench_after
#undef bench_compute
#undef bench_print
#undef bench_total

#define bench_overhead 	PREFIX(bench_overhead)
#define bench_reset 	PREFIX(bench_reset)
#define bench_before 	PREFIX(bench_before)
#define bench_after 	PREFIX(bench_after)
#define bench_compute 	PREFIX(bench_compute)
#define bench_print 	PREFIX(bench_print)
#define bench_total 	PREFIX(bench_total)

#undef err_simple_msg
#undef err_full_msg
#undef err_get_msg
#undef err_get_code

#define err_simple_msg 	PREFIX(err_simple_msg)
#define err_full_msg 	PREFIX(err_full_msg)
#define err_get_msg 	PREFIX(err_get_msg)
#define err_get_code 	PREFIX(err_get_code)

#undef rand_init
#undef rand_clean
#undef rand_seed
#undef rand_seed
#undef rand_bytes

#define rand_init 	PREFIX(rand_init)
#define rand_clean 	PREFIX(rand_clean)
#define rand_seed 	PREFIX(rand_seed)
#define rand_seed 	PREFIX(rand_seed)
#define rand_bytes 	PREFIX(rand_bytes)

#undef test_fail
#undef test_pass

#define test_fail 	PREFIX(test_fail)
#define test_pass 	PREFIX(test_pass)

#undef util_conv_endian
#undef util_conv_big
#undef util_conv_little
#undef util_conv_char
#undef util_bits_dig
#undef util_cmp_const
#undef util_printf
#undef util_print_dig

#define util_conv_endian 	PREFIX(util_conv_endian)
#define util_conv_big 	PREFIX(util_conv_big)
#define util_conv_little 	PREFIX(util_conv_little)
#define util_conv_char 	PREFIX(util_conv_char)
#define util_bits_dig 	PREFIX(util_bits_dig)
#define util_cmp_const 	PREFIX(util_cmp_const)
#define util_printf 	PREFIX(util_printf)
#define util_print_dig 	PREFIX(util_print_dig)

#undef conf_print
#define conf_print    PREFIX(conf_print)

#undef dv_t
#define dv_t          PREFIX(dv_t)

#undef dv_print
#undef dv_zero
#undef dv_copy
#undef dv_copy_cond
#undef dv_swap_cond
#undef dv_cmp
#undef dv_cmp_const
#undef dv_new_dynam
#undef dv_free_dynam

#define dv_print 	PREFIX(dv_print)
#define dv_zero 	PREFIX(dv_zero)
#define dv_copy 	PREFIX(dv_copy)
#define dv_copy_cond 	PREFIX(dv_copy_cond)
#define dv_swap_cond 	PREFIX(dv_swap_cond)
#define dv_cmp 	PREFIX(dv_cmp)
#define dv_cmp_const 	PREFIX(dv_cmp_const)
#define dv_new_dynam 	PREFIX(dv_new_dynam)
#define dv_free_dynam 	PREFIX(dv_free_dynam)



#undef relic_bn_st
#undef relic_bn_t
#define relic_bn_st     	PREFIX(relic_bn_st)
#define relic_bn_t      	PREFIX(relic_bn_t)

#undef relic_bn_init
#undef relic_bn_clean
#undef relic_bn_grow
#undef relic_bn_trim
#undef relic_bn_copy
#undef relic_bn_abs
#undef relic_bn_neg
#undef relic_bn_sign
#undef relic_bn_zero
#undef relic_bn_is_zero
#undef relic_bn_is_even
#undef relic_bn_bits
#undef relic_bn_get_bit
#undef relic_bn_set_bit
#undef relic_bn_ham
#undef relic_bn_get_dig
#undef relic_bn_set_dig
#undef relic_bn_set_2b
#undef relic_bn_rand
#undef relic_bn_rand_mod
#undef relic_bn_print
#undef relic_bn_size_str
#undef relic_bn_read_str
#undef relic_bn_write_str
#undef relic_bn_size_bin
#undef relic_bn_read_bin
#undef relic_bn_write_bin
#undef relic_bn_size_raw
#undef relic_bn_read_raw
#undef relic_bn_write_raw
#undef relic_bn_cmp_abs
#undef relic_bn_cmp_dig
#undef relic_bn_cmp
#undef relic_bn_add
#undef relic_bn_add_dig
#undef relic_bn_sub
#undef relic_bn_sub_dig
#undef relic_bn_mul_dig
#undef relic_bn_mul_basic
#undef relic_bn_mul_comba
#undef relic_bn_mul_karat
#undef relic_bn_sqr_basic
#undef relic_bn_sqr_comba
#undef relic_bn_sqr_karat
#undef relic_bn_dbl
#undef relic_bn_hlv
#undef relic_bn_lsh
#undef relic_bn_rsh
#undef relic_bn_div
#undef relic_bn_div_rem
#undef relic_bn_div_dig
#undef relic_bn_div_rem_dig
#undef relic_bn_mod_2b
#undef relic_bn_mod_dig
#undef relic_bn_mod_basic
#undef relic_bn_mod_pre_barrt
#undef relic_bn_mod_barrt
#undef relic_bn_mod_pre_monty
#undef relic_bn_mod_monty_conv
#undef relic_bn_mod_monty_back
#undef relic_bn_mod_monty_basic
#undef relic_bn_mod_monty_comba
#undef relic_bn_mod_pre_pmers
#undef relic_bn_mod_pmers
#undef relic_bn_mxp_basic
#undef relic_bn_mxp_slide
#undef relic_bn_mxp_monty
#undef relic_bn_mxp_dig
#undef relic_bn_srt
#undef relic_bn_gcd_basic
#undef relic_bn_gcd_lehme
#undef relic_bn_gcd_stein
#undef relic_bn_gcd_dig
#undef relic_bn_gcd_ext_basic
#undef relic_bn_gcd_ext_lehme
#undef relic_bn_gcd_ext_stein
#undef relic_bn_gcd_ext_mid
#undef relic_bn_gcd_ext_dig
#undef relic_bn_lcm
#undef relic_bn_smb_leg
#undef relic_bn_smb_jac
#undef relic_bn_get_prime
#undef relic_bn_is_prime
#undef relic_bn_is_prime_basic
#undef relic_bn_is_prime_rabin
#undef relic_bn_is_prime_solov
#undef relic_bn_gen_prime_basic
#undef relic_bn_gen_prime_safep
#undef relic_bn_gen_prime_stron
#undef relic_bn_factor
#undef relic_bn_is_factor
#undef relic_bn_rec_win
#undef relic_bn_rec_slw
#undef relic_bn_rec_naf
#undef relic_bn_rec_tnaf
#undef relic_bn_rec_rtnaf
#undef relic_bn_rec_tnaf_get
#undef relic_bn_rec_tnaf_mod
#undef relic_bn_rec_reg
#undef relic_bn_rec_jsf
#undef relic_bn_rec_glv

#define relic_bn_init 	PREFIX(relic_bn_init)
#define relic_bn_clean 	PREFIX(relic_bn_clean)
#define relic_bn_grow 	PREFIX(relic_bn_grow)
#define relic_bn_trim 	PREFIX(relic_bn_trim)
#define relic_bn_copy 	PREFIX(relic_bn_copy)
#define relic_bn_abs 	PREFIX(relic_bn_abs)
#define relic_bn_neg 	PREFIX(relic_bn_neg)
#define relic_bn_sign 	PREFIX(relic_bn_sign)
#define relic_bn_zero 	PREFIX(relic_bn_zero)
#define relic_bn_is_zero 	PREFIX(relic_bn_is_zero)
#define relic_bn_is_even 	PREFIX(relic_bn_is_even)
#define relic_bn_bits 	PREFIX(relic_bn_bits)
#define relic_bn_get_bit 	PREFIX(relic_bn_get_bit)
#define relic_bn_set_bit 	PREFIX(relic_bn_set_bit)
#define relic_bn_ham 	PREFIX(relic_bn_ham)
#define relic_bn_get_dig 	PREFIX(relic_bn_get_dig)
#define relic_bn_set_dig 	PREFIX(relic_bn_set_dig)
#define relic_bn_set_2b 	PREFIX(relic_bn_set_2b)
#define relic_bn_rand 	PREFIX(relic_bn_rand)
#define relic_bn_rand_mod 	PREFIX(relic_bn_rand_mod)
#define relic_bn_print 	PREFIX(relic_bn_print)
#define relic_bn_size_str 	PREFIX(relic_bn_size_str)
#define relic_bn_read_str 	PREFIX(relic_bn_read_str)
#define relic_bn_write_str 	PREFIX(relic_bn_write_str)
#define relic_bn_size_bin 	PREFIX(relic_bn_size_bin)
#define relic_bn_read_bin 	PREFIX(relic_bn_read_bin)
#define relic_bn_write_bin 	PREFIX(relic_bn_write_bin)
#define relic_bn_size_raw 	PREFIX(relic_bn_size_raw)
#define relic_bn_read_raw 	PREFIX(relic_bn_read_raw)
#define relic_bn_write_raw 	PREFIX(relic_bn_write_raw)
#define relic_bn_cmp_abs 	PREFIX(relic_bn_cmp_abs)
#define relic_bn_cmp_dig 	PREFIX(relic_bn_cmp_dig)
#define relic_bn_cmp 	PREFIX(relic_bn_cmp)
#define relic_bn_add 	PREFIX(relic_bn_add)
#define relic_bn_add_dig 	PREFIX(relic_bn_add_dig)
#define relic_bn_sub 	PREFIX(relic_bn_sub)
#define relic_bn_sub_dig 	PREFIX(relic_bn_sub_dig)
#define relic_bn_mul_dig 	PREFIX(relic_bn_mul_dig)
#define relic_bn_mul_basic 	PREFIX(relic_bn_mul_basic)
#define relic_bn_mul_comba 	PREFIX(relic_bn_mul_comba)
#define relic_bn_mul_karat 	PREFIX(relic_bn_mul_karat)
#define relic_bn_sqr_basic 	PREFIX(relic_bn_sqr_basic)
#define relic_bn_sqr_comba 	PREFIX(relic_bn_sqr_comba)
#define relic_bn_sqr_karat 	PREFIX(relic_bn_sqr_karat)
#define relic_bn_dbl 	PREFIX(relic_bn_dbl)
#define relic_bn_hlv 	PREFIX(relic_bn_hlv)
#define relic_bn_lsh 	PREFIX(relic_bn_lsh)
#define relic_bn_rsh 	PREFIX(relic_bn_rsh)
#define relic_bn_div 	PREFIX(relic_bn_div)
#define relic_bn_div_rem 	PREFIX(relic_bn_div_rem)
#define relic_bn_div_dig 	PREFIX(relic_bn_div_dig)
#define relic_bn_div_rem_dig 	PREFIX(relic_bn_div_rem_dig)
#define relic_bn_mod_2b 	PREFIX(relic_bn_mod_2b)
#define relic_bn_mod_dig 	PREFIX(relic_bn_mod_dig)
#define relic_bn_mod_basic 	PREFIX(relic_bn_mod_basic)
#define relic_bn_mod_pre_barrt 	PREFIX(relic_bn_mod_pre_barrt)
#define relic_bn_mod_barrt 	PREFIX(relic_bn_mod_barrt)
#define relic_bn_mod_pre_monty 	PREFIX(relic_bn_mod_pre_monty)
#define relic_bn_mod_monty_conv 	PREFIX(relic_bn_mod_monty_conv)
#define relic_bn_mod_monty_back 	PREFIX(relic_bn_mod_monty_back)
#define relic_bn_mod_monty_basic 	PREFIX(relic_bn_mod_monty_basic)
#define relic_bn_mod_monty_comba 	PREFIX(relic_bn_mod_monty_comba)
#define relic_bn_mod_pre_pmers 	PREFIX(relic_bn_mod_pre_pmers)
#define relic_bn_mod_pmers 	PREFIX(relic_bn_mod_pmers)
#define relic_bn_mxp_basic 	PREFIX(relic_bn_mxp_basic)
#define relic_bn_mxp_slide 	PREFIX(relic_bn_mxp_slide)
#define relic_bn_mxp_monty 	PREFIX(relic_bn_mxp_monty)
#define relic_bn_mxp_dig 	PREFIX(relic_bn_mxp_dig)
#define relic_bn_srt 	PREFIX(relic_bn_srt)
#define relic_bn_gcd_basic 	PREFIX(relic_bn_gcd_basic)
#define relic_bn_gcd_lehme 	PREFIX(relic_bn_gcd_lehme)
#define relic_bn_gcd_stein 	PREFIX(relic_bn_gcd_stein)
#define relic_bn_gcd_dig 	PREFIX(relic_bn_gcd_dig)
#define relic_bn_gcd_ext_basic 	PREFIX(relic_bn_gcd_ext_basic)
#define relic_bn_gcd_ext_lehme 	PREFIX(relic_bn_gcd_ext_lehme)
#define relic_bn_gcd_ext_stein 	PREFIX(relic_bn_gcd_ext_stein)
#define relic_bn_gcd_ext_mid 	PREFIX(relic_bn_gcd_ext_mid)
#define relic_bn_gcd_ext_dig 	PREFIX(relic_bn_gcd_ext_dig)
#define relic_bn_lcm 	PREFIX(relic_bn_lcm)
#define relic_bn_smb_leg 	PREFIX(relic_bn_smb_leg)
#define relic_bn_smb_jac 	PREFIX(relic_bn_smb_jac)
#define relic_bn_get_prime 	PREFIX(relic_bn_get_prime)
#define relic_bn_is_prime 	PREFIX(relic_bn_is_prime)
#define relic_bn_is_prime_basic 	PREFIX(relic_bn_is_prime_basic)
#define relic_bn_is_prime_rabin 	PREFIX(relic_bn_is_prime_rabin)
#define relic_bn_is_prime_solov 	PREFIX(relic_bn_is_prime_solov)
#define relic_bn_gen_prime_basic 	PREFIX(relic_bn_gen_prime_basic)
#define relic_bn_gen_prime_safep 	PREFIX(relic_bn_gen_prime_safep)
#define relic_bn_gen_prime_stron 	PREFIX(relic_bn_gen_prime_stron)
#define relic_bn_factor 	PREFIX(relic_bn_factor)
#define relic_bn_is_factor 	PREFIX(relic_bn_is_factor)
#define relic_bn_rec_win 	PREFIX(relic_bn_rec_win)
#define relic_bn_rec_slw 	PREFIX(relic_bn_rec_slw)
#define relic_bn_rec_naf 	PREFIX(relic_bn_rec_naf)
#define relic_bn_rec_tnaf 	PREFIX(relic_bn_rec_tnaf)
#define relic_bn_rec_rtnaf 	PREFIX(relic_bn_rec_rtnaf)
#define relic_bn_rec_tnaf_get 	PREFIX(relic_bn_rec_tnaf_get)
#define relic_bn_rec_tnaf_mod 	PREFIX(relic_bn_rec_tnaf_mod)
#define relic_bn_rec_reg 	PREFIX(relic_bn_rec_reg)
#define relic_bn_rec_jsf 	PREFIX(relic_bn_rec_jsf)
#define relic_bn_rec_glv 	PREFIX(relic_bn_rec_glv)

#undef relic_bn_add1_low
#undef relic_bn_addn_low
#undef relic_bn_sub1_low
#undef relic_bn_surelic_bn_low
#undef relic_bn_cmp1_low
#undef relic_bn_cmpn_low
#undef relic_bn_lsh1_low
#undef relic_bn_lshb_low
#undef relic_bn_lshd_low
#undef relic_bn_rsh1_low
#undef relic_bn_rshb_low
#undef relic_bn_rshd_low
#undef relic_bn_mula_low
#undef relic_bn_mul1_low
#undef relic_bn_muln_low
#undef relic_bn_muld_low
#undef relic_bn_sqra_low
#undef relic_bn_sqrn_low
#undef relic_bn_divn_low
#undef relic_bn_div1_low
#undef relic_bn_modn_low

#define relic_bn_add1_low 	PREFIX(relic_bn_add1_low)
#define relic_bn_addn_low 	PREFIX(relic_bn_addn_low)
#define relic_bn_sub1_low 	PREFIX(relic_bn_sub1_low)
#define relic_bn_surelic_bn_low 	PREFIX(relic_bn_surelic_bn_low)
#define relic_bn_cmp1_low 	PREFIX(relic_bn_cmp1_low)
#define relic_bn_cmpn_low 	PREFIX(relic_bn_cmpn_low)
#define relic_bn_lsh1_low 	PREFIX(relic_bn_lsh1_low)
#define relic_bn_lshb_low 	PREFIX(relic_bn_lshb_low)
#define relic_bn_lshd_low 	PREFIX(relic_bn_lshd_low)
#define relic_bn_rsh1_low 	PREFIX(relic_bn_rsh1_low)
#define relic_bn_rshb_low 	PREFIX(relic_bn_rshb_low)
#define relic_bn_rshd_low 	PREFIX(relic_bn_rshd_low)
#define relic_bn_mula_low 	PREFIX(relic_bn_mula_low)
#define relic_bn_mul1_low 	PREFIX(relic_bn_mul1_low)
#define relic_bn_muln_low 	PREFIX(relic_bn_muln_low)
#define relic_bn_muld_low 	PREFIX(relic_bn_muld_low)
#define relic_bn_sqra_low 	PREFIX(relic_bn_sqra_low)
#define relic_bn_sqrn_low 	PREFIX(relic_bn_sqrn_low)
#define relic_bn_divn_low 	PREFIX(relic_bn_divn_low)
#define relic_bn_div1_low 	PREFIX(relic_bn_div1_low)
#define relic_bn_modn_low 	PREFIX(relic_bn_modn_low)

#undef fp_st
#undef fp_t
#define fp_st	        PREFIX(fp_st)
#define fp_t          PREFIX(fp_t)

#undef fp_prime_init
#undef fp_prime_clean
#undef fp_prime_get
#undef fp_prime_get_rdc
#undef fp_prime_get_conv
#undef fp_prime_get_mod8
#undef fp_prime_get_sps
#undef fp_prime_get_qnr
#undef fp_prime_get_cnr
#undef fp_prime_get_2ad
#undef fp_param_get
#undef fp_prime_set_dense
#undef fp_prime_set_pmers
#undef fp_prime_set_pairf
#undef fp_prime_calc
#undef fp_prime_conv
#undef fp_prime_conv_dig
#undef fp_prime_back
#undef fp_param_set
#undef fp_param_set_any
#undef fp_param_set_any_dense
#undef fp_param_set_any_pmers
#undef fp_param_set_any_tower
#undef fp_param_print
#undef fp_prime_get_par
#undef fp_prime_get_par_sps
#undef fp_param_get_sps
#undef fp_copy
#undef fp_zero
#undef fp_is_zero
#undef fp_is_even
#undef fp_get_bit
#undef fp_set_bit
#undef fp_set_dig
#undef fp_bits
#undef fp_rand
#undef fp_print
#undef fp_size_str
#undef fp_read_str
#undef fp_write_str
#undef fp_read_bin
#undef fp_write_bin
#undef fp_cmp
#undef fp_cmp_dig
#undef fp_add_basic
#undef fp_add_integ
#undef fp_add_dig
#undef fp_sub_basic
#undef fp_sub_integ
#undef fp_sub_dig
#undef fp_neg_basic
#undef fp_neg_integ
#undef fp_dbl_basic
#undef fp_dbl_integ
#undef fp_hlv_basic
#undef fp_hlv_integ
#undef fp_mul_basic
#undef fp_mul_comba
#undef fp_mul_integ
#undef fp_mul_karat
#undef fp_mul_dig
#undef fp_sqr_basic
#undef fp_sqr_comba
#undef fp_sqr_integ
#undef fp_sqr_karat
#undef fp_lsh
#undef fp_rsh
#undef fp_rdc_basic
#undef fp_rdc_monty_basic
#undef fp_rdc_monty_comba
#undef fp_rdc_quick
#undef fp_inv_basic
#undef fp_inv_binar
#undef fp_inv_monty
#undef fp_inv_exgcd
#undef fp_inv_divst
#undef fp_inv_lower
#undef fp_inv_sim
#undef fp_exp_basic
#undef fp_exp_slide
#undef fp_exp_monty
#undef fp_srt

#define fp_prime_init 	PREFIX(fp_prime_init)
#define fp_prime_clean 	PREFIX(fp_prime_clean)
#define fp_prime_get 	PREFIX(fp_prime_get)
#define fp_prime_get_rdc 	PREFIX(fp_prime_get_rdc)
#define fp_prime_get_conv 	PREFIX(fp_prime_get_conv)
#define fp_prime_get_mod8 	PREFIX(fp_prime_get_mod8)
#define fp_prime_get_sps 	PREFIX(fp_prime_get_sps)
#define fp_prime_get_qnr 	PREFIX(fp_prime_get_qnr)
#define fp_prime_get_cnr 	PREFIX(fp_prime_get_cnr)
#define fp_prime_get_2ad 	PREFIX(fp_prime_get_2ad)
#define fp_param_get 	PREFIX(fp_param_get)
#define fp_prime_set_dense 	PREFIX(fp_prime_set_dense)
#define fp_prime_set_pmers 	PREFIX(fp_prime_set_pmers)
#define fp_prime_set_pairf 	PREFIX(fp_prime_set_pairf)
#define fp_prime_calc 	PREFIX(fp_prime_calc)
#define fp_prime_conv 	PREFIX(fp_prime_conv)
#define fp_prime_conv_dig 	PREFIX(fp_prime_conv_dig)
#define fp_prime_back 	PREFIX(fp_prime_back)
#define fp_param_set 	PREFIX(fp_param_set)
#define fp_param_set_any 	PREFIX(fp_param_set_any)
#define fp_param_set_any_dense 	PREFIX(fp_param_set_any_dense)
#define fp_param_set_any_pmers 	PREFIX(fp_param_set_any_pmers)
#define fp_param_set_any_tower 	PREFIX(fp_param_set_any_tower)
#define fp_param_print 	PREFIX(fp_param_print)
#define fp_prime_get_par 	PREFIX(fp_prime_get_par)
#define fp_prime_get_par_sps 	PREFIX(fp_prime_get_par_sps)
#define fp_param_get_sps 	PREFIX(fp_param_get_sps)
#define fp_copy 	PREFIX(fp_copy)
#define fp_zero 	PREFIX(fp_zero)
#define fp_is_zero 	PREFIX(fp_is_zero)
#define fp_is_even 	PREFIX(fp_is_even)
#define fp_get_bit 	PREFIX(fp_get_bit)
#define fp_set_bit 	PREFIX(fp_set_bit)
#define fp_set_dig 	PREFIX(fp_set_dig)
#define fp_bits 	PREFIX(fp_bits)
#define fp_rand 	PREFIX(fp_rand)
#define fp_print 	PREFIX(fp_print)
#define fp_size_str 	PREFIX(fp_size_str)
#define fp_read_str 	PREFIX(fp_read_str)
#define fp_write_str 	PREFIX(fp_write_str)
#define fp_read_bin 	PREFIX(fp_read_bin)
#define fp_write_bin 	PREFIX(fp_write_bin)
#define fp_cmp 	PREFIX(fp_cmp)
#define fp_cmp_dig 	PREFIX(fp_cmp_dig)
#define fp_add_basic 	PREFIX(fp_add_basic)
#define fp_add_integ 	PREFIX(fp_add_integ)
#define fp_add_dig 	PREFIX(fp_add_dig)
#define fp_sub_basic 	PREFIX(fp_sub_basic)
#define fp_sub_integ 	PREFIX(fp_sub_integ)
#define fp_sub_dig 	PREFIX(fp_sub_dig)
#define fp_neg_basic 	PREFIX(fp_neg_basic)
#define fp_neg_integ 	PREFIX(fp_neg_integ)
#define fp_dbl_basic 	PREFIX(fp_dbl_basic)
#define fp_dbl_integ 	PREFIX(fp_dbl_integ)
#define fp_hlv_basic 	PREFIX(fp_hlv_basic)
#define fp_hlv_integ 	PREFIX(fp_hlv_integ)
#define fp_mul_basic 	PREFIX(fp_mul_basic)
#define fp_mul_comba 	PREFIX(fp_mul_comba)
#define fp_mul_integ 	PREFIX(fp_mul_integ)
#define fp_mul_karat 	PREFIX(fp_mul_karat)
#define fp_mul_dig 	PREFIX(fp_mul_dig)
#define fp_sqr_basic 	PREFIX(fp_sqr_basic)
#define fp_sqr_comba 	PREFIX(fp_sqr_comba)
#define fp_sqr_integ 	PREFIX(fp_sqr_integ)
#define fp_sqr_karat 	PREFIX(fp_sqr_karat)
#define fp_lsh 	PREFIX(fp_lsh)
#define fp_rsh 	PREFIX(fp_rsh)
#define fp_rdc_basic 	PREFIX(fp_rdc_basic)
#define fp_rdc_monty_basic 	PREFIX(fp_rdc_monty_basic)
#define fp_rdc_monty_comba 	PREFIX(fp_rdc_monty_comba)
#define fp_rdc_quick 	PREFIX(fp_rdc_quick)
#define fp_inv_basic 	PREFIX(fp_inv_basic)
#define fp_inv_binar 	PREFIX(fp_inv_binar)
#define fp_inv_monty 	PREFIX(fp_inv_monty)
#define fp_inv_exgcd 	PREFIX(fp_inv_exgcd)
#define fp_inv_divst 	PREFIX(fp_inv_divst)
#define fp_inv_lower 	PREFIX(fp_inv_lower)
#define fp_inv_sim 	PREFIX(fp_inv_sim)
#define fp_exp_basic 	PREFIX(fp_exp_basic)
#define fp_exp_slide 	PREFIX(fp_exp_slide)
#define fp_exp_monty 	PREFIX(fp_exp_monty)
#define fp_srt 	PREFIX(fp_srt)

#undef fp_add1_low
#undef fp_addn_low
#undef fp_addm_low
#undef fp_addd_low
#undef fp_addc_low
#undef fp_sub1_low
#undef fp_surelic_bn_low
#undef fp_subm_low
#undef fp_subd_low
#undef fp_subc_low
#undef fp_negm_low
#undef fp_dbln_low
#undef fp_dblm_low
#undef fp_hlvm_low
#undef fp_hlvd_low
#undef fp_lsh1_low
#undef fp_lshb_low
#undef fp_lshd_low
#undef fp_rsh1_low
#undef fp_rshb_low
#undef fp_rshd_low
#undef fp_mula_low
#undef fp_mul1_low
#undef fp_muln_low
#undef fp_mulm_low
#undef fp_sqrn_low
#undef fp_sqrm_low
#undef fp_rdcs_low
#undef fp_rdcn_low
#undef fp_invm_low

#define fp_add1_low 	PREFIX(fp_add1_low)
#define fp_addn_low 	PREFIX(fp_addn_low)
#define fp_addm_low 	PREFIX(fp_addm_low)
#define fp_addd_low 	PREFIX(fp_addd_low)
#define fp_addc_low 	PREFIX(fp_addc_low)
#define fp_sub1_low 	PREFIX(fp_sub1_low)
#define fp_surelic_bn_low 	PREFIX(fp_surelic_bn_low)
#define fp_subm_low 	PREFIX(fp_subm_low)
#define fp_subd_low 	PREFIX(fp_subd_low)
#define fp_subc_low 	PREFIX(fp_subc_low)
#define fp_negm_low 	PREFIX(fp_negm_low)
#define fp_dbln_low 	PREFIX(fp_dbln_low)
#define fp_dblm_low 	PREFIX(fp_dblm_low)
#define fp_hlvm_low 	PREFIX(fp_hlvm_low)
#define fp_hlvd_low 	PREFIX(fp_hlvd_low)
#define fp_lsh1_low 	PREFIX(fp_lsh1_low)
#define fp_lshb_low 	PREFIX(fp_lshb_low)
#define fp_lshd_low 	PREFIX(fp_lshd_low)
#define fp_rsh1_low 	PREFIX(fp_rsh1_low)
#define fp_rshb_low 	PREFIX(fp_rshb_low)
#define fp_rshd_low 	PREFIX(fp_rshd_low)
#define fp_mula_low 	PREFIX(fp_mula_low)
#define fp_mul1_low 	PREFIX(fp_mul1_low)
#define fp_muln_low 	PREFIX(fp_muln_low)
#define fp_mulm_low 	PREFIX(fp_mulm_low)
#define fp_sqrn_low 	PREFIX(fp_sqrn_low)
#define fp_sqrm_low 	PREFIX(fp_sqrm_low)
#define fp_rdcs_low 	PREFIX(fp_rdcs_low)
#define fp_rdcn_low 	PREFIX(fp_rdcn_low)
#define fp_invm_low 	PREFIX(fp_invm_low)

#undef fp_st
#undef fp_t
#define fp_st	        PREFIX(fp_st)
#define fp_t          PREFIX(fp_t)

#undef fb_poly_init
#undef fb_poly_clean
#undef fb_poly_get
#undef fb_poly_set_dense
#undef fb_poly_set_trino
#undef fb_poly_set_penta
#undef fb_poly_get_srz
#undef fb_poly_tab_srz
#undef fb_poly_tab_sqr
#undef fb_poly_get_chain
#undef fb_poly_get_rdc
#undef fb_poly_get_trc
#undef fb_poly_get_slv
#undef fb_param_set
#undef fb_param_set_any
#undef fb_param_print
#undef fb_poly_add
#undef fb_copy
#undef fb_neg
#undef fb_zero
#undef fb_is_zero
#undef fb_get_bit
#undef fb_set_bit
#undef fb_set_dig
#undef fb_bits
#undef fb_rand
#undef fb_print
#undef fb_size_str
#undef fb_read_str
#undef fb_write_str
#undef fb_read_bin
#undef fb_write_bin
#undef fb_cmp
#undef fb_cmp_dig
#undef fb_add
#undef fb_add_dig
#undef fb_mul_basic
#undef fb_mul_integ
#undef fb_mul_lodah
#undef fb_mul_dig
#undef fb_mul_karat
#undef fb_sqr_basic
#undef fb_sqr_integ
#undef fb_sqr_quick
#undef fb_lsh
#undef fb_rsh
#undef fb_rdc_basic
#undef fb_rdc_quick
#undef fb_srt_basic
#undef fb_srt_quick
#undef fb_trc_basic
#undef fb_trc_quick
#undef fb_inv_basic
#undef fb_inv_binar
#undef fb_inv_exgcd
#undef fb_inv_almos
#undef fb_inv_itoht
#undef fb_inv_bruch
#undef fb_inv_ctaia
#undef fb_inv_lower
#undef fb_inv_sim
#undef fb_exp_2b
#undef fb_exp_basic
#undef fb_exp_slide
#undef fb_exp_monty
#undef fb_slv_basic
#undef fb_slv_quick
#undef fb_itr_basic
#undef fb_itr_pre_quick
#undef fb_itr_quick

#define fb_poly_init 	PREFIX(fb_poly_init)
#define fb_poly_clean 	PREFIX(fb_poly_clean)
#define fb_poly_get 	PREFIX(fb_poly_get)
#define fb_poly_set_dense 	PREFIX(fb_poly_set_dense)
#define fb_poly_set_trino 	PREFIX(fb_poly_set_trino)
#define fb_poly_set_penta 	PREFIX(fb_poly_set_penta)
#define fb_poly_get_srz 	PREFIX(fb_poly_get_srz)
#define fb_poly_tab_srz 	PREFIX(fb_poly_tab_srz)
#define fb_poly_tab_sqr 	PREFIX(fb_poly_tab_sqr)
#define fb_poly_get_chain 	PREFIX(fb_poly_get_chain)
#define fb_poly_get_rdc 	PREFIX(fb_poly_get_rdc)
#define fb_poly_get_trc 	PREFIX(fb_poly_get_trc)
#define fb_poly_get_slv 	PREFIX(fb_poly_get_slv)
#define fb_param_set 	PREFIX(fb_param_set)
#define fb_param_set_any 	PREFIX(fb_param_set_any)
#define fb_param_print 	PREFIX(fb_param_print)
#define fb_poly_add 	PREFIX(fb_poly_add)
#define fb_copy 	PREFIX(fb_copy)
#define fb_neg 	PREFIX(fb_neg)
#define fb_zero 	PREFIX(fb_zero)
#define fb_is_zero 	PREFIX(fb_is_zero)
#define fb_get_bit 	PREFIX(fb_get_bit)
#define fb_set_bit 	PREFIX(fb_set_bit)
#define fb_set_dig 	PREFIX(fb_set_dig)
#define fb_bits 	PREFIX(fb_bits)
#define fb_rand 	PREFIX(fb_rand)
#define fb_print 	PREFIX(fb_print)
#define fb_size_str 	PREFIX(fb_size_str)
#define fb_read_str 	PREFIX(fb_read_str)
#define fb_write_str 	PREFIX(fb_write_str)
#define fb_read_bin 	PREFIX(fb_read_bin)
#define fb_write_bin 	PREFIX(fb_write_bin)
#define fb_cmp 	PREFIX(fb_cmp)
#define fb_cmp_dig 	PREFIX(fb_cmp_dig)
#define fb_add 	PREFIX(fb_add)
#define fb_add_dig 	PREFIX(fb_add_dig)
#define fb_mul_basic 	PREFIX(fb_mul_basic)
#define fb_mul_integ 	PREFIX(fb_mul_integ)
#define fb_mul_lodah 	PREFIX(fb_mul_lodah)
#define fb_mul_dig 	PREFIX(fb_mul_dig)
#define fb_mul_karat 	PREFIX(fb_mul_karat)
#define fb_sqr_basic 	PREFIX(fb_sqr_basic)
#define fb_sqr_integ 	PREFIX(fb_sqr_integ)
#define fb_sqr_quick 	PREFIX(fb_sqr_quick)
#define fb_lsh 	PREFIX(fb_lsh)
#define fb_rsh 	PREFIX(fb_rsh)
#define fb_rdc_basic 	PREFIX(fb_rdc_basic)
#define fb_rdc_quick 	PREFIX(fb_rdc_quick)
#define fb_srt_basic 	PREFIX(fb_srt_basic)
#define fb_srt_quick 	PREFIX(fb_srt_quick)
#define fb_trc_basic 	PREFIX(fb_trc_basic)
#define fb_trc_quick 	PREFIX(fb_trc_quick)
#define fb_inv_basic 	PREFIX(fb_inv_basic)
#define fb_inv_binar 	PREFIX(fb_inv_binar)
#define fb_inv_exgcd 	PREFIX(fb_inv_exgcd)
#define fb_inv_almos 	PREFIX(fb_inv_almos)
#define fb_inv_itoht 	PREFIX(fb_inv_itoht)
#define fb_inv_bruch 	PREFIX(fb_inv_bruch)
#define fb_inv_ctaia 	PREFIX(fb_inv_ctaia)
#define fb_inv_lower 	PREFIX(fb_inv_lower)
#define fb_inv_sim 	PREFIX(fb_inv_sim)
#define fb_exp_2b 	PREFIX(fb_exp_2b)
#define fb_exp_basic 	PREFIX(fb_exp_basic)
#define fb_exp_slide 	PREFIX(fb_exp_slide)
#define fb_exp_monty 	PREFIX(fb_exp_monty)
#define fb_slv_basic 	PREFIX(fb_slv_basic)
#define fb_slv_quick 	PREFIX(fb_slv_quick)
#define fb_itr_basic 	PREFIX(fb_itr_basic)
#define fb_itr_pre_quick 	PREFIX(fb_itr_pre_quick)
#define fb_itr_quick 	PREFIX(fb_itr_quick)

#undef fb_add1_low
#undef fb_addn_low
#undef fb_addd_low
#undef fb_lsh1_low
#undef fb_lshb_low
#undef fb_lshd_low
#undef fb_rsh1_low
#undef fb_rshb_low
#undef fb_rshd_low
#undef fb_lsha_low
#undef fb_mul1_low
#undef fb_muln_low
#undef fb_muld_low
#undef fb_mulm_low
#undef fb_sqrn_low
#undef fb_sqrl_low
#undef fb_sqrm_low
#undef fb_itrn_low
#undef fb_srtn_low
#undef fb_slvn_low
#undef fb_trcn_low
#undef fb_rdcn_low
#undef fb_rdc1_low
#undef fb_invn_low

#define fb_add1_low 	PREFIX(fb_add1_low)
#define fb_addn_low 	PREFIX(fb_addn_low)
#define fb_addd_low 	PREFIX(fb_addd_low)
#define fb_lsh1_low 	PREFIX(fb_lsh1_low)
#define fb_lshb_low 	PREFIX(fb_lshb_low)
#define fb_lshd_low 	PREFIX(fb_lshd_low)
#define fb_rsh1_low 	PREFIX(fb_rsh1_low)
#define fb_rshb_low 	PREFIX(fb_rshb_low)
#define fb_rshd_low 	PREFIX(fb_rshd_low)
#define fb_lsha_low 	PREFIX(fb_lsha_low)
#define fb_mul1_low 	PREFIX(fb_mul1_low)
#define fb_muln_low 	PREFIX(fb_muln_low)
#define fb_muld_low 	PREFIX(fb_muld_low)
#define fb_mulm_low 	PREFIX(fb_mulm_low)
#define fb_sqrn_low 	PREFIX(fb_sqrn_low)
#define fb_sqrl_low 	PREFIX(fb_sqrl_low)
#define fb_sqrm_low 	PREFIX(fb_sqrm_low)
#define fb_itrn_low 	PREFIX(fb_itrn_low)
#define fb_srtn_low 	PREFIX(fb_srtn_low)
#define fb_slvn_low 	PREFIX(fb_slvn_low)
#define fb_trcn_low 	PREFIX(fb_trcn_low)
#define fb_rdcn_low 	PREFIX(fb_rdcn_low)
#define fb_rdc1_low 	PREFIX(fb_rdc1_low)
#define fb_invn_low 	PREFIX(fb_invn_low)

#undef ep_st
#undef ep_t
#define ep_st         PREFIX(ep_st)
#define ep_t          PREFIX(ep_t)

#undef ep_curve_init
#undef ep_curve_clean
#undef ep_curve_get_a
#undef ep_curve_get_b
#undef ep_curve_get_beta
#undef ep_curve_get_v1
#undef ep_curve_get_v2
#undef ep_curve_opt_a
#undef ep_curve_opt_b
#undef ep_curve_is_endom
#undef ep_curve_is_super
#undef ep_curve_is_pairf
#undef ep_curve_is_ctmap
#undef ep_curve_get_gen
#undef ep_curve_get_tab
#undef ep_curve_get_ord
#undef ep_curve_get_cof
#undef ep_curve_get_iso
#undef ep_curve_set_plain
#undef ep_curve_set_super
#undef ep_curve_set_endom
#undef ep_param_set
#undef ep_param_set_any
#undef ep_param_set_any_plain
#undef ep_param_set_any_endom
#undef ep_param_set_any_super
#undef ep_param_set_any_pairf
#undef ep_param_get
#undef ep_param_print
#undef ep_param_level
#undef ep_param_embed
#undef ep_is_infty
#undef ep_set_infty
#undef ep_copy
#undef ep_cmp
#undef ep_rand
#undef ep_rhs
#undef ep_is_valid
#undef ep_tab
#undef ep_print
#undef ep_size_bin
#undef ep_read_bin
#undef ep_write_bin
#undef ep_neg_basic
#undef ep_neg_projc
#undef ep_add_basic
#undef ep_add_slp_basic
#undef ep_add_projc
#undef ep_sub_basic
#undef ep_sub_projc
#undef ep_dbl_basic
#undef ep_dbl_slp_basic
#undef ep_dbl_projc
#undef ep_mul_basic
#undef ep_mul_slide
#undef ep_mul_monty
#undef ep_mul_lwnaf
#undef ep_mul_lwreg
#undef ep_mul_gen
#undef ep_mul_dig
#undef ep_mul_pre_basic
#undef ep_mul_pre_yaowi
#undef ep_mul_pre_nafwi
#undef ep_mul_pre_combs
#undef ep_mul_pre_combd
#undef ep_mul_pre_lwnaf
#undef ep_mul_fix_basic
#undef ep_mul_fix_yaowi
#undef ep_mul_fix_nafwi
#undef ep_mul_fix_combs
#undef ep_mul_fix_combd
#undef ep_mul_fix_lwnaf
#undef ep_mul_sim_basic
#undef ep_mul_sim_trick
#undef ep_mul_sim_inter
#undef ep_mul_sim_joint
#undef ep_mul_sim_gen
#undef ep_mul_sim_dig
#undef ep_norm
#undef ep_norm_sim
#undef ep_map
#undef ep_map_dst
#undef ep_pck
#undef ep_upk

#define ep_curve_init 	PREFIX(ep_curve_init)
#define ep_curve_clean 	PREFIX(ep_curve_clean)
#define ep_curve_get_a 	PREFIX(ep_curve_get_a)
#define ep_curve_get_b 	PREFIX(ep_curve_get_b)
#define ep_curve_get_beta 	PREFIX(ep_curve_get_beta)
#define ep_curve_get_v1 	PREFIX(ep_curve_get_v1)
#define ep_curve_get_v2 	PREFIX(ep_curve_get_v2)
#define ep_curve_opt_a 	PREFIX(ep_curve_opt_a)
#define ep_curve_opt_b 	PREFIX(ep_curve_opt_b)
#define ep_curve_is_endom 	PREFIX(ep_curve_is_endom)
#define ep_curve_is_super 	PREFIX(ep_curve_is_super)
#define ep_curve_is_pairf 	PREFIX(ep_curve_is_pairf)
#define ep_curve_is_ctmap 	PREFIX(ep_curve_is_ctmap)
#define ep_curve_get_gen 	PREFIX(ep_curve_get_gen)
#define ep_curve_get_tab 	PREFIX(ep_curve_get_tab)
#define ep_curve_get_ord 	PREFIX(ep_curve_get_ord)
#define ep_curve_get_cof 	PREFIX(ep_curve_get_cof)
#define ep_curve_get_iso 	PREFIX(ep_curve_get_iso)
#define ep_curve_set_plain 	PREFIX(ep_curve_set_plain)
#define ep_curve_set_super 	PREFIX(ep_curve_set_super)
#define ep_curve_set_endom 	PREFIX(ep_curve_set_endom)
#define ep_param_set 	PREFIX(ep_param_set)
#define ep_param_set_any 	PREFIX(ep_param_set_any)
#define ep_param_set_any_plain 	PREFIX(ep_param_set_any_plain)
#define ep_param_set_any_endom 	PREFIX(ep_param_set_any_endom)
#define ep_param_set_any_super 	PREFIX(ep_param_set_any_super)
#define ep_param_set_any_pairf 	PREFIX(ep_param_set_any_pairf)
#define ep_param_get 	PREFIX(ep_param_get)
#define ep_param_print 	PREFIX(ep_param_print)
#define ep_param_level 	PREFIX(ep_param_level)
#define ep_param_embed 	PREFIX(ep_param_embed)
#define ep_is_infty 	PREFIX(ep_is_infty)
#define ep_set_infty 	PREFIX(ep_set_infty)
#define ep_copy 	PREFIX(ep_copy)
#define ep_cmp 	PREFIX(ep_cmp)
#define ep_rand 	PREFIX(ep_rand)
#define ep_rhs 	PREFIX(ep_rhs)
#define ep_is_valid 	PREFIX(ep_is_valid)
#define ep_tab 	PREFIX(ep_tab)
#define ep_print 	PREFIX(ep_print)
#define ep_size_bin 	PREFIX(ep_size_bin)
#define ep_read_bin 	PREFIX(ep_read_bin)
#define ep_write_bin 	PREFIX(ep_write_bin)
#define ep_neg_basic 	PREFIX(ep_neg_basic)
#define ep_neg_projc 	PREFIX(ep_neg_projc)
#define ep_add_basic 	PREFIX(ep_add_basic)
#define ep_add_slp_basic 	PREFIX(ep_add_slp_basic)
#define ep_add_projc 	PREFIX(ep_add_projc)
#define ep_sub_basic 	PREFIX(ep_sub_basic)
#define ep_sub_projc 	PREFIX(ep_sub_projc)
#define ep_dbl_basic 	PREFIX(ep_dbl_basic)
#define ep_dbl_slp_basic 	PREFIX(ep_dbl_slp_basic)
#define ep_dbl_projc 	PREFIX(ep_dbl_projc)
#define ep_mul_basic 	PREFIX(ep_mul_basic)
#define ep_mul_slide 	PREFIX(ep_mul_slide)
#define ep_mul_monty 	PREFIX(ep_mul_monty)
#define ep_mul_lwnaf 	PREFIX(ep_mul_lwnaf)
#define ep_mul_lwreg 	PREFIX(ep_mul_lwreg)
#define ep_mul_gen 	PREFIX(ep_mul_gen)
#define ep_mul_dig 	PREFIX(ep_mul_dig)
#define ep_mul_pre_basic 	PREFIX(ep_mul_pre_basic)
#define ep_mul_pre_yaowi 	PREFIX(ep_mul_pre_yaowi)
#define ep_mul_pre_nafwi 	PREFIX(ep_mul_pre_nafwi)
#define ep_mul_pre_combs 	PREFIX(ep_mul_pre_combs)
#define ep_mul_pre_combd 	PREFIX(ep_mul_pre_combd)
#define ep_mul_pre_lwnaf 	PREFIX(ep_mul_pre_lwnaf)
#define ep_mul_fix_basic 	PREFIX(ep_mul_fix_basic)
#define ep_mul_fix_yaowi 	PREFIX(ep_mul_fix_yaowi)
#define ep_mul_fix_nafwi 	PREFIX(ep_mul_fix_nafwi)
#define ep_mul_fix_combs 	PREFIX(ep_mul_fix_combs)
#define ep_mul_fix_combd 	PREFIX(ep_mul_fix_combd)
#define ep_mul_fix_lwnaf 	PREFIX(ep_mul_fix_lwnaf)
#define ep_mul_sim_basic 	PREFIX(ep_mul_sim_basic)
#define ep_mul_sim_trick 	PREFIX(ep_mul_sim_trick)
#define ep_mul_sim_inter 	PREFIX(ep_mul_sim_inter)
#define ep_mul_sim_joint 	PREFIX(ep_mul_sim_joint)
#define ep_mul_sim_gen 	PREFIX(ep_mul_sim_gen)
#define ep_mul_sim_dig 	PREFIX(ep_mul_sim_dig)
#define ep_norm 	PREFIX(ep_norm)
#define ep_norm_sim 	PREFIX(ep_norm_sim)
#define ep_map 	PREFIX(ep_map)
#define ep_map_dst 	PREFIX(ep_map_dst)
#define ep_pck 	PREFIX(ep_pck)
#define ep_upk 	PREFIX(ep_upk)

#undef ed_st
#undef ed_t
#define ed_st         PREFIX(ed_st)
#define ed_t          PREFIX(ed_t)

#undef ed_param_set
#undef ed_param_set_any
#undef ed_param_get
#undef ed_curve_get_ord
#undef ed_curve_get_gen
#undef ed_curve_get_tab
#undef ed_curve_get_cof
#undef ed_param_print
#undef ed_param_level
#undef ed_projc_to_extnd
#undef ed_rand
#undef ed_rhs
#undef ed_copy
#undef ed_cmp
#undef ed_set_infty
#undef ed_is_infty
#undef ed_neg_basic
#undef ed_neg_projc
#undef ed_add_basic
#undef ed_add_projc
#undef ed_add_extnd
#undef ed_sub_basic
#undef ed_sub_projc
#undef ed_sub_extnd
#undef ed_dbl_basic
#undef ed_dbl_projc
#undef ed_dbl_extnd
#undef ed_norm
#undef ed_norm_sim
#undef ed_map
#undef ed_curve_init
#undef ed_curve_clean
#undef ed_mul_pre_basic
#undef ed_mul_pre_yaowi
#undef ed_mul_pre_nafwi
#undef ed_mul_pre_combs
#undef ed_mul_pre_combd
#undef ed_mul_pre_lwnaf
#undef ed_mul_fix_basic
#undef ed_mul_fix_yaowi
#undef ed_mul_fix_nafwi
#undef ed_mul_fix_combs
#undef ed_mul_fix_combd
#undef ed_mul_fix_lwnaf
#undef ed_mul_fix_lwnaf_mixed
#undef ed_mul_gen
#undef ed_mul_dig
#undef ed_mul_sim_basic
#undef ed_mul_sim_trick
#undef ed_mul_sim_inter
#undef ed_mul_sim_joint
#undef ed_mul_sim_gen
#undef ed_tab
#undef ed_print
#undef ed_is_valid
#undef ed_size_bin
#undef ed_read_bin
#undef ed_write_bin
#undef ed_mul_basic
#undef ed_mul_slide
#undef ed_mul_monty
#undef ed_mul_lwnaf
#undef ed_mul_lwreg
#undef ed_pck
#undef ed_upk

#define ed_param_set 	PREFIX(ed_param_set)
#define ed_param_set_any 	PREFIX(ed_param_set_any)
#define ed_param_get 	PREFIX(ed_param_get)
#define ed_curve_get_ord 	PREFIX(ed_curve_get_ord)
#define ed_curve_get_gen 	PREFIX(ed_curve_get_gen)
#define ed_curve_get_tab 	PREFIX(ed_curve_get_tab)
#define ed_curve_get_cof 	PREFIX(ed_curve_get_cof)
#define ed_param_print 	PREFIX(ed_param_print)
#define ed_param_level 	PREFIX(ed_param_level)
#define ed_projc_to_extnd 	PREFIX(ed_projc_to_extnd)
#define ed_rand 	PREFIX(ed_rand)
#define ed_rhs 	PREFIX(ed_rhs)
#define ed_copy 	PREFIX(ed_copy)
#define ed_cmp 	PREFIX(ed_cmp)
#define ed_set_infty 	PREFIX(ed_set_infty)
#define ed_is_infty 	PREFIX(ed_is_infty)
#define ed_neg_basic 	PREFIX(ed_neg_basic)
#define ed_neg_projc 	PREFIX(ed_neg_projc)
#define ed_add_basic 	PREFIX(ed_add_basic)
#define ed_add_projc 	PREFIX(ed_add_projc)
#define ed_add_extnd 	PREFIX(ed_add_extnd)
#define ed_sub_basic 	PREFIX(ed_sub_basic)
#define ed_sub_projc 	PREFIX(ed_sub_projc)
#define ed_sub_extnd 	PREFIX(ed_sub_extnd)
#define ed_dbl_basic 	PREFIX(ed_dbl_basic)
#define ed_dbl_projc 	PREFIX(ed_dbl_projc)
#define ed_dbl_extnd 	PREFIX(ed_dbl_extnd)
#define ed_norm 	PREFIX(ed_norm)
#define ed_norm_sim 	PREFIX(ed_norm_sim)
#define ed_map 	PREFIX(ed_map)
#define ed_curve_init 	PREFIX(ed_curve_init)
#define ed_curve_clean 	PREFIX(ed_curve_clean)
#define ed_mul_pre_basic 	PREFIX(ed_mul_pre_basic)
#define ed_mul_pre_yaowi 	PREFIX(ed_mul_pre_yaowi)
#define ed_mul_pre_nafwi 	PREFIX(ed_mul_pre_nafwi)
#define ed_mul_pre_combs 	PREFIX(ed_mul_pre_combs)
#define ed_mul_pre_combd 	PREFIX(ed_mul_pre_combd)
#define ed_mul_pre_lwnaf 	PREFIX(ed_mul_pre_lwnaf)
#define ed_mul_fix_basic 	PREFIX(ed_mul_fix_basic)
#define ed_mul_fix_yaowi 	PREFIX(ed_mul_fix_yaowi)
#define ed_mul_fix_nafwi 	PREFIX(ed_mul_fix_nafwi)
#define ed_mul_fix_combs 	PREFIX(ed_mul_fix_combs)
#define ed_mul_fix_combd 	PREFIX(ed_mul_fix_combd)
#define ed_mul_fix_lwnaf 	PREFIX(ed_mul_fix_lwnaf)
#define ed_mul_fix_lwnaf_mixed 	PREFIX(ed_mul_fix_lwnaf_mixed)
#define ed_mul_gen 	PREFIX(ed_mul_gen)
#define ed_mul_dig 	PREFIX(ed_mul_dig)
#define ed_mul_sim_basic 	PREFIX(ed_mul_sim_basic)
#define ed_mul_sim_trick 	PREFIX(ed_mul_sim_trick)
#define ed_mul_sim_inter 	PREFIX(ed_mul_sim_inter)
#define ed_mul_sim_joint 	PREFIX(ed_mul_sim_joint)
#define ed_mul_sim_gen 	PREFIX(ed_mul_sim_gen)
#define ed_tab 	PREFIX(ed_tab)
#define ed_print 	PREFIX(ed_print)
#define ed_is_valid 	PREFIX(ed_is_valid)
#define ed_size_bin 	PREFIX(ed_size_bin)
#define ed_read_bin 	PREFIX(ed_read_bin)
#define ed_write_bin 	PREFIX(ed_write_bin)
#define ed_mul_basic 	PREFIX(ed_mul_basic)
#define ed_mul_slide 	PREFIX(ed_mul_slide)
#define ed_mul_monty 	PREFIX(ed_mul_monty)
#define ed_mul_lwnaf 	PREFIX(ed_mul_lwnaf)
#define ed_mul_lwreg 	PREFIX(ed_mul_lwreg)
#define ed_pck 	PREFIX(ed_pck)
#define ed_upk 	PREFIX(ed_upk)

#undef eb_st
#undef eb_t
#define eb_st         PREFIX(eb_st)
#define eb_t          PREFIX(eb_t)

#undef eb_curve_init
#undef eb_curve_clean
#undef eb_curve_get_a
#undef eb_curve_get_b
#undef eb_curve_opt_a
#undef eb_curve_opt_b
#undef eb_curve_is_kbltz
#undef eb_curve_get_gen
#undef eb_curve_get_tab
#undef eb_curve_get_ord
#undef eb_curve_get_cof
#undef eb_curve_set
#undef eb_param_set
#undef eb_param_set_any
#undef eb_param_set_any_plain
#undef eb_param_set_any_kbltz
#undef eb_param_get
#undef eb_param_print
#undef eb_param_level
#undef eb_is_infty
#undef eb_set_infty
#undef eb_copy
#undef eb_cmp
#undef eb_rand
#undef eb_rhs
#undef eb_is_valid
#undef eb_tab
#undef eb_print
#undef eb_size_bin
#undef eb_read_bin
#undef eb_write_bin
#undef eb_neg_basic
#undef eb_neg_projc
#undef eb_add_basic
#undef eb_add_projc
#undef eb_sub_basic
#undef eb_sub_projc
#undef eb_dbl_basic
#undef eb_dbl_projc
#undef eb_hlv
#undef eb_frb_basic
#undef eb_frb_projc
#undef eb_mul_basic
#undef eb_mul_lodah
#undef eb_mul_lwnaf
#undef eb_mul_rwnaf
#undef eb_mul_halve
#undef eb_mul_gen
#undef eb_mul_dig
#undef eb_mul_pre_basic
#undef eb_mul_pre_yaowi
#undef eb_mul_pre_nafwi
#undef eb_mul_pre_combs
#undef eb_mul_pre_combd
#undef eb_mul_pre_lwnaf
#undef eb_mul_fix_basic
#undef eb_mul_fix_yaowi
#undef eb_mul_fix_nafwi
#undef eb_mul_fix_combs
#undef eb_mul_fix_combd
#undef eb_mul_fix_lwnaf
#undef eb_mul_sim_basic
#undef eb_mul_sim_trick
#undef eb_mul_sim_inter
#undef eb_mul_sim_joint
#undef eb_mul_sim_gen
#undef eb_norm
#undef eb_norm_sim
#undef eb_map
#undef eb_pck
#undef eb_upk

#define eb_curve_init 	PREFIX(eb_curve_init)
#define eb_curve_clean 	PREFIX(eb_curve_clean)
#define eb_curve_get_a 	PREFIX(eb_curve_get_a)
#define eb_curve_get_b 	PREFIX(eb_curve_get_b)
#define eb_curve_opt_a 	PREFIX(eb_curve_opt_a)
#define eb_curve_opt_b 	PREFIX(eb_curve_opt_b)
#define eb_curve_is_kbltz 	PREFIX(eb_curve_is_kbltz)
#define eb_curve_get_gen 	PREFIX(eb_curve_get_gen)
#define eb_curve_get_tab 	PREFIX(eb_curve_get_tab)
#define eb_curve_get_ord 	PREFIX(eb_curve_get_ord)
#define eb_curve_get_cof 	PREFIX(eb_curve_get_cof)
#define eb_curve_set 	PREFIX(eb_curve_set)
#define eb_param_set 	PREFIX(eb_param_set)
#define eb_param_set_any 	PREFIX(eb_param_set_any)
#define eb_param_set_any_plain 	PREFIX(eb_param_set_any_plain)
#define eb_param_set_any_kbltz 	PREFIX(eb_param_set_any_kbltz)
#define eb_param_get 	PREFIX(eb_param_get)
#define eb_param_print 	PREFIX(eb_param_print)
#define eb_param_level 	PREFIX(eb_param_level)
#define eb_is_infty 	PREFIX(eb_is_infty)
#define eb_set_infty 	PREFIX(eb_set_infty)
#define eb_copy 	PREFIX(eb_copy)
#define eb_cmp 	PREFIX(eb_cmp)
#define eb_rand 	PREFIX(eb_rand)
#define eb_rhs 	PREFIX(eb_rhs)
#define eb_is_valid 	PREFIX(eb_is_valid)
#define eb_tab 	PREFIX(eb_tab)
#define eb_print 	PREFIX(eb_print)
#define eb_size_bin 	PREFIX(eb_size_bin)
#define eb_read_bin 	PREFIX(eb_read_bin)
#define eb_write_bin 	PREFIX(eb_write_bin)
#define eb_neg_basic 	PREFIX(eb_neg_basic)
#define eb_neg_projc 	PREFIX(eb_neg_projc)
#define eb_add_basic 	PREFIX(eb_add_basic)
#define eb_add_projc 	PREFIX(eb_add_projc)
#define eb_sub_basic 	PREFIX(eb_sub_basic)
#define eb_sub_projc 	PREFIX(eb_sub_projc)
#define eb_dbl_basic 	PREFIX(eb_dbl_basic)
#define eb_dbl_projc 	PREFIX(eb_dbl_projc)
#define eb_hlv 	PREFIX(eb_hlv)
#define eb_frb_basic 	PREFIX(eb_frb_basic)
#define eb_frb_projc 	PREFIX(eb_frb_projc)
#define eb_mul_basic 	PREFIX(eb_mul_basic)
#define eb_mul_lodah 	PREFIX(eb_mul_lodah)
#define eb_mul_lwnaf 	PREFIX(eb_mul_lwnaf)
#define eb_mul_rwnaf 	PREFIX(eb_mul_rwnaf)
#define eb_mul_halve 	PREFIX(eb_mul_halve)
#define eb_mul_gen 	PREFIX(eb_mul_gen)
#define eb_mul_dig 	PREFIX(eb_mul_dig)
#define eb_mul_pre_basic 	PREFIX(eb_mul_pre_basic)
#define eb_mul_pre_yaowi 	PREFIX(eb_mul_pre_yaowi)
#define eb_mul_pre_nafwi 	PREFIX(eb_mul_pre_nafwi)
#define eb_mul_pre_combs 	PREFIX(eb_mul_pre_combs)
#define eb_mul_pre_combd 	PREFIX(eb_mul_pre_combd)
#define eb_mul_pre_lwnaf 	PREFIX(eb_mul_pre_lwnaf)
#define eb_mul_fix_basic 	PREFIX(eb_mul_fix_basic)
#define eb_mul_fix_yaowi 	PREFIX(eb_mul_fix_yaowi)
#define eb_mul_fix_nafwi 	PREFIX(eb_mul_fix_nafwi)
#define eb_mul_fix_combs 	PREFIX(eb_mul_fix_combs)
#define eb_mul_fix_combd 	PREFIX(eb_mul_fix_combd)
#define eb_mul_fix_lwnaf 	PREFIX(eb_mul_fix_lwnaf)
#define eb_mul_sim_basic 	PREFIX(eb_mul_sim_basic)
#define eb_mul_sim_trick 	PREFIX(eb_mul_sim_trick)
#define eb_mul_sim_inter 	PREFIX(eb_mul_sim_inter)
#define eb_mul_sim_joint 	PREFIX(eb_mul_sim_joint)
#define eb_mul_sim_gen 	PREFIX(eb_mul_sim_gen)
#define eb_norm 	PREFIX(eb_norm)
#define eb_norm_sim 	PREFIX(eb_norm_sim)
#define eb_map 	PREFIX(eb_map)
#define eb_pck 	PREFIX(eb_pck)
#define eb_upk 	PREFIX(eb_upk)

#undef ep2_st
#undef ep2_t
#define ep2_st        PREFIX(ep2_st)
#define ep2_t         PREFIX(ep2_t)

#undef ep2_curve_init
#undef ep2_curve_clean
#undef ep2_curve_get_a
#undef ep2_curve_get_b
#undef ep2_curve_get_vs
#undef ep2_curve_opt_a
#undef ep2_curve_opt_b
#undef ep2_curve_is_twist
#undef ep2_curve_is_ctmap
#undef ep2_curve_get_gen
#undef ep2_curve_get_tab
#undef ep2_curve_get_ord
#undef ep2_curve_get_cof
#undef ep2_curve_get_iso
#undef ep2_curve_set
#undef ep2_curve_set_twist
#undef ep2_is_infty
#undef ep2_set_infty
#undef ep2_copy
#undef ep2_cmp
#undef ep2_rand
#undef ep2_rhs
#undef ep2_is_valid
#undef ep2_tab
#undef ep2_print
#undef ep2_size_bin
#undef ep2_read_bin
#undef ep2_write_bin
#undef ep2_neg_basic
#undef ep2_neg_projc
#undef ep2_add_basic
#undef ep2_add_slp_basic
#undef ep2_sub_basic
#undef ep2_add_projc
#undef ep2_sub_projc
#undef ep2_dbl_basic
#undef ep2_dbl_slp_basic
#undef ep2_dbl_projc
#undef ep2_mul_basic
#undef ep2_mul_slide
#undef ep2_mul_monty
#undef ep2_mul_lwnaf
#undef ep2_mul_lwreg
#undef ep2_mul_gen
#undef ep2_mul_dig
#undef ep2_mul_pre_basic
#undef ep2_mul_pre_yaowi
#undef ep2_mul_pre_nafwi
#undef ep2_mul_pre_combs
#undef ep2_mul_pre_combd
#undef ep2_mul_pre_lwnaf
#undef ep2_mul_fix_basic
#undef ep2_mul_fix_yaowi
#undef ep2_mul_fix_nafwi
#undef ep2_mul_fix_combs
#undef ep2_mul_fix_combd
#undef ep2_mul_fix_lwnaf
#undef ep2_mul_sim_basic
#undef ep2_mul_sim_trick
#undef ep2_mul_sim_inter
#undef ep2_mul_sim_joint
#undef ep2_mul_sim_gen
#undef ep2_mul_sim_dig
#undef ep2_norm
#undef ep2_norm_sim
#undef ep2_map
#undef ep2_frb
#undef ep2_pck
#undef ep2_upk

#define ep2_curve_init 	PREFIX(ep2_curve_init)
#define ep2_curve_clean 	PREFIX(ep2_curve_clean)
#define ep2_curve_get_a 	PREFIX(ep2_curve_get_a)
#define ep2_curve_get_b 	PREFIX(ep2_curve_get_b)
#define ep2_curve_get_vs 	PREFIX(ep2_curve_get_vs)
#define ep2_curve_opt_a 	PREFIX(ep2_curve_opt_a)
#define ep2_curve_opt_b 	PREFIX(ep2_curve_opt_b)
#define ep2_curve_is_twist 	PREFIX(ep2_curve_is_twist)
#define ep2_curve_is_ctmap	PREFIX(ep2_curve_is_ctmap)
#define ep2_curve_get_gen 	PREFIX(ep2_curve_get_gen)
#define ep2_curve_get_tab 	PREFIX(ep2_curve_get_tab)
#define ep2_curve_get_ord 	PREFIX(ep2_curve_get_ord)
#define ep2_curve_get_cof 	PREFIX(ep2_curve_get_cof)
#define ep2_curve_get_iso	PREFIX(ep2_curve_get_iso)
#define ep2_curve_set 	PREFIX(ep2_curve_set)
#define ep2_curve_set_twist 	PREFIX(ep2_curve_set_twist)
#define ep2_is_infty 	PREFIX(ep2_is_infty)
#define ep2_set_infty 	PREFIX(ep2_set_infty)
#define ep2_copy 	PREFIX(ep2_copy)
#define ep2_cmp 	PREFIX(ep2_cmp)
#define ep2_rand 	PREFIX(ep2_rand)
#define ep2_rhs 	PREFIX(ep2_rhs)
#define ep2_is_valid 	PREFIX(ep2_is_valid)
#define ep2_tab 	PREFIX(ep2_tab)
#define ep2_print 	PREFIX(ep2_print)
#define ep2_size_bin 	PREFIX(ep2_size_bin)
#define ep2_read_bin 	PREFIX(ep2_read_bin)
#define ep2_write_bin 	PREFIX(ep2_write_bin)
#define ep2_neg_basic 	PREFIX(ep2_neg_basic)
#define ep2_neg_projc 	PREFIX(ep2_neg_projc)
#define ep2_add_basic 	PREFIX(ep2_add_basic)
#define ep2_add_slp_basic 	PREFIX(ep2_add_slp_basic)
#define ep2_sub_basic 	PREFIX(ep2_sub_basic)
#define ep2_add_projc 	PREFIX(ep2_add_projc)
#define ep2_sub_projc 	PREFIX(ep2_sub_projc)
#define ep2_dbl_basic 	PREFIX(ep2_dbl_basic)
#define ep2_dbl_slp_basic 	PREFIX(ep2_dbl_slp_basic)
#define ep2_dbl_projc 	PREFIX(ep2_dbl_projc)
#define ep2_mul_basic 	PREFIX(ep2_mul_basic)
#define ep2_mul_slide 	PREFIX(ep2_mul_slide)
#define ep2_mul_monty 	PREFIX(ep2_mul_monty)
#define ep2_mul_lwnaf 	PREFIX(ep2_mul_lwnaf)
#define ep2_mul_lwreg 	PREFIX(ep2_mul_lwreg)
#define ep2_mul_gen 	PREFIX(ep2_mul_gen)
#define ep2_mul_dig 	PREFIX(ep2_mul_dig)
#define ep2_mul_pre_basic 	PREFIX(ep2_mul_pre_basic)
#define ep2_mul_pre_yaowi 	PREFIX(ep2_mul_pre_yaowi)
#define ep2_mul_pre_nafwi 	PREFIX(ep2_mul_pre_nafwi)
#define ep2_mul_pre_combs 	PREFIX(ep2_mul_pre_combs)
#define ep2_mul_pre_combd 	PREFIX(ep2_mul_pre_combd)
#define ep2_mul_pre_lwnaf 	PREFIX(ep2_mul_pre_lwnaf)
#define ep2_mul_fix_basic 	PREFIX(ep2_mul_fix_basic)
#define ep2_mul_fix_yaowi 	PREFIX(ep2_mul_fix_yaowi)
#define ep2_mul_fix_nafwi 	PREFIX(ep2_mul_fix_nafwi)
#define ep2_mul_fix_combs 	PREFIX(ep2_mul_fix_combs)
#define ep2_mul_fix_combd 	PREFIX(ep2_mul_fix_combd)
#define ep2_mul_fix_lwnaf 	PREFIX(ep2_mul_fix_lwnaf)
#define ep2_mul_sim_basic 	PREFIX(ep2_mul_sim_basic)
#define ep2_mul_sim_trick 	PREFIX(ep2_mul_sim_trick)
#define ep2_mul_sim_inter 	PREFIX(ep2_mul_sim_inter)
#define ep2_mul_sim_joint 	PREFIX(ep2_mul_sim_joint)
#define ep2_mul_sim_gen 	PREFIX(ep2_mul_sim_gen)
#define ep2_mul_sim_dig 	PREFIX(ep2_mul_sim_dig)
#define ep2_norm 	PREFIX(ep2_norm)
#define ep2_norm_sim 	PREFIX(ep2_norm_sim)
#define ep2_map 	PREFIX(ep2_map)
#define ep2_frb 	PREFIX(ep2_frb)
#define ep2_pck 	PREFIX(ep2_pck)
#define ep2_upk 	PREFIX(ep2_upk)

#undef fp2_st
#undef fp2_t
#undef dv2_t
#define fp2_st        PREFIX(fp2_st)
#define fp2_t         PREFIX(fp2_t)
#define dv2_t         PREFIX(dv2_t)
#undef fp3_st
#undef fp3_t
#undef dv3_t
#define fp3_st        PREFIX(fp3_st)
#define fp3_t         PREFIX(fp3_t)
#define dv3_t         PREFIX(dv3_t)
#undef fp6_st
#undef fp6_t
#undef dv6_t
#define fp6_st        PREFIX(fp6_st)
#define fp6_t         PREFIX(fp6_t)
#define dv6_t         PREFIX(dv6_t)
#undef fp9_st
#undef fp8_t
#undef dv8_t
#define fp8_st        PREFIX(fp8_st)
#define fp8_t         PREFIX(fp8_t)
#define dv8_t         PREFIX(dv8_t)
#undef fp9_st
#undef fp9_t
#undef dv9_t
#define fp9_st        PREFIX(fp9_st)
#define fp9_t         PREFIX(fp9_t)
#define dv9_t         PREFIX(dv9_t)
#undef fp12_st
#undef fp12_t
#undef dv12_t
#define fp12_st        PREFIX(fp12_st)
#define fp12_t         PREFIX(fp12_t)
#define dv12_t         PREFIX(dv12_t)
#undef fp18_st
#undef fp18_t
#undef dv18_t
#define fp18_st        PREFIX(fp18_st)
#define fp18_t         PREFIX(fp18_t)
#define dv18_t         PREFIX(dv18_t)
#undef fp24_st
#undef fp24_t
#undef dv24_t
#define fp24_st        PREFIX(fp24_st)
#define fp24_t         PREFIX(fp24_t)
#define dv24_t         PREFIX(dv24_t)
#undef fp48_st
#undef fp48_t
#undef dv48_t
#define fp48_st        PREFIX(fp48_st)
#define fp48_t         PREFIX(fp48_t)
#define dv48_t         PREFIX(dv48_t)
#undef fp54_st
#undef fp54_t
#undef dv54_t
#define fp54_st        PREFIX(fp54_st)
#define fp54_t         PREFIX(fp54_t)
#define dv54_t         PREFIX(dv54_t)

#undef fp2_field_init
#undef fp2_field_get_qnr
#undef fp2_copy
#undef fp2_zero
#undef fp2_is_zero
#undef fp2_rand
#undef fp2_print
#undef fp2_size_bin
#undef fp2_read_bin
#undef fp2_write_bin
#undef fp2_cmp
#undef fp2_cmp_dig
#undef fp2_set_dig
#undef fp2_add_basic
#undef fp2_add_integ
#undef fp2_add_dig
#undef fp2_sub_basic
#undef fp2_sub_integ
#undef fpt_sub_dig
#undef fp2_neg
#undef fp2_dbl_basic
#undef fp2_dbl_integ
#undef fp2_mul_basic
#undef fp2_mul_integ
#undef fp2_mul_art
#undef fp2_mul_nor_basic
#undef fp2_mul_nor_integ
#undef fp2_mul_frb
#undef fp2_mul_dig
#undef fp2_sqr_basic
#undef fp2_sqr_integ
#undef fp2_inv
#undef fp2_inv_cyc
#undef fp2_inv_sim
#undef fp2_test_cyc
#undef fp2_conv_cyc
#undef fp2_exp
#undef fp2_exp_dig
#undef fp2_exp_cyc
#undef fp2_frb
#undef fp2_srt
#undef fp2_pck
#undef fp2_upk

#define fp2_field_init 	PREFIX(fp2_field_init)
#define fp2_field_get_qnr 	PREFIX(fp2_field_get_qnr)
#define fp2_copy 	PREFIX(fp2_copy)
#define fp2_zero 	PREFIX(fp2_zero)
#define fp2_is_zero 	PREFIX(fp2_is_zero)
#define fp2_rand 	PREFIX(fp2_rand)
#define fp2_print 	PREFIX(fp2_print)
#define fp2_size_bin 	PREFIX(fp2_size_bin)
#define fp2_read_bin 	PREFIX(fp2_read_bin)
#define fp2_write_bin 	PREFIX(fp2_write_bin)
#define fp2_cmp 	PREFIX(fp2_cmp)
#define fp2_cmp_dig 	PREFIX(fp2_cmp_dig)
#define fp2_set_dig 	PREFIX(fp2_set_dig)
#define fp2_add_basic 	PREFIX(fp2_add_basic)
#define fp2_add_integ 	PREFIX(fp2_add_integ)
#define fp2_add_dig		PREFIX(fp2_add_dig)
#define fp2_sub_basic 	PREFIX(fp2_sub_basic)
#define fp2_sub_integ 	PREFIX(fp2_sub_integ)
#define fp2_sub_dig		PREFIX(fp2_sub_dig)
#define fp2_neg 	PREFIX(fp2_neg)
#define fp2_dbl_basic 	PREFIX(fp2_dbl_basic)
#define fp2_dbl_integ 	PREFIX(fp2_dbl_integ)
#define fp2_mul_basic 	PREFIX(fp2_mul_basic)
#define fp2_mul_integ 	PREFIX(fp2_mul_integ)
#define fp2_mul_art 	PREFIX(fp2_mul_art)
#define fp2_mul_nor_basic 	PREFIX(fp2_mul_nor_basic)
#define fp2_mul_nor_integ 	PREFIX(fp2_mul_nor_integ)
#define fp2_mul_frb 	PREFIX(fp2_mul_frb)
#define fp2_mul_dig		PREFIX(fp2_mul_dig)
#define fp2_sqr_basic 	PREFIX(fp2_sqr_basic)
#define fp2_sqr_integ 	PREFIX(fp2_sqr_integ)
#define fp2_inv 	PREFIX(fp2_inv)
#define fp2_inv_cyc 	PREFIX(fp2_inv_cyc)
#define fp2_inv_sim 	PREFIX(fp2_inv_sim)
#define fp2_test_cyc 	PREFIX(fp2_test_cyc)
#define fp2_conv_cyc 	PREFIX(fp2_conv_cyc)
#define fp2_exp 	PREFIX(fp2_exp)
#define fp2_exp_dig 	PREFIX(fp2_exp_dig)
#define fp2_exp_cyc 	PREFIX(fp2_exp_cyc)
#define fp2_frb 	PREFIX(fp2_frb)
#define fp2_srt 	PREFIX(fp2_srt)
#define fp2_pck 	PREFIX(fp2_pck)
#define fp2_upk 	PREFIX(fp2_upk)

#undef fp2_addn_low
#undef fp2_addm_low
#undef fp2_addd_low
#undef fp2_addc_low
#undef fp2_surelic_bn_low
#undef fp2_subm_low
#undef fp2_subd_low
#undef fp2_subc_low
#undef fp2_dbln_low
#undef fp2_dblm_low
#undef fp2_norm_low
#undef fp2_norh_low
#undef fp2_nord_low
#undef fp2_muln_low
#undef fp2_mulc_low
#undef fp2_mulm_low
#undef fp2_sqrn_low
#undef fp2_sqrm_low
#undef fp2_rdcn_low

#define fp2_addn_low 	PREFIX(fp2_addn_low)
#define fp2_addm_low 	PREFIX(fp2_addm_low)
#define fp2_addd_low 	PREFIX(fp2_addd_low)
#define fp2_addc_low 	PREFIX(fp2_addc_low)
#define fp2_surelic_bn_low 	PREFIX(fp2_surelic_bn_low)
#define fp2_subm_low 	PREFIX(fp2_subm_low)
#define fp2_subd_low 	PREFIX(fp2_subd_low)
#define fp2_subc_low 	PREFIX(fp2_subc_low)
#define fp2_dbln_low 	PREFIX(fp2_dbln_low)
#define fp2_dblm_low 	PREFIX(fp2_dblm_low)
#define fp2_norm_low 	PREFIX(fp2_norm_low)
#define fp2_norh_low 	PREFIX(fp2_norh_low)
#define fp2_nord_low 	PREFIX(fp2_nord_low)
#define fp2_muln_low 	PREFIX(fp2_muln_low)
#define fp2_mulc_low 	PREFIX(fp2_mulc_low)
#define fp2_mulm_low 	PREFIX(fp2_mulm_low)
#define fp2_sqrn_low 	PREFIX(fp2_sqrn_low)
#define fp2_sqrm_low 	PREFIX(fp2_sqrm_low)
#define fp2_rdcn_low 	PREFIX(fp2_rdcn_low)

#undef fp3_field_init
#undef fp3_copy
#undef fp3_zero
#undef fp3_is_zero
#undef fp3_rand
#undef fp3_print
#undef fp3_size_bin
#undef fp3_read_bin
#undef fp3_write_bin
#undef fp3_cmp
#undef fp3_cmp_dig
#undef fp3_set_dig
#undef fp3_add_basic
#undef fp3_add_integ
#undef fp3_sub_basic
#undef fp3_sub_integ
#undef fp3_neg
#undef fp3_dbl_basic
#undef fp3_dbl_integ
#undef fp3_mul_basic
#undef fp3_mul_integ
#undef fp3_mul_nor
#undef fp3_mul_frb
#undef fp3_sqr_basic
#undef fp3_sqr_integ
#undef fp3_inv
#undef fp3_inv_sim
#undef fp3_exp
#undef fp3_frb
#undef fp3_srt

#define fp3_field_init 	PREFIX(fp3_field_init)
#define fp3_copy 	PREFIX(fp3_copy)
#define fp3_zero 	PREFIX(fp3_zero)
#define fp3_is_zero 	PREFIX(fp3_is_zero)
#define fp3_rand 	PREFIX(fp3_rand)
#define fp3_print 	PREFIX(fp3_print)
#define fp3_size_bin 	PREFIX(fp3_size_bin)
#define fp3_read_bin 	PREFIX(fp3_read_bin)
#define fp3_write_bin 	PREFIX(fp3_write_bin)
#define fp3_cmp 	PREFIX(fp3_cmp)
#define fp3_cmp_dig 	PREFIX(fp3_cmp_dig)
#define fp3_set_dig 	PREFIX(fp3_set_dig)
#define fp3_add_basic 	PREFIX(fp3_add_basic)
#define fp3_add_integ 	PREFIX(fp3_add_integ)
#define fp3_sub_basic 	PREFIX(fp3_sub_basic)
#define fp3_sub_integ 	PREFIX(fp3_sub_integ)
#define fp3_neg 	PREFIX(fp3_neg)
#define fp3_dbl_basic 	PREFIX(fp3_dbl_basic)
#define fp3_dbl_integ 	PREFIX(fp3_dbl_integ)
#define fp3_mul_basic 	PREFIX(fp3_mul_basic)
#define fp3_mul_integ 	PREFIX(fp3_mul_integ)
#define fp3_mul_nor 	PREFIX(fp3_mul_nor)
#define fp3_mul_frb 	PREFIX(fp3_mul_frb)
#define fp3_sqr_basic 	PREFIX(fp3_sqr_basic)
#define fp3_sqr_integ 	PREFIX(fp3_sqr_integ)
#define fp3_inv 	PREFIX(fp3_inv)
#define fp3_inv_sim 	PREFIX(fp3_inv_sim)
#define fp3_exp 	PREFIX(fp3_exp)
#define fp3_frb 	PREFIX(fp3_frb)
#define fp3_srt 	PREFIX(fp3_srt)

#undef fp3_addn_low
#undef fp3_addm_low
#undef fp3_addd_low
#undef fp3_addc_low
#undef fp3_surelic_bn_low
#undef fp3_subm_low
#undef fp3_subd_low
#undef fp3_subc_low
#undef fp3_dbln_low
#undef fp3_dblm_low
#undef fp3_nord_low
#undef fp3_muln_low
#undef fp3_mulc_low
#undef fp3_mulm_low
#undef fp3_sqrn_low
#undef fp3_sqrm_low
#undef fp3_rdcn_low

#define fp3_addn_low 	PREFIX(fp3_addn_low)
#define fp3_addm_low 	PREFIX(fp3_addm_low)
#define fp3_addd_low 	PREFIX(fp3_addd_low)
#define fp3_addc_low 	PREFIX(fp3_addc_low)
#define fp3_surelic_bn_low 	PREFIX(fp3_surelic_bn_low)
#define fp3_subm_low 	PREFIX(fp3_subm_low)
#define fp3_subd_low 	PREFIX(fp3_subd_low)
#define fp3_subc_low 	PREFIX(fp3_subc_low)
#define fp3_dbln_low 	PREFIX(fp3_dbln_low)
#define fp3_dblm_low 	PREFIX(fp3_dblm_low)
#define fp3_nord_low 	PREFIX(fp3_nord_low)
#define fp3_muln_low 	PREFIX(fp3_muln_low)
#define fp3_mulc_low 	PREFIX(fp3_mulc_low)
#define fp3_mulm_low 	PREFIX(fp3_mulm_low)
#define fp3_sqrn_low 	PREFIX(fp3_sqrn_low)
#define fp3_sqrm_low 	PREFIX(fp3_sqrm_low)
#define fp3_rdcn_low 	PREFIX(fp3_rdcn_low)

#undef fp4_copy
#undef fp4_zero
#undef fp4_is_zero
#undef fp4_rand
#undef fp4_print
#undef fp4_size_bin
#undef fp4_read_bin
#undef fp4_write_bin
#undef fp4_cmp
#undef fp4_cmp_dig
#undef fp4_set_dig
#undef fp4_add
#undef fp4_sub
#undef fp4_neg
#undef fp4_dbl
#undef fp4_mul_unr
#undef fp4_mul_basic
#undef fp4_mul_lazyr
#undef fp4_mul_art
#undef fp4_mul_dxs
#undef fp4_sqr_unr
#undef fp4_sqr_basic
#undef fp4_sqr_lazyr
#undef fp4_inv
#undef fp4_inv_cyc
#undef fp4_exp
#undef fp4_frb

#define fp4_copy 	PREFIX(fp4_copy)
#define fp4_zero 	PREFIX(fp4_zero)
#define fp4_is_zero 	PREFIX(fp4_is_zero)
#define fp4_rand 	PREFIX(fp4_rand)
#define fp4_print 	PREFIX(fp4_print)
#define fp4_size_bin 	PREFIX(fp4_size_bin)
#define fp4_read_bin 	PREFIX(fp4_read_bin)
#define fp4_write_bin 	PREFIX(fp4_write_bin)
#define fp4_cmp 	PREFIX(fp4_cmp)
#define fp4_cmp_dig 	PREFIX(fp4_cmp_dig)
#define fp4_set_dig 	PREFIX(fp4_set_dig)
#define fp4_add 	PREFIX(fp4_add)
#define fp4_sub 	PREFIX(fp4_sub)
#define fp4_neg 	PREFIX(fp4_neg)
#define fp4_dbl 	PREFIX(fp4_dbl)
#define fp4_mul_unr 	PREFIX(fp4_mul_unr)
#define fp4_mul_basic 	PREFIX(fp4_mul_basic)
#define fp4_mul_lazyr 	PREFIX(fp4_mul_lazyr)
#define fp4_mul_art 	PREFIX(fp4_mul_art)
#define fp4_mul_dxs 	PREFIX(fp4_mul_dxs)
#define fp4_sqr_unr 	PREFIX(fp4_sqr_unr)
#define fp4_sqr_basic 	PREFIX(fp4_sqr_basic)
#define fp4_sqr_lazyr 	PREFIX(fp4_sqr_lazyr)
#define fp4_inv 	PREFIX(fp4_inv)
#define fp4_inv_cyc 	PREFIX(fp4_inv_cyc)
#define fp4_exp 	PREFIX(fp4_exp)
#define fp4_frb 	PREFIX(fp4_frb)

#undef fp6_copy
#undef fp6_zero
#undef fp6_is_zero
#undef fp6_rand
#undef fp6_print
#undef fp6_size_bin
#undef fp6_read_bin
#undef fp6_write_bin
#undef fp6_cmp
#undef fp6_cmp_dig
#undef fp6_set_dig
#undef fp6_add
#undef fp6_sub
#undef fp6_neg
#undef fp6_dbl
#undef fp6_mul_unr
#undef fp6_mul_basic
#undef fp6_mul_lazyr
#undef fp6_mul_art
#undef fp6_mul_dxs
#undef fp6_sqr_unr
#undef fp6_sqr_basic
#undef fp6_sqr_lazyr
#undef fp6_inv
#undef fp6_exp
#undef fp6_frb

#define fp6_copy 	PREFIX(fp6_copy)
#define fp6_zero 	PREFIX(fp6_zero)
#define fp6_is_zero 	PREFIX(fp6_is_zero)
#define fp6_rand 	PREFIX(fp6_rand)
#define fp6_print 	PREFIX(fp6_print)
#define fp6_size_bin 	PREFIX(fp6_size_bin)
#define fp6_read_bin 	PREFIX(fp6_read_bin)
#define fp6_write_bin 	PREFIX(fp6_write_bin)
#define fp6_cmp 	PREFIX(fp6_cmp)
#define fp6_cmp_dig 	PREFIX(fp6_cmp_dig)
#define fp6_set_dig 	PREFIX(fp6_set_dig)
#define fp6_add 	PREFIX(fp6_add)
#define fp6_sub 	PREFIX(fp6_sub)
#define fp6_neg 	PREFIX(fp6_neg)
#define fp6_dbl 	PREFIX(fp6_dbl)
#define fp6_mul_unr 	PREFIX(fp6_mul_unr)
#define fp6_mul_basic 	PREFIX(fp6_mul_basic)
#define fp6_mul_lazyr 	PREFIX(fp6_mul_lazyr)
#define fp6_mul_art 	PREFIX(fp6_mul_art)
#define fp6_mul_dxs 	PREFIX(fp6_mul_dxs)
#define fp6_sqr_unr 	PREFIX(fp6_sqr_unr)
#define fp6_sqr_basic 	PREFIX(fp6_sqr_basic)
#define fp6_sqr_lazyr 	PREFIX(fp6_sqr_lazyr)
#define fp6_inv 	PREFIX(fp6_inv)
#define fp6_exp 	PREFIX(fp6_exp)
#define fp6_frb 	PREFIX(fp6_frb)

#undef fp8_copy
#undef fp8_zero
#undef fp8_is_zero
#undef fp8_rand
#undef fp8_print
#undef fp8_size_bin
#undef fp8_read_bin
#undef fp8_write_bin
#undef fp8_cmp
#undef fp8_cmp_dig
#undef fp8_set_dig
#undef fp8_add
#undef fp8_sub
#undef fp8_neg
#undef fp8_dbl
#undef fp8_mul_unr
#undef fp8_mul_basic
#undef fp8_mul_lazyr
#undef fp8_mul_art
#undef fp8_mul_dxs
#undef fp8_sqr_unr
#undef fp8_sqr_basic
#undef fp8_sqr_lazyr
#undef fp8_sqr_cyc
#undef fp8_inv
#undef fp8_inv_cyc
#undef fp8_inv_sim
#undef fp8_test_cyc
#undef fp8_conv_cyc
#undef fp8_exp
#undef fp8_exp_cyc
#undef fp8_frb

#define fp8_copy 	PREFIX(fp8_copy)
#define fp8_zero 	PREFIX(fp8_zero)
#define fp8_is_zero 	PREFIX(fp8_is_zero)
#define fp8_rand 	PREFIX(fp8_rand)
#define fp8_print 	PREFIX(fp8_print)
#define fp8_size_bin 	PREFIX(fp8_size_bin)
#define fp8_read_bin 	PREFIX(fp8_read_bin)
#define fp8_write_bin 	PREFIX(fp8_write_bin)
#define fp8_cmp 	PREFIX(fp8_cmp)
#define fp8_cmp_dig 	PREFIX(fp8_cmp_dig)
#define fp8_set_dig 	PREFIX(fp8_set_dig)
#define fp8_add 	PREFIX(fp8_add)
#define fp8_sub 	PREFIX(fp8_sub)
#define fp8_neg 	PREFIX(fp8_neg)
#define fp8_dbl 	PREFIX(fp8_dbl)
#define fp8_mul_unr 	PREFIX(fp8_mul_unr)
#define fp8_mul_basic 	PREFIX(fp8_mul_basic)
#define fp8_mul_lazyr 	PREFIX(fp8_mul_lazyr)
#define fp8_mul_art 	PREFIX(fp8_mul_art)
#define fp8_mul_dxs 	PREFIX(fp8_mul_dxs)
#define fp8_sqr_unr 	PREFIX(fp8_sqr_unr)
#define fp8_sqr_basic 	PREFIX(fp8_sqr_basic)
#define fp8_sqr_lazyr 	PREFIX(fp8_sqr_lazyr)
#define fp8_sqr_cyc 	PREFIX(fp8_sqr_cyc)
#define fp8_inv 	PREFIX(fp8_inv)
#define fp8_inv_cyc 	PREFIX(fp8_inv_cyc)
#define fp8_inv_sim 	PREFIX(fp8_inv_sim)
#define fp8_test_cyc 	PREFIX(fp8_test_cyc)
#define fp8_conv_cyc 	PREFIX(fp8_conv_cyc)
#define fp8_exp 	PREFIX(fp8_exp)
#define fp8_exp_cyc 	PREFIX(fp8_exp_cyc)
#define fp8_frb 	PREFIX(fp8_frb)

#undef fp9_copy
#undef fp9_zero
#undef fp9_is_zero
#undef fp9_rand
#undef fp9_print
#undef fp9_size_bin
#undef fp9_read_bin
#undef fp9_write_bin
#undef fp9_cmp
#undef fp9_cmp_dig
#undef fp9_set_dig
#undef fp9_add
#undef fp9_sub
#undef fp9_neg
#undef fp9_dbl
#undef fp9_mul_unr
#undef fp9_mul_basic
#undef fp9_mul_lazyr
#undef fp9_mul_art
#undef fp9_mul_dxs
#undef fp9_sqr_unr
#undef fp9_sqr_basic
#undef fp9_sqr_lazyr
#undef fp9_inv
#undef fp9_inv_sim
#undef fp9_exp
#undef fp9_frb

#define fp9_copy 	PREFIX(fp9_copy)
#define fp9_zero 	PREFIX(fp9_zero)
#define fp9_is_zero 	PREFIX(fp9_is_zero)
#define fp9_rand 	PREFIX(fp9_rand)
#define fp9_print 	PREFIX(fp9_print)
#define fp9_size_bin 	PREFIX(fp9_size_bin)
#define fp9_read_bin 	PREFIX(fp9_read_bin)
#define fp9_write_bin 	PREFIX(fp9_write_bin)
#define fp9_cmp 	PREFIX(fp9_cmp)
#define fp9_cmp_dig 	PREFIX(fp9_cmp_dig)
#define fp9_set_dig 	PREFIX(fp9_set_dig)
#define fp9_add 	PREFIX(fp9_add)
#define fp9_sub 	PREFIX(fp9_sub)
#define fp9_neg 	PREFIX(fp9_neg)
#define fp9_dbl 	PREFIX(fp9_dbl)
#define fp9_mul_unr 	PREFIX(fp9_mul_unr)
#define fp9_mul_basic 	PREFIX(fp9_mul_basic)
#define fp9_mul_lazyr 	PREFIX(fp9_mul_lazyr)
#define fp9_mul_art 	PREFIX(fp9_mul_art)
#define fp9_mul_dxs 	PREFIX(fp9_mul_dxs)
#define fp9_sqr_unr 	PREFIX(fp9_sqr_unr)
#define fp9_sqr_basic 	PREFIX(fp9_sqr_basic)
#define fp9_sqr_lazyr 	PREFIX(fp9_sqr_lazyr)
#define fp9_inv 	PREFIX(fp9_inv)
#define fp9_inv_sim 	PREFIX(fp9_inv_sim)
#define fp9_exp 	PREFIX(fp9_exp)
#define fp9_frb 	PREFIX(fp9_frb)

#undef fp12_copy
#undef fp12_zero
#undef fp12_is_zero
#undef fp12_rand
#undef fp12_print
#undef fp12_size_bin
#undef fp12_read_bin
#undef fp12_write_bin
#undef fp12_cmp
#undef fp12_cmp_dig
#undef fp12_set_dig
#undef fp12_add
#undef fp12_sub
#undef fp12_neg
#undef fp12_dbl
#undef fp12_mul_unr
#undef fp12_mul_basic
#undef fp12_mul_lazyr
#undef fp12_mul_art
#undef fp12_mul_dxs_basic
#undef fp12_mul_dxs_lazyr
#undef fp12_sqr_unr
#undef fp12_sqr_basic
#undef fp12_sqr_lazyr
#undef fp12_sqr_cyc_basic
#undef fp12_sqr_cyc_lazyr
#undef fp12_sqr_pck_basic
#undef fp12_sqr_pck_lazyr
#undef fp12_test_cyc
#undef fp12_conv_cyc
#undef fp12_back_cyc
#undef fp12_back_cyc_sim
#undef fp12_inv
#undef fp12_inv_cyc
#undef fp12_frb
#undef fp12_exp
#undef fp12_exp_dig
#undef fp12_exp_cyc
#undef fp12_exp_cyc_sps
#undef fp12_pck
#undef fp12_upk

#define fp12_copy 	PREFIX(fp12_copy)
#define fp12_zero 	PREFIX(fp12_zero)
#define fp12_is_zero 	PREFIX(fp12_is_zero)
#define fp12_rand 	PREFIX(fp12_rand)
#define fp12_print 	PREFIX(fp12_print)
#define fp12_size_bin 	PREFIX(fp12_size_bin)
#define fp12_read_bin 	PREFIX(fp12_read_bin)
#define fp12_write_bin 	PREFIX(fp12_write_bin)
#define fp12_cmp 	PREFIX(fp12_cmp)
#define fp12_cmp_dig 	PREFIX(fp12_cmp_dig)
#define fp12_set_dig 	PREFIX(fp12_set_dig)
#define fp12_add 	PREFIX(fp12_add)
#define fp12_sub 	PREFIX(fp12_sub)
#define fp12_neg 	PREFIX(fp12_neg)
#define fp12_dbl 	PREFIX(fp12_dbl)
#define fp12_mul_unr 	PREFIX(fp12_mul_unr)
#define fp12_mul_basic 	PREFIX(fp12_mul_basic)
#define fp12_mul_lazyr 	PREFIX(fp12_mul_lazyr)
#define fp12_mul_art 	PREFIX(fp12_mul_art)
#define fp12_mul_dxs_basic 	PREFIX(fp12_mul_dxs_basic)
#define fp12_mul_dxs_lazyr 	PREFIX(fp12_mul_dxs_lazyr)
#define fp12_sqr_unr 	PREFIX(fp12_sqr_unr)
#define fp12_sqr_basic 	PREFIX(fp12_sqr_basic)
#define fp12_sqr_lazyr 	PREFIX(fp12_sqr_lazyr)
#define fp12_sqr_cyc_basic 	PREFIX(fp12_sqr_cyc_basic)
#define fp12_sqr_cyc_lazyr 	PREFIX(fp12_sqr_cyc_lazyr)
#define fp12_sqr_pck_basic 	PREFIX(fp12_sqr_pck_basic)
#define fp12_sqr_pck_lazyr 	PREFIX(fp12_sqr_pck_lazyr)
#define fp12_test_cyc 	PREFIX(fp12_test_cyc)
#define fp12_conv_cyc 	PREFIX(fp12_conv_cyc)
#define fp12_back_cyc 	PREFIX(fp12_back_cyc)
#define fp12_back_cyc_sim 	PREFIX(fp12_back_cyc_sim)
#define fp12_inv 	PREFIX(fp12_inv)
#define fp12_inv_cyc 	PREFIX(fp12_inv_cyc)
#define fp12_frb 	PREFIX(fp12_frb)
#define fp12_exp 	PREFIX(fp12_exp)
#define fp12_exp_dig 	PREFIX(fp12_exp_dig)
#define fp12_exp_cyc 	PREFIX(fp12_exp_cyc)
#define fp12_exp_cyc_sps 	PREFIX(fp12_exp_cyc_sps)
#define fp12_pck 	PREFIX(fp12_pck)
#define fp12_upk 	PREFIX(fp12_upk)

#undef fp18_copy
#undef fp18_zero
#undef fp18_is_zero
#undef fp18_rand
#undef fp18_print
#undef fp18_size_bin
#undef fp18_read_bin
#undef fp18_write_bin
#undef fp18_cmp
#undef fp18_cmp_dig
#undef fp18_set_dig
#undef fp18_add
#undef fp18_sub
#undef fp18_neg
#undef fp18_dbl
#undef fp18_mul_unr
#undef fp18_mul_basic
#undef fp18_mul_lazyr
#undef fp18_mul_art
#undef fp18_mul_dxs_basic
#undef fp18_mul_dxs_lazyr
#undef fp18_sqr_unr
#undef fp18_sqr_basic
#undef fp18_sqr_lazyr
#undef fp18_inv
#undef fp18_inv_cyc
#undef fp18_conv_cyc
#undef fp18_frb
#undef fp18_exp

#define fp18_copy 	PREFIX(fp18_copy)
#define fp18_zero 	PREFIX(fp18_zero)
#define fp18_is_zero 	PREFIX(fp18_is_zero)
#define fp18_rand 	PREFIX(fp18_rand)
#define fp18_print 	PREFIX(fp18_print)
#define fp18_size_bin 	PREFIX(fp18_size_bin)
#define fp18_read_bin 	PREFIX(fp18_read_bin)
#define fp18_write_bin 	PREFIX(fp18_write_bin)
#define fp18_cmp 	PREFIX(fp18_cmp)
#define fp18_cmp_dig 	PREFIX(fp18_cmp_dig)
#define fp18_set_dig 	PREFIX(fp18_set_dig)
#define fp18_add 	PREFIX(fp18_add)
#define fp18_sub 	PREFIX(fp18_sub)
#define fp18_neg 	PREFIX(fp18_neg)
#define fp18_dbl 	PREFIX(fp18_dbl)
#define fp18_mul_unr 	PREFIX(fp18_mul_unr)
#define fp18_mul_basic 	PREFIX(fp18_mul_basic)
#define fp18_mul_lazyr 	PREFIX(fp18_mul_lazyr)
#define fp18_mul_art 	PREFIX(fp18_mul_art)
#define fp18_mul_dxs_basic 	PREFIX(fp18_mul_dxs_basic)
#define fp18_mul_dxs_lazyr 	PREFIX(fp18_mul_dxs_lazyr)
#define fp18_sqr_unr 	PREFIX(fp18_sqr_unr)
#define fp18_sqr_basic 	PREFIX(fp18_sqr_basic)
#define fp18_sqr_lazyr 	PREFIX(fp18_sqr_lazyr)
#define fp18_inv 	PREFIX(fp18_inv)
#define fp18_inv_cyc 	PREFIX(fp18_inv_cyc)
#define fp18_conv_cyc 	PREFIX(fp18_conv_cyc)
#define fp18_frb 	PREFIX(fp18_frb)
#define fp18_exp 	PREFIX(fp18_exp)

#undef fp24_copy
#undef fp24_zero
#undef fp24_is_zero
#undef fp24_rand
#undef fp24_print
#undef fp24_size_bin
#undef fp24_read_bin
#undef fp24_write_bin
#undef fp24_cmp
#undef fp24_cmp_dig
#undef fp24_set_dig
#undef fp24_add
#undef fp24_sub
#undef fp24_neg
#undef fp24_dbl
#undef fp24_mul_unr
#undef fp24_mul_basic
#undef fp24_mul_lazyr
#undef fp24_mul_art
#undef fp24_mul_dxs
#undef fp24_sqr_unr
#undef fp24_sqr_basic
#undef fp24_sqr_lazyr
#undef fp24_inv
#undef fp24_frb
#undef fp24_exp

#define fp24_copy 	PREFIX(fp24_copy)
#define fp24_zero 	PREFIX(fp24_zero)
#define fp24_is_zero 	PREFIX(fp24_is_zero)
#define fp24_rand 	PREFIX(fp24_rand)
#define fp24_print 	PREFIX(fp24_print)
#define fp24_size_bin 	PREFIX(fp24_size_bin)
#define fp24_read_bin 	PREFIX(fp24_read_bin)
#define fp24_write_bin 	PREFIX(fp24_write_bin)
#define fp24_cmp 	PREFIX(fp24_cmp)
#define fp24_cmp_dig 	PREFIX(fp24_cmp_dig)
#define fp24_set_dig 	PREFIX(fp24_set_dig)
#define fp24_add 	PREFIX(fp24_add)
#define fp24_sub 	PREFIX(fp24_sub)
#define fp24_neg 	PREFIX(fp24_neg)
#define fp24_dbl 	PREFIX(fp24_dbl)
#define fp24_mul_unr 	PREFIX(fp24_mul_unr)
#define fp24_mul_basic 	PREFIX(fp24_mul_basic)
#define fp24_mul_lazyr 	PREFIX(fp24_mul_lazyr)
#define fp24_mul_art 	PREFIX(fp24_mul_art)
#define fp24_mul_dxs 	PREFIX(fp24_mul_dxs)
#define fp24_sqr_unr 	PREFIX(fp24_sqr_unr)
#define fp24_sqr_basic 	PREFIX(fp24_sqr_basic)
#define fp24_sqr_lazyr 	PREFIX(fp24_sqr_lazyr)
#define fp24_inv 	PREFIX(fp24_inv)
#define fp24_frb 	PREFIX(fp24_frb)
#define fp24_exp 	PREFIX(fp24_exp)

#undef fp48_copy
#undef fp48_zero
#undef fp48_is_zero
#undef fp48_rand
#undef fp48_print
#undef fp48_size_bin
#undef fp48_read_bin
#undef fp48_write_bin
#undef fp48_cmp
#undef fp48_cmp_dig
#undef fp48_set_dig
#undef fp48_add
#undef fp48_sub
#undef fp48_neg
#undef fp48_dbl
#undef fp48_mul_unr
#undef fp48_mul_basic
#undef fp48_mul_lazyr
#undef fp48_mul_art
#undef fp48_mul_dxs
#undef fp48_sqr_unr
#undef fp48_sqr_basic
#undef fp48_sqr_lazyr
#undef fp48_sqr_cyc_basic
#undef fp48_sqr_cyc_lazyr
#undef fp48_sqr_pck_basic
#undef fp48_sqr_pck_lazyr
#undef fp48_test_cyc
#undef fp48_conv_cyc
#undef fp48_back_cyc
#undef fp48_back_cyc_sim
#undef fp48_inv
#undef fp48_inv_cyc
#undef fp48_conv_cyc
#undef fp48_frb
#undef fp48_exp
#undef fp48_exp_dig
#undef fp48_exp_cyc
#undef fp48_exp_cyc_sps
#undef fp48_pck
#undef fp48_upk

#define fp48_copy 	PREFIX(fp48_copy)
#define fp48_zero 	PREFIX(fp48_zero)
#define fp48_is_zero 	PREFIX(fp48_is_zero)
#define fp48_rand 	PREFIX(fp48_rand)
#define fp48_print 	PREFIX(fp48_print)
#define fp48_size_bin 	PREFIX(fp48_size_bin)
#define fp48_read_bin 	PREFIX(fp48_read_bin)
#define fp48_write_bin 	PREFIX(fp48_write_bin)
#define fp48_cmp 	PREFIX(fp48_cmp)
#define fp48_cmp_dig 	PREFIX(fp48_cmp_dig)
#define fp48_set_dig 	PREFIX(fp48_set_dig)
#define fp48_add 	PREFIX(fp48_add)
#define fp48_sub 	PREFIX(fp48_sub)
#define fp48_neg 	PREFIX(fp48_neg)
#define fp48_dbl 	PREFIX(fp48_dbl)
#define fp48_mul_unr 	PREFIX(fp48_mul_unr)
#define fp48_mul_basic 	PREFIX(fp48_mul_basic)
#define fp48_mul_lazyr 	PREFIX(fp48_mul_lazyr)
#define fp48_mul_art 	PREFIX(fp48_mul_art)
#define fp48_mul_dxs 	PREFIX(fp48_mul_dxs)
#define fp48_sqr_unr 	PREFIX(fp48_sqr_unr)
#define fp48_sqr_basic 	PREFIX(fp48_sqr_basic)
#define fp48_sqr_lazyr 	PREFIX(fp48_sqr_lazyr)
#define fp48_sqr_cyc_basic 	PREFIX(fp48_sqr_cyc_basic)
#define fp48_sqr_cyc_lazyr 	PREFIX(fp48_sqr_cyc_lazyr)
#define fp48_sqr_pck_basic 	PREFIX(fp48_sqr_pck_basic)
#define fp48_sqr_pck_lazyr 	PREFIX(fp48_sqr_pck_lazyr)
#define fp48_test_cyc 	PREFIX(fp48_test_cyc)
#define fp48_conv_cyc 	PREFIX(fp48_conv_cyc)
#define fp48_back_cyc 	PREFIX(fp48_back_cyc)
#define fp48_back_cyc_sim 	PREFIX(fp48_back_cyc_sim)
#define fp48_inv 	PREFIX(fp48_inv)
#define fp48_inv_cyc 	PREFIX(fp48_inv_cyc)
#define fp48_conv_cyc 	PREFIX(fp48_conv_cyc)
#define fp48_frb 	PREFIX(fp48_frb)
#define fp48_exp 	PREFIX(fp48_exp)
#define fp48_exp_dig 	PREFIX(fp48_exp_dig)
#define fp48_exp_cyc 	PREFIX(fp48_exp_cyc)
#define fp48_exp_cyc_sps 	PREFIX(fp48_exp_cyc_sps)
#define fp48_pck 	PREFIX(fp48_pck)
#define fp48_upk 	PREFIX(fp48_upk)

#undef fp54_copy
#undef fp54_zero
#undef fp54_is_zero
#undef fp54_rand
#undef fp54_print
#undef fp54_size_bin
#undef fp54_read_bin
#undef fp54_write_bin
#undef fp54_cmp
#undef fp54_cmp_dig
#undef fp54_set_dig
#undef fp54_add
#undef fp54_sub
#undef fp54_neg
#undef fp54_dbl
#undef fp54_mul_unr
#undef fp54_mul_basic
#undef fp54_mul_lazyr
#undef fp54_mul_art
#undef fp54_mul_dxs
#undef fp54_sqr_unr
#undef fp54_sqr_basic
#undef fp54_sqr_lazyr
#undef fp54_sqr_cyc_basic
#undef fp54_sqr_cyc_lazyr
#undef fp54_sqr_pck_basic
#undef fp54_sqr_pck_lazyr
#undef fp54_test_cyc
#undef fp54_conv_cyc
#undef fp54_back_cyc
#undef fp54_back_cyc_sim
#undef fp54_inv
#undef fp54_inv_cyc
#undef fp54_conv_cyc
#undef fp54_frb
#undef fp54_exp
#undef fp54_exp_dig
#undef fp54_exp_cyc
#undef fp54_exp_cyc_sps
#undef fp54_pck
#undef fp54_upk

#define fp54_copy 	PREFIX(fp54_copy)
#define fp54_zero 	PREFIX(fp54_zero)
#define fp54_is_zero 	PREFIX(fp54_is_zero)
#define fp54_rand 	PREFIX(fp54_rand)
#define fp54_print 	PREFIX(fp54_print)
#define fp54_size_bin 	PREFIX(fp54_size_bin)
#define fp54_read_bin 	PREFIX(fp54_read_bin)
#define fp54_write_bin 	PREFIX(fp54_write_bin)
#define fp54_cmp 	PREFIX(fp54_cmp)
#define fp54_cmp_dig 	PREFIX(fp54_cmp_dig)
#define fp54_set_dig 	PREFIX(fp54_set_dig)
#define fp54_add 	PREFIX(fp54_add)
#define fp54_sub 	PREFIX(fp54_sub)
#define fp54_neg 	PREFIX(fp54_neg)
#define fp54_dbl 	PREFIX(fp54_dbl)
#define fp54_mul_unr 	PREFIX(fp54_mul_unr)
#define fp54_mul_basic 	PREFIX(fp54_mul_basic)
#define fp54_mul_lazyr 	PREFIX(fp54_mul_lazyr)
#define fp54_mul_art 	PREFIX(fp54_mul_art)
#define fp54_mul_dxs 	PREFIX(fp54_mul_dxs)
#define fp54_sqr_unr 	PREFIX(fp54_sqr_unr)
#define fp54_sqr_basic 	PREFIX(fp54_sqr_basic)
#define fp54_sqr_lazyr 	PREFIX(fp54_sqr_lazyr)
#define fp54_sqr_cyc_basic 	PREFIX(fp54_sqr_cyc_basic)
#define fp54_sqr_cyc_lazyr 	PREFIX(fp54_sqr_cyc_lazyr)
#define fp54_sqr_pck_basic 	PREFIX(fp54_sqr_pck_basic)
#define fp54_sqr_pck_lazyr 	PREFIX(fp54_sqr_pck_lazyr)
#define fp54_test_cyc 	PREFIX(fp54_test_cyc)
#define fp54_conv_cyc 	PREFIX(fp54_conv_cyc)
#define fp54_back_cyc 	PREFIX(fp54_back_cyc)
#define fp54_back_cyc_sim 	PREFIX(fp54_back_cyc_sim)
#define fp54_inv 	PREFIX(fp54_inv)
#define fp54_inv_cyc 	PREFIX(fp54_inv_cyc)
#define fp54_conv_cyc 	PREFIX(fp54_conv_cyc)
#define fp54_frb 	PREFIX(fp54_frb)
#define fp54_exp 	PREFIX(fp54_exp)
#define fp54_exp_dig 	PREFIX(fp54_exp_dig)
#define fp54_exp_cyc 	PREFIX(fp54_exp_cyc)
#define fp54_exp_cyc_sps 	PREFIX(fp54_exp_cyc_sps)
#define fp54_pck 	PREFIX(fp54_pck)
#define fp54_upk 	PREFIX(fp54_upk)

#undef fb2_mul
 #undef fb2_mul_nor
#undef fb2_sqr
#undef fb2_slv
#undef fb2_inv

#define fb2_mul 	PREFIX(fb2_mul)
 #define fb2_mul_nor 	PREFIX(fb2_mul_nor)
#define fb2_sqr 	PREFIX(fb2_sqr)
#define fb2_slv 	PREFIX(fb2_slv)
#define fb2_inv 	PREFIX(fb2_inv)



#undef pp_map_init
#undef pp_map_clean
#undef pp_add_k2_basic
#undef pp_add_k2_projc_basic
#undef pp_add_k2_projc_lazyr
#undef pp_add_k8_basic
#undef pp_add_k8_projc_basic
#undef pp_add_k8_projc_lazyr
#undef pp_add_k12_basic
#undef pp_add_k12_projc_basic
#undef pp_add_k12_projc_lazyr
#undef pp_add_lit_k12
#undef pp_add_k48_basic
#undef pp_add_k48_projc
#undef pp_add_k54_basic
#undef pp_add_k54_projc
#undef pp_dbl_k2_basic
#undef pp_dbl_k2_projc_basic
#undef pp_dbl_k2_projc_lazyr
#undef pp_dbl_k8_basic
#undef pp_dbl_k8_projc_basic
#undef pp_dbl_k8_projc_lazyr
#undef pp_dbl_k12_basic
#undef pp_dbl_k12_projc_basic
#undef pp_dbl_k12_projc_lazyr
#undef pp_dbl_k48_basic
#undef pp_dbl_k48_projc
#undef pp_dbl_k54_basic
#undef pp_dbl_k54_projc
#undef pp_dbl_lit_k12
#undef pp_exp_k2
#undef pp_exp_k8
#undef pp_exp_k12
#undef pp_exp_k48
#undef pp_exp_k54
#undef pp_norm_k2
#undef pp_norm_k8
#undef pp_norm_k12
#undef pp_map_tatep_k2
#undef pp_map_sim_tatep_k2
#undef pp_map_weilp_k2
#undef pp_map_oatep_k8
#undef pp_map_sim_weilp_k2
#undef pp_map_tatep_k12
#undef pp_map_sim_tatep_k12
#undef pp_map_weilp_k12
#undef pp_map_sim_weilp_k12
#undef pp_map_oatep_k12
#undef pp_map_sim_oatep_k12
#undef pp_map_k48
#undef pp_map_k54

#define pp_map_init 	PREFIX(pp_map_init)
#define pp_map_clean 	PREFIX(pp_map_clean)
#define pp_add_k2_basic 	PREFIX(pp_add_k2_basic)
#define pp_add_k2_projc_basic 	PREFIX(pp_add_k2_projc_basic)
#define pp_add_k2_projc_lazyr 	PREFIX(pp_add_k2_projc_lazyr)
#define pp_add_k8_basic 	PREFIX(pp_add_k8_basic)
#define pp_add_k8_projc_basic 	PREFIX(pp_add_k8_projc_basic)
#define pp_add_k8_projc_lazyr 	PREFIX(pp_add_k8_projc_lazyr)
#define pp_add_k12_basic 	PREFIX(pp_add_k12_basic)
#define pp_add_k12_projc_basic 	PREFIX(pp_add_k12_projc_basic)
#define pp_add_k12_projc_lazyr 	PREFIX(pp_add_k12_projc_lazyr)
#define pp_add_lit_k12 	PREFIX(pp_add_lit_k12)
#define pp_add_k48_basic 	PREFIX(pp_add_k48_basic)
#define pp_add_k48_projc 	PREFIX(pp_add_k48_projc)
#define pp_add_k54_basic 	PREFIX(pp_add_k54_basic)
#define pp_add_k54_projc 	PREFIX(pp_add_k54_projc)
#define pp_dbl_k2_basic 	PREFIX(pp_dbl_k2_basic)
#define pp_dbl_k2_projc_basic 	PREFIX(pp_dbl_k2_projc_basic)
#define pp_dbl_k2_projc_lazyr 	PREFIX(pp_dbl_k2_projc_lazyr)
#define pp_dbl_k8_basic 	PREFIX(pp_dbl_k8_basic)
#define pp_dbl_k8_projc_basic 	PREFIX(pp_dbl_k8_projc_basic)
#define pp_dbl_k8_projc_lazyr 	PREFIX(pp_dbl_k8_projc_lazyr)
#define pp_dbl_k12_basic 	PREFIX(pp_dbl_k12_basic)
#define pp_dbl_k12_projc_basic 	PREFIX(pp_dbl_k12_projc_basic)
#define pp_dbl_k12_projc_lazyr 	PREFIX(pp_dbl_k12_projc_lazyr)
#define pp_dbl_k48_basic 	PREFIX(pp_dbl_k48_basic)
#define pp_dbl_k48_projc 	PREFIX(pp_dbl_k48_projc)
#define pp_dbl_k54_basic 	PREFIX(pp_dbl_k54_basic)
#define pp_dbl_k54_projc 	PREFIX(pp_dbl_k54_projc)
#define pp_dbl_lit_k12 	PREFIX(pp_dbl_lit_k12)
#define pp_exp_k2 	PREFIX(pp_exp_k2)
#define pp_exp_k8 	PREFIX(pp_exp_k8)
#define pp_exp_k12 	PREFIX(pp_exp_k12)
#define pp_exp_k48 	PREFIX(pp_exp_k48)
#define pp_exp_k54 	PREFIX(pp_exp_k54)
#define pp_norm_k2 	PREFIX(pp_norm_k2)
#define pp_norm_k8 	PREFIX(pp_norm_k8)
#define pp_norm_k12 	PREFIX(pp_norm_k12)
#define pp_map_tatep_k2 	PREFIX(pp_map_tatep_k2)
#define pp_map_sim_tatep_k2 	PREFIX(pp_map_sim_tatep_k2)
#define pp_map_weilp_k2 	PREFIX(pp_map_weilp_k2)
#define pp_map_oatep_k8 	PREFIX(pp_map_oatep_k8)
#define pp_map_sim_weilp_k2 	PREFIX(pp_map_sim_weilp_k2)
#define pp_map_tatep_k12 	PREFIX(pp_map_tatep_k12)
#define pp_map_sim_tatep_k12 	PREFIX(pp_map_sim_tatep_k12)
#define pp_map_weilp_k12 	PREFIX(pp_map_weilp_k12)
#define pp_map_sim_weilp_k12 	PREFIX(pp_map_sim_weilp_k12)
#define pp_map_oatep_k12 	PREFIX(pp_map_oatep_k12)
#define pp_map_sim_oatep_k12 	PREFIX(pp_map_sim_oatep_k12)
#define pp_map_k48 	PREFIX(pp_map_k48)
#define pp_map_k54 	PREFIX(pp_map_k54)

#undef rsa_t
#undef rabin_t
#undef bdpe_t
#undef sokaka_t
#define rsa_t		PREFIX(rsa_t)
#define rabin_t	PREFIX(rabin_t)
#define bdpe_t	PREFIX(bdpe_t)
#define sokaka_t	PREFIX(sokaka_t)

#undef cp_rsa_gen_basic
#undef cp_rsa_gen_quick
#undef cp_rsa_enc
#undef cp_rsa_dec_basic
#undef cp_rsa_dec_quick
#undef cp_rsa_sig_basic
#undef cp_rsa_sig_quick
#undef cp_rsa_ver
#undef cp_rabin_gen
#undef cp_rabin_enc
#undef cp_rabin_dec
#undef cp_bdpe_gen
#undef cp_bdpe_enc
#undef cp_bdpe_dec
#undef cp_phpe_gen
#undef cp_phpe_enc
#undef cp_phpe_dec
#undef cp_ecdh_gen
#undef cp_ecdh_key
#undef cp_ecmqv_gen
#undef cp_ecmqv_key
#undef cp_ecies_gen
#undef cp_ecies_enc
#undef cp_ecies_dec
#undef cp_ecdsa_gen
#undef cp_ecdsa_sig
#undef cp_ecdsa_ver
#undef cp_ecss_gen
#undef cp_ecss_sig
#undef cp_ecss_ver
#undef cp_sokaka_gen
#undef cp_sokaka_gen_prv
#undef cp_sokaka_key
#undef cp_bgn_gen
#undef cp_bgn_enc1
#undef cp_bgn_dec1
#undef cp_bgn_enc2
#undef cp_bgn_dec2
#undef cp_bgn_add
#undef cp_bgn_mul
#undef cp_bgn_dec
#undef cp_ibe_gen
#undef cp_ibe_gen_prv
#undef cp_ibe_enc
#undef cp_ibe_dec
#undef cp_bls_gen
#undef cp_bls_sig
#undef cp_bls_ver
#undef cp_bbs_gen
#undef cp_bbs_sig
#undef cp_bbs_ver
#undef cp_cls_gen
#undef cp_cls_sig
#undef cp_cls_ver
#undef cp_cli_gen
#undef cp_cli_sig
#undef cp_cli_ver
#undef cp_clb_gen
#undef cp_clb_sig
#undef cp_clb_ver
#undef cp_pss_gen
#undef cp_pss_sig
#undef cp_pss_ver
#undef cp_psb_gen
#undef cp_psb_sig
#undef cp_psb_ver
#undef cp_zss_gen
#undef cp_zss_sig
#undef cp_zss_ver
#undef cp_vbnn_gen
#undef cp_vbnn_gen_prv
#undef cp_vbnn_sig
#undef cp_vbnn_ver
#undef cp_cmlhs_init
#undef cp_cmlhs_gen
#undef cp_cmlhs_sig
#undef cp_cmlhs_fun
#undef cp_cmlhs_evl
#undef cp_cmlhs_ver
#undef cp_mklhs_gen
#undef cp_mklhs_sig
#undef cp_mklhs_fun
#undef cp_mklhs_evl
#undef cp_mklhs_ver
#undef cp_mklhs_off
#undef cp_mklhs_onv

#define cp_rsa_gen_basic 	PREFIX(cp_rsa_gen_basic)
#define cp_rsa_gen_quick 	PREFIX(cp_rsa_gen_quick)
#define cp_rsa_enc 	PREFIX(cp_rsa_enc)
#define cp_rsa_dec_basic 	PREFIX(cp_rsa_dec_basic)
#define cp_rsa_dec_quick 	PREFIX(cp_rsa_dec_quick)
#define cp_rsa_sig_basic 	PREFIX(cp_rsa_sig_basic)
#define cp_rsa_sig_quick 	PREFIX(cp_rsa_sig_quick)
#define cp_rsa_ver 	PREFIX(cp_rsa_ver)
#define cp_rabin_gen 	PREFIX(cp_rabin_gen)
#define cp_rabin_enc 	PREFIX(cp_rabin_enc)
#define cp_rabin_dec 	PREFIX(cp_rabin_dec)
#define cp_bdpe_gen 	PREFIX(cp_bdpe_gen)
#define cp_bdpe_enc 	PREFIX(cp_bdpe_enc)
#define cp_bdpe_dec 	PREFIX(cp_bdpe_dec)
#define cp_phpe_gen 	PREFIX(cp_phpe_gen)
#define cp_phpe_enc 	PREFIX(cp_phpe_enc)
#define cp_phpe_dec 	PREFIX(cp_phpe_dec)
#define cp_ecdh_gen 	PREFIX(cp_ecdh_gen)
#define cp_ecdh_key 	PREFIX(cp_ecdh_key)
#define cp_ecmqv_gen 	PREFIX(cp_ecmqv_gen)
#define cp_ecmqv_key 	PREFIX(cp_ecmqv_key)
#define cp_ecies_gen 	PREFIX(cp_ecies_gen)
#define cp_ecies_enc 	PREFIX(cp_ecies_enc)
#define cp_ecies_dec 	PREFIX(cp_ecies_dec)
#define cp_ecdsa_gen 	PREFIX(cp_ecdsa_gen)
#define cp_ecdsa_sig 	PREFIX(cp_ecdsa_sig)
#define cp_ecdsa_ver 	PREFIX(cp_ecdsa_ver)
#define cp_ecss_gen 	PREFIX(cp_ecss_gen)
#define cp_ecss_sig 	PREFIX(cp_ecss_sig)
#define cp_ecss_ver 	PREFIX(cp_ecss_ver)
#define cp_sokaka_gen 	PREFIX(cp_sokaka_gen)
#define cp_sokaka_gen_prv 	PREFIX(cp_sokaka_gen_prv)
#define cp_sokaka_key 	PREFIX(cp_sokaka_key)
#define cp_bgn_gen 	PREFIX(cp_bgn_gen)
#define cp_bgn_enc1 	PREFIX(cp_bgn_enc1)
#define cp_bgn_dec1 	PREFIX(cp_bgn_dec1)
#define cp_bgn_enc2 	PREFIX(cp_bgn_enc2)
#define cp_bgn_dec2 	PREFIX(cp_bgn_dec2)
#define cp_bgn_add 	PREFIX(cp_bgn_add)
#define cp_bgn_mul 	PREFIX(cp_bgn_mul)
#define cp_bgn_dec 	PREFIX(cp_bgn_dec)
#define cp_ibe_gen 	PREFIX(cp_ibe_gen)
#define cp_ibe_gen_prv 	PREFIX(cp_ibe_gen_prv)
#define cp_ibe_enc 	PREFIX(cp_ibe_enc)
#define cp_ibe_dec 	PREFIX(cp_ibe_dec)
#define cp_bls_gen 	PREFIX(cp_bls_gen)
#define cp_bls_sig 	PREFIX(cp_bls_sig)
#define cp_bls_ver 	PREFIX(cp_bls_ver)
#define cp_bbs_gen 	PREFIX(cp_bbs_gen)
#define cp_bbs_sig 	PREFIX(cp_bbs_sig)
#define cp_bbs_ver 	PREFIX(cp_bbs_ver)
#define cp_cls_gen 	PREFIX(cp_cls_gen)
#define cp_cls_sig 	PREFIX(cp_cls_sig)
#define cp_cls_ver 	PREFIX(cp_cls_ver)
#define cp_cli_gen 	PREFIX(cp_cli_gen)
#define cp_cli_sig 	PREFIX(cp_cli_sig)
#define cp_cli_ver 	PREFIX(cp_cli_ver)
#define cp_clb_gen 	PREFIX(cp_clb_gen)
#define cp_clb_sig 	PREFIX(cp_clb_sig)
#define cp_clb_ver 	PREFIX(cp_clb_ver)
#define cp_pss_gen 	PREFIX(cp_pss_gen)
#define cp_pss_sig 	PREFIX(cp_pss_sig)
#define cp_pss_ver 	PREFIX(cp_pss_ver)
#define cp_psb_gen 	PREFIX(cp_psb_gen)
#define cp_psb_sig 	PREFIX(cp_psb_sig)
#define cp_psb_ver 	PREFIX(cp_psb_ver)
#define cp_zss_gen 	PREFIX(cp_zss_gen)
#define cp_zss_sig 	PREFIX(cp_zss_sig)
#define cp_zss_ver 	PREFIX(cp_zss_ver)
#define cp_vbnn_gen 	PREFIX(cp_vbnn_gen)
#define cp_vbnn_gen_prv 	PREFIX(cp_vbnn_gen_prv)
#define cp_vbnn_sig 	PREFIX(cp_vbnn_sig)
#define cp_vbnn_ver 	PREFIX(cp_vbnn_ver)
#define cp_cmlhs_init 	PREFIX(cp_cmlhs_init)
#define cp_cmlhs_gen 	PREFIX(cp_cmlhs_gen)
#define cp_cmlhs_sig 	PREFIX(cp_cmlhs_sig)
#define cp_cmlhs_fun 	PREFIX(cp_cmlhs_fun)
#define cp_cmlhs_evl 	PREFIX(cp_cmlhs_evl)
#define cp_cmlhs_ver 	PREFIX(cp_cmlhs_ver)
#define cp_mklhs_gen 	PREFIX(cp_mklhs_gen)
#define cp_mklhs_sig 	PREFIX(cp_mklhs_sig)
#define cp_mklhs_fun 	PREFIX(cp_mklhs_fun)
#define cp_mklhs_evl 	PREFIX(cp_mklhs_evl)
#define cp_mklhs_ver 	PREFIX(cp_mklhs_ver)
#define cp_mklhs_off 	PREFIX(cp_mklhs_off)
#define cp_mklhs_onv 	PREFIX(cp_mklhs_onv)

#undef md_map_sh224
#undef md_map_sh256
#undef md_map_sh384
#undef md_map_sh512
#undef md_map_b2s160
#undef md_map_b2s256
#undef md_kdf
#undef md_mgf
#undef md_hmac
#undef md_xmd_sh224
#undef md_xmd_sh256
#undef md_xmd_sh384
#undef md_xmd_sh512

#define md_map_sh224 	PREFIX(md_map_sh224)
#define md_map_sh256 	PREFIX(md_map_sh256)
#define md_map_sh384 	PREFIX(md_map_sh384)
#define md_map_sh512 	PREFIX(md_map_sh512)
#define md_map_b2s160 	PREFIX(md_map_b2s160)
#define md_map_b2s256 	PREFIX(md_map_b2s256)
#define md_kdf 	PREFIX(md_kdf)
#define md_mgf 	PREFIX(md_mgf)
#define md_hmac 	PREFIX(md_hmac)
#define md_xmd_sh224 	PREFIX(md_xmd_sh224)
#define md_xmd_sh256 	PREFIX(md_xmd_sh256)
#define md_xmd_sh384 	PREFIX(md_xmd_sh384)
#define md_xmd_sh512 	PREFIX(md_xmd_sh512)

#endif /* LABEL */

#endif /* !RLC_LABEL_H */
