##
##
##
## SPDX-License-Identifier: GPL-2.0-only

ramstage-$(CONFIG_ELOG) += elog.c
ramstage-$(CONFIG_HAVE_ACPI_TABLES) += gnvs.c
ramstage-$(CONFIG_HAVE_ACPI_TABLES) += acpi.c
ramstage-$(CONFIG_CHROMEOS_RAMOOPS) += ramoops.c
ramstage-y += vpd_mac.c vpd_serialno.c vpd_calibration.c
ramstage-$(CONFIG_CHROMEOS_DISABLE_PLATFORM_HIERARCHY_ON_RESUME) += tpm2.c
ramstage-$(CONFIG_HAVE_REGULATORY_DOMAIN) += wrdd.c
ramstage-$(CONFIG_USE_SAR) += sar.c
ramstage-$(CONFIG_CHROMEOS_DSM_CALIB) += dsm_calib.c
ramstage-$(CONFIG_TPM_CR50) += cr50_enable_update.c

bootblock-y += watchdog.c
verstage-y += watchdog.c
ramstage-y += watchdog.c
