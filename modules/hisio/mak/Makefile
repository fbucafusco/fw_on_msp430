###############################################################################
#
# Copyright 2015, Mariano Cerdeiro
# All rights reserved.
#
# This file is part of CIAA Firmware.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
#    contributors may be used to endorse or promote products derived from this
#    software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
###############################################################################
# library
LIBS 				  += hisio
# version
hisio_VERSION     = 0.1.0
# library path
hisio_PATH 			= $(ROOT_DIR)$(DS)modules$(DS)hisio
# library source path
hisio_SRC_PATH 	= $(hisio_PATH)$(DS)src
# library include path
hisio_INC_PATH 	= $(hisio_PATH)$(DS)inc                                            \
                    $(hisio_PATH)$(DS)inc$(DS)$(ARCH)                                \
                    $(hisio_PATH)$(DS)inc$(DS)$(ARCH)$(DS)$(CPUTYPE)                 \
                    $(hisio_PATH)$(DS)inc$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)      \
                    $(GEN_DIR)$(DS)inc                                               \
                    $(GEN_DIR)$(DS)inc$(DS)$(ARCH)                                   \
                    $(GEN_DIR)$(DS)inc$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)

# library source files
hisio_SRC_FILES  =  $(wildcard $(hisio_SRC_PATH)$(DS)*.c)
hisio_SRC_FILES +=  $(wildcard $(hisio_SRC_PATH)$(DS)$(ARCH)$(DS)*.c)
hisio_SRC_FILES +=  $(wildcard $(hisio_SRC_PATH)$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)*.c)
hisio_SRC_FILES +=  $(wildcard $(hisio_SRC_PATH)$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)$(DS)*.c)
hisio_SRC_FILES +=  $(wildcard $(GEN_DIR)$(DS)src$(DS)*.c)
hisio_SRC_FILES +=  $(wildcard $(GEN_DIR)$(DS)src$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)$(DS)*.c)

# files to be generated
# TODO see https://github.com/ciaa/Firmware/issues/277
rtos_GEN_FILES += $(wildcard $(hisio_PATH)$(DS)gen$(DS)inc$(DS)*.php)	\
                  $(wildcard $(hisio_PATH)$(DS)gen$(DS)inc$(DS)$(ARCH)$(DS)*.php)      \
                  $(wildcard $(hisio_PATH)$(DS)gen$(DS)src$(DS)$(ARCH)$(DS)*.php)      \
                  $(wildcard $(hisio_PATH)$(DS)gen$(DS)inc$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)$(DS)*.php)      \
                  $(wildcard $(hisio_PATH)$(DS)gen$(DS)src$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)$(DS)*.php)

include externals$(DS)drivers$(DS)mak$(DS)Makefile

# Enable this feature in the ciaak
CFLAGS += -DCIAA_CFG_HISIO
