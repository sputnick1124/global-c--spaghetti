project(libX)

add_library(X STATIC
	x.cpp
	x-pure.cpp
	include/x.h
	include/x-pure.h
)

target_link_libraries(X PUBLIC
	common
)

target_include_directories(X PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
