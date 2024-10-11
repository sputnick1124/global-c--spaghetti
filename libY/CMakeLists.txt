project(libY)

add_library(Y STATIC
	y.cpp
	include/y.h
)

target_link_libraries(Y
	PUBLIC
		common
	PRIVATE
		X
)

target_include_directories(Y PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
