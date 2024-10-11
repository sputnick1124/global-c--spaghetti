project(appB)

add_executable(appB
	b_main.cpp
)

target_link_libraries(appB PRIVATE
	common
	Y
)
