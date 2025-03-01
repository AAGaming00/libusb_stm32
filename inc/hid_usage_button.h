/* This file is the part of the Lightweight USB device Stack for STM32 microcontrollers
 *
 * Copyright ©2016 Dmitry Filimonchuk <dmitrystu[at]gmail[dot]com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _USB_HID_USAGE_BUTTON_H_
#define _USB_HID_USAGE_BUTTON_H_
#ifdef __cplusplus
    extern "C" {
#endif


/**\ingroup USB_HID
 * \addtogroup USB_HID_USAGES_BUTTON HID Usage Tables for Button
 * \brief Contains USB HID Usages definitions for Button Page
 * \details This module based on
 * + [HID Usage Tables Version 1.12](https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf)
 * @{ */

#define HID_PAGE_BUTTON           0x09    /**<\brief HID usage page for Buttons */

#define HID_BUTTON_NO_PRESSED           0x00    /**<\brief No button pressed */
#define HID_BUTTON_1                    0x01    /**<\brief Button 1 pressed */
#define HID_BUTTON_2                    0x02    /**<\brief Button 2 pressed */
#define HID_BUTTON_3                    0x03    /**<\brief Button 3 pressed */
#define HID_BUTTON_4                    0x04    /**<\brief Button 4 pressed */
#define HID_BUTTON_5                    0x05    /**<\brief Button 5 pressed */
#define HID_BUTTON_6                    0x06    /**<\brief Button 6 pressed */
#define HID_BUTTON_7                    0x07    /**<\brief Button 7 pressed */
#define HID_BUTTON_8                    0x08    /**<\brief Button 8 pressed */
#define HID_BUTTON_9                    0x09    /**<\brief Button 9 pressed */
#define HID_BUTTON_10                    0x0A    /**<\brief Button 10 pressed */
#define HID_BUTTON_11                    0x0B    /**<\brief Button 11 pressed */
#define HID_BUTTON_12                    0x0C    /**<\brief Button 12 pressed */
#define HID_BUTTON_13                    0x0D    /**<\brief Button 13 pressed */
#define HID_BUTTON_14                    0x0E    /**<\brief Button 14 pressed */
#define HID_BUTTON_15                    0x0F    /**<\brief Button 15 pressed */
#define HID_BUTTON_16                    0x10    /**<\brief Button 16 pressed */

/** @}  */

#ifdef __cplusplus
    }
#endif

#endif

