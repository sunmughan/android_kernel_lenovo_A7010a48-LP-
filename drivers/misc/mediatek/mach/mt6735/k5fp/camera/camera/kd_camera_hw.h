#ifndef _KD_CAMERA_HW_H_
#define _KD_CAMERA_HW_H_

#include <mach/mt_gpio.h>

#ifdef MTK_MT6306_SUPPORT
#include <mach/dcl_sim_gpio.h>
#endif

#include <mach/mt_pm_ldo.h>
#include "pmic_drv.h"

//
//Analog
#define CAMERA_POWER_VCAM_A         PMIC_APP_MAIN_CAMERA_POWER_A
//Digital
#define CAMERA_POWER_VCAM_D         PMIC_APP_MAIN_CAMERA_POWER_D
//AF
#define CAMERA_POWER_VCAM_AF        PMIC_APP_MAIN_CAMERA_POWER_AF
//digital io
#define CAMERA_POWER_VCAM_IO        PMIC_APP_MAIN_CAMERA_POWER_IO
//Digital for Sub
#define SUB_CAMERA_POWER_VCAM_D     PMIC_APP_SUB_CAMERA_POWER_D


//FIXME, should defined in DCT tool

//Main sensor
#define CAMERA_CMRST_PIN            (GPIO125 | 0x80000000) 
#define CAMERA_CMRST_PIN_M_GPIO     GPIO_CAMERA_CMRST_PIN_M_GPIO

#define CAMERA_CMPDN_PIN            (GPIO124 | 0x80000000) 
#define CAMERA_CMPDN_PIN_M_GPIO     GPIO_CAMERA_CMPDN_PIN_M_GPIO

//FRONT sensor
#define CAMERA_CMRST1_PIN           (GPIO127 | 0x80000000) 
#define CAMERA_CMRST1_PIN_M_GPIO    GPIO_CAMERA_CMRST1_PIN_M_GPIO

#define CAMERA_CMPDN1_PIN           (GPIO126 | 0x80000000) 
#define CAMERA_CMPDN1_PIN_M_GPIO    GPIO_CAMERA_CMPDN1_PIN_M_GPIO

#define CAMERA_MCLK0				(GPIO45 | 0x80000000) 
#define CAMERA_MCLK1				(GPIO46 | 0x80000000) 
// Define I2C Bus Num
#define SUPPORT_I2C_BUS_NUM1        0
#define SUPPORT_I2C_BUS_NUM2        0
//#define GPIO_CAMERA_SUB_AVDD		 (GPIO82 | 0x80000000) //k5:share avdd with main camera
#define GPIO_CAMERA_SUB_DVDD		 (GPIO82 | 0x80000000) 
//#define GPIO_CAMERA_SUB_DOVDD	 (GPIO95 | 0x80000000)  //k5:share avdd with main camera
#define GPIO_CAM_SWSEL	                   (GPIO69 | 0x80000000)   //CAM_SWSEL
#endif
