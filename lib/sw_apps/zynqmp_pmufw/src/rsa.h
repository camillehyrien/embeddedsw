/******************************************************************************
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
******************************************************************************/

#ifndef _RSA_H_
#define _RSA_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * RSA Base Address
 */
#define RSA_BASEADDR      0XFFCE002C

/**
 * Register: RSA_WR_DATA_0
 */
#define RSA_WR_DATA_0    ( ( RSA_BASEADDR ) + 0X00000000 )

#define RSA_WR_DATA_0_WR_DATA_SHIFT   0
#define RSA_WR_DATA_0_WR_DATA_WIDTH   32
#define RSA_WR_DATA_0_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_DATA_1
 */
#define RSA_WR_DATA_1    ( ( RSA_BASEADDR ) + 0X00000004 )

#define RSA_WR_DATA_1_WR_DATA_SHIFT   0
#define RSA_WR_DATA_1_WR_DATA_WIDTH   32
#define RSA_WR_DATA_1_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_DATA_2
 */
#define RSA_WR_DATA_2    ( ( RSA_BASEADDR ) + 0X00000008 )

#define RSA_WR_DATA_2_WR_DATA_SHIFT   0
#define RSA_WR_DATA_2_WR_DATA_WIDTH   32
#define RSA_WR_DATA_2_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_DATA_3
 */
#define RSA_WR_DATA_3    ( ( RSA_BASEADDR ) + 0X0000000C )

#define RSA_WR_DATA_3_WR_DATA_SHIFT   0
#define RSA_WR_DATA_3_WR_DATA_WIDTH   32
#define RSA_WR_DATA_3_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_DATA_4
 */
#define RSA_WR_DATA_4    ( ( RSA_BASEADDR ) + 0X00000010 )

#define RSA_WR_DATA_4_WR_DATA_SHIFT   0
#define RSA_WR_DATA_4_WR_DATA_WIDTH   32
#define RSA_WR_DATA_4_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_DATA_5
 */
#define RSA_WR_DATA_5    ( ( RSA_BASEADDR ) + 0X00000014 )

#define RSA_WR_DATA_5_WR_DATA_SHIFT   0
#define RSA_WR_DATA_5_WR_DATA_WIDTH   32
#define RSA_WR_DATA_5_WR_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_WR_ADDR
 */
#define RSA_WR_ADDR    ( ( RSA_BASEADDR ) + 0X00000018 )

#define RSA_WR_ADDR_WR_ADDR_SHIFT   0
#define RSA_WR_ADDR_WR_ADDR_WIDTH   32
#define RSA_WR_ADDR_WR_ADDR_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_0
 */
#define RSA_RD_DATA_0    ( ( RSA_BASEADDR ) + 0X0000001C )

#define RSA_RD_DATA_0_RD_DATA_SHIFT   0
#define RSA_RD_DATA_0_RD_DATA_WIDTH   32
#define RSA_RD_DATA_0_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_1
 */
#define RSA_RD_DATA_1    ( ( RSA_BASEADDR ) + 0X00000020 )

#define RSA_RD_DATA_1_RD_DATA_SHIFT   0
#define RSA_RD_DATA_1_RD_DATA_WIDTH   32
#define RSA_RD_DATA_1_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_2
 */
#define RSA_RD_DATA_2    ( ( RSA_BASEADDR ) + 0X00000024 )

#define RSA_RD_DATA_2_RD_DATA_SHIFT   0
#define RSA_RD_DATA_2_RD_DATA_WIDTH   32
#define RSA_RD_DATA_2_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_3
 */
#define RSA_RD_DATA_3    ( ( RSA_BASEADDR ) + 0X00000028 )

#define RSA_RD_DATA_3_RD_DATA_SHIFT   0
#define RSA_RD_DATA_3_RD_DATA_WIDTH   32
#define RSA_RD_DATA_3_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_4
 */
#define RSA_RD_DATA_4    ( ( RSA_BASEADDR ) + 0X0000002C )

#define RSA_RD_DATA_4_RD_DATA_SHIFT   0
#define RSA_RD_DATA_4_RD_DATA_WIDTH   32
#define RSA_RD_DATA_4_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_DATA_5
 */
#define RSA_RD_DATA_5    ( ( RSA_BASEADDR ) + 0X00000030 )

#define RSA_RD_DATA_5_RD_DATA_SHIFT   0
#define RSA_RD_DATA_5_RD_DATA_WIDTH   32
#define RSA_RD_DATA_5_RD_DATA_MASK    0XFFFFFFFF

/**
 * Register: RSA_RD_ADDR
 */
#define RSA_RD_ADDR    ( ( RSA_BASEADDR ) + 0X00000034 )

#define RSA_RD_ADDR_RD_ADDR_SHIFT   0
#define RSA_RD_ADDR_RD_ADDR_WIDTH   32
#define RSA_RD_ADDR_RD_ADDR_MASK    0XFFFFFFFF

/**
 * Register: RSA_RSA_CFG
 */
#define RSA_RSA_CFG    ( ( RSA_BASEADDR ) + 0X00000038 )

#define RSA_RSA_CFG_RD_ENDIANNESS_SHIFT   2
#define RSA_RSA_CFG_RD_ENDIANNESS_WIDTH   1
#define RSA_RSA_CFG_RD_ENDIANNESS_MASK    0X00000004

#define RSA_RSA_CFG_WR_ENDIANNESS_SHIFT   1
#define RSA_RSA_CFG_WR_ENDIANNESS_WIDTH   1
#define RSA_RSA_CFG_WR_ENDIANNESS_MASK    0X00000002

#define RSA_RSA_CFG_SLVERR_EN_SHIFT   0
#define RSA_RSA_CFG_SLVERR_EN_WIDTH   1
#define RSA_RSA_CFG_SLVERR_EN_MASK    0X00000001

/**
 * Register: RSA_RSA_ISR
 */
#define RSA_RSA_ISR    ( ( RSA_BASEADDR ) + 0X0000003C )

#define RSA_RSA_ISR_APB_SLVERR_SHIFT   0
#define RSA_RSA_ISR_APB_SLVERR_WIDTH   1
#define RSA_RSA_ISR_APB_SLVERR_MASK    0X00000001

/**
 * Register: RSA_RSA_IMR
 */
#define RSA_RSA_IMR    ( ( RSA_BASEADDR ) + 0X00000040 )

#define RSA_RSA_IMR_APB_SLVERR_SHIFT   0
#define RSA_RSA_IMR_APB_SLVERR_WIDTH   1
#define RSA_RSA_IMR_APB_SLVERR_MASK    0X00000001

/**
 * Register: RSA_RSA_IER
 */
#define RSA_RSA_IER    ( ( RSA_BASEADDR ) + 0X00000044 )

#define RSA_RSA_IER_APB_SLVERR_SHIFT   0
#define RSA_RSA_IER_APB_SLVERR_WIDTH   1
#define RSA_RSA_IER_APB_SLVERR_MASK    0X00000001

/**
 * Register: RSA_RSA_IDR
 */
#define RSA_RSA_IDR    ( ( RSA_BASEADDR ) + 0X00000048 )

#define RSA_RSA_IDR_APB_SLVERR_SHIFT   0
#define RSA_RSA_IDR_APB_SLVERR_WIDTH   1
#define RSA_RSA_IDR_APB_SLVERR_MASK    0X00000001

#ifdef __cplusplus
}
#endif


#endif /* _RSA_H_ */
