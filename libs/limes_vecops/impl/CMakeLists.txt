# ======================================================================================
#  __    ____  __  __  ____  ___
# (  )  (_  _)(  \/  )( ___)/ __)
#  )(__  _)(_  )    (  )__) \__ \
# (____)(____)(_/\/\_)(____)(___/
#
#  This file is part of the Limes open source library and is licensed under the terms of the GNU Public License.
#
# ======================================================================================

include ("${CMAKE_CURRENT_LIST_DIR}/SelectImpl.cmake")

target_sources (
	limes_vecops
	INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/fallback_impl.h>
			  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/Limes/limes_vecops/fallback_impl.h>)

install (
	FILES "${CMAKE_CURRENT_LIST_DIR}/fallback_impl.h" "${CMAKE_CURRENT_LIST_DIR}/fallback.h"
		  "${CMAKE_CURRENT_LIST_DIR}/ipp.h" "${CMAKE_CURRENT_LIST_DIR}/vdsp.h"
		  "${CMAKE_CURRENT_LIST_DIR}/mipp.h"
	DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/Limes/limes_vecops")
