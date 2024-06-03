/** @file
  MSR Definitions.

  Provides defines for Machine Specific Registers(MSR) indexes. Data structures
  are provided for MSRs that contain one or more bit fields.  If the MSR value
  returned is a single 32-bit or 64-bit value, then a data structure is not
  provided for that MSR.

  Copyright (c) 2017 - 2024, Advanced Micro Devices. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  @par Specification Reference:
  AMD64 Architecture Programming Manual volume 2, March 2024

**/

#ifndef __AMD_MSR_H__
#define __AMD_MSR_H__

#include <Register/Intel/ArchitecturalMsr.h>
#include <Register/Amd/SevSnpMsr.h>
#include <Register/Amd/SvsmMsr.h>

#define MSR_CPUID_NAME_STRING0      0xC0010030ul    // First CPUID namestring register
#define MSR_CPUID_NAME_STRING1      0xC0010031ul
#define MSR_CPUID_NAME_STRING2      0XC0010032ul
#define MSR_CPUID_NAME_STRING3      0xC0010033ul
#define MSR_CPUID_NAME_STRING4      0xC0010034ul
#define MSR_CPUID_NAME_STRING5      0xC0010035ul    // Last CPUID namestring register

#endif
