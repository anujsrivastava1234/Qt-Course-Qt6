# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app1-ApplicationWindow_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app1-ApplicationWindow_autogen.dir\\ParseCache.txt"
  "app1-ApplicationWindow_autogen"
  )
endif()
