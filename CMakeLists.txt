 
#
# DLT example implementation
#

cmake_minimum_required( VERSION 2.6 )
 
#
# include directories
#

include_directories(
    ${DLT_INCLUDE_DIRS}
    ${DLT_LIBRARIES}
)

#
# build project
#

 
set(${/home/robert/Desktop/new} main.c)

add_executable(main ${/home/robert/Desktop/new})

target_link_libraries(main ${DLT_LIBRARIES})

set_target_properties(main PROPERTIES LINKER_LANGUAGE C)

target_include_directories(main PRIVATE ${/home/robert/Desktop/workspace/dlt-daemon/include/dlt})

message(STATUS "${DLT_INCLUDE_DIRS} ${DLT_LIBRARIES}")  

install(TARGETS main
	RUNTIME DESTINATION bin
	COMPONENT base)
