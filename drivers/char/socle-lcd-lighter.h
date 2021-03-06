/* linux/drivers/char/socle-lcd-lighter.h
 *
 * Copyright (c) 2007 Socle-tech Corp
 *		      http://www.socle-tech.com.tw/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __SOCLE_LCD_LIGHTER_H
#define __SOCLE_LCD_LIGHTER_H


#define SOCLE_LCD_MAJOR		0		// 0: dynamic major number
#define SOCLE_LCD_MINOR		0

#define USE_PWM_NUM			0		// use pwm number
#define DEFAULT_PRE_SCL		0x0		// default Prescale Factor
//#define DEFAULT_HRC				0x10		// default HRC
//#define DEFAULT_LRC				0x15	// default LRC

//For 7'' panel 20KHz input
//#define DEFAULT_HRC			0x500		// default HRC
//#define DEFAULT_LRC			0x670	// default LRC

//For 7'' panel 2KHz input
#define DEFAULT_HRC			0x5000	// default HRC
#define DEFAULT_LRC			0x6700	// default LRC

// ioctl commands
#define SOCLE_LCD_IOC_MAGIC				'L'

#define SOCLE_LCD_LT_RST			_IO(SOCLE_LCD_IOC_MAGIC, 0)
#define SOCLE_LCD_LT_DEC			_IO(SOCLE_LCD_IOC_MAGIC, 1)
#define SOCLE_LCD_LT_INC			_IO(SOCLE_LCD_IOC_MAGIC, 2)


#endif	//__SOCLE_LCD_LIGHTER_H

