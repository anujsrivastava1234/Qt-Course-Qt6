# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "4-WindowDifference_autogen"
  "CMakeFiles\\4-WindowDifference_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\4-WindowDifference_autogen.dir\\ParseCache.txt"
  )
endif()
