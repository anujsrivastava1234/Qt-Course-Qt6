# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app10-SpinBoxExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app10-SpinBoxExample_autogen.dir\\ParseCache.txt"
  "app10-SpinBoxExample_autogen"
  )
endif()
