/* Copyright (c) 2004,2005, Anatoly Sokolov <aesok@pautinka.net>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id: iocan32.h,v 1.2.2.2 2008/01/06 20:10:42 arcanum Exp $ */

/* iocan32.h - definitions for CAN32 */

#ifndef _AVR_IOCAN32_H_
#define _AVR_IOCAN32_H_ 1

#include <avr/iocanxx.h>

/* Constants */
#define    SPM_PAGESIZE 256
#define    RAMEND   0x08FF     /* Last On-Chip SRAM Location */
#define    XRAMEND  0xFFFF
#define    E2END    0x03FF
#define    FLASHEND 0x7FFF


/* Fuses */

#define FUSE_MEMORY_SIZE 3

/* Low Fuse Byte */
#define FUSE_CKSEL0      ~_BV(0)
#define FUSE_CKSEL1      ~_BV(1)
#define FUSE_CKSEL2      ~_BV(2)
#define FUSE_CKSEL3      ~_BV(3)
#define FUSE_SUT0        ~_BV(4)
#define FUSE_SUT1        ~_BV(5)
#define FUSE_CKOUT       ~_BV(6)
#define FUSE_CKDIV8      ~_BV(7)
#define LFUSE_DEFAULT (FUSE_CKSEL0 & FUSE_CKSEL2 & FUSE_CKSEL3 & FUSE_SUT0 & FUSE_CKDIV8)

/* High Fuse Byte */
#define FUSE_BOOTRST     ~_BV(0)
#define FUSE_BOOTSZ0     ~_BV(1)
#define FUSE_BOOTSZ1     ~_BV(2)
#define FUSE_EESAVE      ~_BV(3)
#define FUSE_WDTON       ~_BV(4)
#define FUSE_SPIEN       ~_BV(5)
#define FUSE_JTAGEN      ~_BV(6)
#define FUSE_OCDEN       ~_BV(7)
#define HFUSE_DEFAULT (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_SPIEN & FUSE_JTAGEN)

/* Extended Fuse Byte */
#define FUSE_BODLEVEL0   ~_BV(1)
#define FUSE_BODLEVEL1   ~_BV(2)
#define FUSE_BODLEVEL2   ~_BV(3)
#define EFUSE_DEFAULT (0xFF)


/* Lock Bits */
#define __LOCK_BITS_EXIST
#define __BOOT_LOCK_BITS_0_EXIST
#define __BOOT_LOCK_BITS_1_EXIST 


#endif  /* _AVR_IOCAN32_H_ */
