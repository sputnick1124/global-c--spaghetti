project(appA)

add_executable(appA
	a_main.cpp
)

target_link_libraries(appA PRIVATE
	common
	X
)

target_include_directories(appA PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
