###############################################################################
#
# Copyright 2016, Franco Bucafusco
#
# All Rights Reserved
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
# mspdebug path
MSPDEBUG_PATH 		   	= $(ROOT_DIR)$(DS)modules$(DS)tools$(DS)debugserver$(DS)mspdebug

# mspdebug bin file
MSPDEBUG_BIN 		   	= mspdebug

# mspdebug protocol
ifeq ($(BOARD),msp_exp430f5529)
MSPDEBUG_PROTOCOL		= rf2500
MSPDEBUG_OPTIONS		= -v 3300
endif

# mspdebug dependent makefile
include $(MSPDEBUG_PATH)$(DS)mak$(DS)$(ARCH)$(DS)$(CPUTYPE)$(DS)$(CPU)$(DS)Makefile

# mspdebug name
DEBUG_SERVER_NAME    = mspdebug

# mspdebug debugserver command
DEBUG_SERVER_CMD     = $(MSPDEBUG_BIN) $(MSPDEBUG_PROTOCOL) $(MSPDEBUG_OPTIONS)

# mspdebug erase command
ERASE_CMD            = $(MSPDEBUG_BIN) $(MSPDEBUG_PROTOCOL) $(FLASH_ERASE_COMMAND)

# mspdebug download command
DOWNLOAD_CMD         = $(MSPDEBUG_BIN) $(MSPDEBUG_PROTOCOL) $(FLASH_WRITE_COMMAND)
