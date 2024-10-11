project(libcommon)

add_library(common INTERFACE
	include/globals.h
	include/extern.h
)

target_include_directories(common INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
