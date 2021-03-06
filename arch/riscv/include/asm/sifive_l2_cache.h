/* SPDX-License-Identifier: GPL-2.0 */
/*
 * SiFive L2 Cache Controller header file
 *
 */

#ifndef _ASM_RISCV_SIFIVE_L2_CACHE_H
#define _ASM_RISCV_SIFIVE_L2_CACHE_H

extern int register_sifive_l2_error_notifier(struct notifier_block *nb);
extern int unregister_sifive_l2_error_notifier(struct notifier_block *nb);

#define SIFIVE_L2_ERR_TYPE_CE 0
#define SIFIVE_L2_ERR_TYPE_UE 1

#endif /* _ASM_RISCV_SIFIVE_L2_CACHE_H */
