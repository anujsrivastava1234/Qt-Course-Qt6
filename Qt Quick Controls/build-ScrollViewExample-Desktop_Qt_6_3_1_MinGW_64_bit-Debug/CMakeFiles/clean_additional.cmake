# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appScrollViewExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appScrollViewExample_autogen.dir\\ParseCache.txt"
  "appScrollViewExample_autogen"
  )
endif()
