 
#
# DLT example implementation
#

cmake_minimum_required( VERSION 2.6 )
 
#
# include directories
#

include_directories(
  #  ${DLT_INCLUDE_DIRS}
   # ${DLT_LIBRARIES}
)

#
# build project
#
stdin();
 


add_executable(main main.c)

target_link_libraries(main /usr/local/lib/libdlt.so)

log {
source { stdin(); };
destination { file("/home/robert/Desktop/new"); };
};


target_include_directories(main PRIVATE ${/home/robert/Desktop/workspace/dlt-daemon/include/dlt})

message(STATUS "${DLT_INCLUDE_DIRS} ${DLT_LIBRARIES}")  


