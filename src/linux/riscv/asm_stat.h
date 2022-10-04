/*
 * Copyright (c) 2020 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef STRACE_RISCV_ASM_STAT_H
# define STRACE_RISCV_ASM_STAT_H

# include "linux/generic/asm_stat.h"

# if defined(RISCV32)
#  undef dev_t
#  undef ino_t
#  undef off64_t
#  undef off_t
#  undef time_t

#  define dev_t		__kernel_loff_t
#  define ino_t		__kernel_loff_t
#  define off64_t	__kernel_off64_t
#  define off_t		__kernel_off64_t
#  define time_t	__kernel_time64_t
# endif /* defined(RISCV32) */
#endif /* !STRACE_RISCV_ASM_STAT_H */
