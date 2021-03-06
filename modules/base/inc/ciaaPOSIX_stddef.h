/* Copyright 2014, ACSE & CADIEEL
 *    ACSE   : http://www.sase.com.ar/asociacion-civil-sistemas-embebidos/ciaa/
 *    CADIEEL: http://www.cadieel.org.ar
 * Copyright 2014, 2015, Mariano Cerdeiro
 * Copyright 2016        Franco Bucafusco
 * All rights reserved.
 *
 * This file is part of CIAA Firmware.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef CIAAPOSIX_STDDEF_H
#define CIAAPOSIX_STDDEF_H
/** \brief Short description of this file
 **
 ** Long description of this file
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */
/** \addtogroup Template Template to start a new module
 ** @{ */

/*==================[inclusions]=============================================*/
#include "ciaaPOSIX_stdint.h"
#include "ciaaPlatforms.h"

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

#if (x86 == ARCH)
#include "stddef.h"
#elif ( ( (cortexM4 == ARCH) && (lpc43xx == CPUTYPE) ) || \
        ( (cortexM4 == ARCH) && (k60_120 == CPUTYPE) ) )
#include "stddef.h"
#elif ( (cortexM0 == ARCH) && (lpc43xx == CPUTYPE) )
#include "stddef.h"
#include "sys/types.h"
#elif ( (mips == ARCH) && (pic32 == CPUTYPE) )
#include "stdint.h"
#elif ( (msp430 == ARCH) && (msp430f5x_6x == CPUTYPE) )
#include <sys/types.h>
#include "stdint.h"
#else
#error Missing stdio type definition for this ARCH/CPUTYPE/CPU
#endif
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/
/*@ -warnposixheaders @*/
#if ( (x86 == ARCH) || (cortexM4 == ARCH) )
#include "sys/types.h"
#elif ( (mips == ARCH) && (pic32 == CPUTYPE) )
#include "sys/types.h"
#if 0
#include "stddef.h"
#endif
#endif
/*@ =warnposixheaders @*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef CIAAPOSIX_STDDEF_H */

