/*
 * Copyright (c) 2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BPMP_ABI_MACH_T234_POWERGATE_T234_H
#define BPMP_ABI_MACH_T234_POWERGATE_T234_H

/**
 * @file
 * @defgroup bpmp_pdomain_ids Power Domain ID's
 * This is a list of power domain IDs provided by the firmware.
 * @note Following partitions are forcefully powered down upon entering SC7 power state.
 *  - TEGRA234_POWER_DOMAIN_PVAA
 *  - TEGRA234_POWER_DOMAIN_PVAB
 *  - TEGRA234_POWER_DOMAIN_DLAA
 *  - TEGRA234_POWER_DOMAIN_DLAB
 *  - TEGRA234_POWER_DOMAIN_CV
 *  - TEGRA234_POWER_DOMAIN_GPU
 * @{
 */
#define TEGRA234_POWER_DOMAIN_OFA	1U
#define TEGRA234_POWER_DOMAIN_AUD	2U
#define TEGRA234_POWER_DOMAIN_DISP	3U
#define TEGRA234_POWER_DOMAIN_NVL	4U
#define TEGRA234_POWER_DOMAIN_PCIEX8A	5U
#define TEGRA234_POWER_DOMAIN_PCIEX4A	6U
#define TEGRA234_POWER_DOMAIN_PCIEX4B0	7U
#define TEGRA234_POWER_DOMAIN_PCIEX4B1	8U
#define TEGRA234_POWER_DOMAIN_PCIEX1A	9U
#define TEGRA234_POWER_DOMAIN_XUSBA	10U
#define TEGRA234_POWER_DOMAIN_XUSBB	11U
#define TEGRA234_POWER_DOMAIN_XUSBC	12U
#define TEGRA234_POWER_DOMAIN_PCIEX4D	13U
#define TEGRA234_POWER_DOMAIN_PCIEX4E	14U
#define TEGRA234_POWER_DOMAIN_PCIEX4F	15U
#define TEGRA234_POWER_DOMAIN_PCIEX8B	16U
#define TEGRA234_POWER_DOMAIN_MGBEA	17U
#define TEGRA234_POWER_DOMAIN_MGBEB	18U
#define TEGRA234_POWER_DOMAIN_MGBEC	19U
#define TEGRA234_POWER_DOMAIN_MGBED	20U
#define TEGRA234_POWER_DOMAIN_UFS	21U

#define TEGRA234_POWER_DOMAIN_ISPA	22U
#define TEGRA234_POWER_DOMAIN_NVDECA	23U
#define TEGRA234_POWER_DOMAIN_NVJPG	24U
#define TEGRA234_POWER_DOMAIN_NVENCA	25U
#define TEGRA234_POWER_DOMAIN_NVENCB	26U
#define TEGRA234_POWER_DOMAIN_NVDECB	27U
#define TEGRA234_POWER_DOMAIN_VE	28U
#define TEGRA234_POWER_DOMAIN_VIC	29U
#define TEGRA234_POWER_DOMAIN_PVAA	30U
#define TEGRA234_POWER_DOMAIN_PVAB	31U
#define TEGRA234_POWER_DOMAIN_DLAA	32U
#define TEGRA234_POWER_DOMAIN_DLAB	33U
#define TEGRA234_POWER_DOMAIN_CV	34U
#define TEGRA234_POWER_DOMAIN_GPU	35U

#define TEGRA234_POWER_DOMAIN_MAX	35U
/** @} */

#endif
