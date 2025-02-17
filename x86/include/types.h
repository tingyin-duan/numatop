/*
 * Copyright (c) 2013, Intel Corporation
 * Copyright (c) 2017, IBM Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of Intel Corporation nor the names of its contributors
 *     may be used to endorse or promote products derived from this software
 *     without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _NUMATOP_X86_TYPES_H
#define _NUMATOP_X86_TYPES_H

#include "../../common/include/types.h"

#define CORP "Intel"

typedef enum {
	CPU_UNSUP = 0,
	CPU_WSM_EX,
	CPU_SNB_EP,
	CPU_NHM_EX,
	CPU_NHM_EP,
	CPU_WSM_EP,
	CPU_IVB_EX,
	CPU_HSX,
	CPU_BDX,
	CPU_SKX,
	CPU_ICX,
	CPU_SPR,
	CPU_ZEN,
	CPU_ZEN3,
	CPU_ZEN4
} cpu_type_t;

#define	CPU_TYPE_NUM	15

typedef enum {
	PERF_COUNT_INVALID = -1,
	PERF_COUNT_CORE_CLK = 0,
	PERF_COUNT_RMA,
	PERF_COUNT_CLK,
	PERF_COUNT_IR,
	PERF_COUNT_LMA
} perf_count_id_t;

#define PERF_COUNT_NUM		5

#endif /* _NUMATOP_X86_TYPES_H */
