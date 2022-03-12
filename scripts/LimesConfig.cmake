# ======================================================================================
#  __    ____  __  __  ____  ___
# (  )  (_  _)(  \/  )( ___)/ __)
#  )(__  _)(_  )    (  )__) \__ \
# (____)(____)(_/\/\_)(____)(___/
#
#  This file is part of the Limes open source library and is licensed under the terms of the GNU Public License.
#
# ======================================================================================

include_guard (GLOBAL)

cmake_minimum_required (VERSION 3.21 FATAL_ERROR)

@PACKAGE_INIT@

set_and_check (LIMES_ROOT_DIR "@PACKAGE_LIMES_ROOT_DIR@")

include ("${CMAKE_CURRENT_LIST_DIR}/LimesMacros.cmake")

#

include (CMakeFindDependencyMacro)

find_dependency (Oranges REQUIRED)

#

include ("${CMAKE_CURRENT_LIST_DIR}/LimesTargets.cmake")

#

check_required_components ("@PROJECT_NAME@")
