# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SDIExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SDIExample_autogen.dir\\ParseCache.txt"
  "SDIExample_autogen"
  )
endif()
