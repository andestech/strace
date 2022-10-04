/*
 * Copyright (c) 2016-2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#if defined(RISCV64)
# include "../64/syscallent.h"
#elif defined(RISCV32)
# include "../32/syscallent.h"
#else
# error "Unsupported RISC-V xlen"
#endif

/* #define __NR_riscv_flush_icache (__NR_arch_specific_syscall + 15) */
[259] = { 3,	TM,		SEN(riscv_flush_icache),	"riscv_flush_icache"	},
