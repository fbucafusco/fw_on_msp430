/* Copyright 2016, Diego Ezequiel Vommaro
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

#ifndef CIAAPOSIX_UNISTD_INTERNAL_H
#define CIAAPOSIX_UNISTD_INTERNAL_H
/** \brief ciaa POSIX unistd Internal header file
 **
 ** ciaa POSIX unistd Internal header file
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */
/** \addtogroup POSIX POSIX Implementation
 ** @{ */

/*==================[inclusions]=============================================*/
#include "ciaaPOSIX_unistd.h"
#include "ciaaLibs_Maths.h"

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/
/* Position of the state bit that indicates if the task is sleeping or not*/
#define STATE_BIT (CIAAPLATFORM_REGLENGTH-1)

/* Bit mask used to set and reset sleeping state */
#define SLEEPING_STATE_MASK (1 << STATE_BIT)

/* Maximum counts for the counter */
#define MAX_COUNTS (~(SLEEPING_STATE_MASK))

/** \brief Sets sleeping state of a task
 **
 ** \param[inout] var variable to set most significant bit
 **
 **/
#define setSleepingState(var)       \
   ciaaLibs_setBit(var, STATE_BIT)

/** \brief Clears sleeping state of a task
 **
 ** \param[inout] var variable to reset most significant bit
 **
 **/
#define resetSleepingState(var)     \
   ciaaLibs_clearBit(var, STATE_BIT)

/** \brief Get sleeping state of a task
 **
 ** \param[in] var variable to reset most significant bit
 ** \return The task state
 **/
#define isTaskSleeping(var)       \
   ((var) & SLEEPING_STATE_MASK)

/** \brief Set sleeping counts of a task
 **
 ** \param[inout] var variable to set sleeping counts
 ** \param[in] counts counts to sleep
 **/
#define setSleepingCounts(var, counts)       \
   ( (var) &= SLEEPING_STATE_MASK )          \
   ( (counts) &= (~SLEEPING_STATE_MASK) )    \
   ( (var) |= (counts))

/** \brief Get sleeping counts of a task
 **
 ** \param[in] var variable to get sleeping counts
 ** \return The sleeping counts
 **/
#define getSleepingCounts(var)       \
   ( (var) & (~SLEEPING_STATE_MASK) )

/*==================[typedef]================================================*/
/** \brief The counters have 1 bit for state and 31 bits for counts */
typedef struct ciaaPOSIX_counter_type
{
   uint32_t isCounting : 1;
   uint32_t counter : 31;
}ciaaPOSIX_counter_t;

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef CIAAPOSIX_UNISTD_INTERNAL_H */
