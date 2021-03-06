/* $NoKeywords:$ */
/**
 * @file
 *
 * mfCrat.h
 *
 * Feature CRAT table support
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project: AGESA
 * @e sub-project: (Mem)
 * @e \$Revision: 64574 $ @e \$Date: 2012-01-25 01:01:51 -0600 (Wed, 25 Jan 2012) $
 *
 **/
/*****************************************************************************
  *
 * Copyright (c) 2008 - 2012, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  * ***************************************************************************
  *
 */


#ifndef _MFCRAT_H_
#define _MFCRAT_H_

/*----------------------------------------------------------------------------
 *   Mixed (DEFINITIONS AND MACROS / TYPEDEFS, STRUCTURES, ENUMS)
 *
 *----------------------------------------------------------------------------
 */

/*-----------------------------------------------------------------------------
 *                         DEFINITIONS AND MACROS
 *
 *-----------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------
 *                         TYPEDEFS, STRUCTURES, ENUMS
 *
 *----------------------------------------------------------------------------
 */
/// CRAT Memory Affinity Info Header
typedef struct {
  UINT8                 NumOfMemAffinityInfoEntries;  ///< Integer that represents the proximity domain to
  UINT32                MemoryWidth;                  ///< Specifies the number of parallel bits of the memory interface
} CRAT_MEMORY_AFFINITY_INFO_HEADER;

/// CRAT Memory Affinity Info Entry
typedef struct {
  UINT8                 Domain;                 ///< Integer that represents the proximity domain to
                                                ///< which the memory belongs
  UINT32                BaseAddressLow;         ///< Low 32Bits of the Base Address of the memory range
  UINT32                BaseAddressHigh;        ///< High 32Bits of the Base Address of the memory range
  UINT32                LengthLow;              ///< Low 32Bits of the length of the memory range
  UINT32                LengthHigh;             ///< High 32Bits of the length of the memory range
} CRAT_MEMORY_AFFINITY_INFO_ENTRY;

/*----------------------------------------------------------------------------
 *                           FUNCTIONS PROTOTYPE
 *
 *----------------------------------------------------------------------------
 */

#endif  /* _MFCRAT_H_ */
