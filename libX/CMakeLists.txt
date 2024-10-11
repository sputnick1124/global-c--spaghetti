project(libX)

add_library(X STATIC
	x.cpp
	include/x.h
)

target_link_libraries(X PUBLIC
	common
)

target_include_directories(X PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
