# ======================================================================================
#
#  ██╗     ███████╗███╗   ███╗ ██████╗ ███╗   ██╗███████╗
#  ██║     ██╔════╝████╗ ████║██╔═══██╗████╗  ██║██╔════╝
#  ██║     █████╗  ██╔████╔██║██║   ██║██╔██╗ ██║███████╗
#  ██║     ██╔══╝  ██║╚██╔╝██║██║   ██║██║╚██╗██║╚════██║
#  ███████╗███████╗██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████║
#  ╚══════╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝
#
#  This file is part of the Lemons open source library and is licensed under the terms of the GNU Public License.
#
# ======================================================================================

include_guard (GLOBAL)

#

include (LemonsStaticLibraryHelpers)

add_library (limes_music STATIC)

lemons_configure_static_library (limes_music)

include (limes_core)

target_link_libraries (limes_music PUBLIC limes_core)

target_sources (limes_music PUBLIC "${CMAKE_CURRENT_LIST_DIR}/limes_music.h")

target_include_directories (limes_music INTERFACE "${CMAKE_CURRENT_LIST_DIR}")

add_subdirectory ("${CMAKE_CURRENT_LIST_DIR}/harmony"
				  "${CMAKE_CURRENT_BINARY_DIR}/limes_music/harmony")
add_subdirectory ("${CMAKE_CURRENT_LIST_DIR}/rhythm"
				  "${CMAKE_CURRENT_BINARY_DIR}/limes_music/rhythm")

lemons_sort_target_sources (limes_music ${CMAKE_CURRENT_LIST_DIR})

add_library (Lemons::limes_music ALIAS limes_music)
