# ======================================================================================
#  __    ____  __  __  ____  ___
# (  )  (_  _)(  \/  )( ___)/ __)
#  )(__  _)(_  )    (  )__) \__ \
# (____)(____)(_/\/\_)(____)(___/
#
#  This file is part of the Limes open source library and is licensed under the terms of the GNU Public License.
#
# ======================================================================================

target_sources (
	limes_audio
	PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/SampleStream.cpp>
			$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/oscillator.cpp>
			$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/basic_oscillators.cpp>)

oranges_add_target_headers (
	TARGET
	limes_audio
	SCOPE
	PRIVATE
	REL_PATH
	Limes/limes_audio
	FILES
	SampleStream.h
	oscillator.h
	basic_oscillators.h)
