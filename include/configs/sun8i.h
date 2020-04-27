/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2014 Chen-Yu Tsai <wens@csie.org>
 *
 * Configuration settings for the Allwinner A23 (sun8i) CPU
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/*
 * A23 specific configuration
 */

#define CONFIG_BOOTCOMMAND	"sf probe 0; " \
				"sf read 0x43000000 0x90000 0x10000; " \
				"sf read 0x42000000 0xa0000 0x393ec5; " \
				"bootm 0x42000000 - 0x43000000 "

#define CONFIG_BOOTARGS	"console=ttyS0,115200 earlyprintk rootfstype=squashfs " \
				"mtdparts=spi0.0:512k(uboot),64k(script),64k(dtb),-(firmware) "

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

#endif /* __CONFIG_H */
