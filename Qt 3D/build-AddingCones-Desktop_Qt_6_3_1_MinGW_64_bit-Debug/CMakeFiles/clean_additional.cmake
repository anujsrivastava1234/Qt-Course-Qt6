# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appAddingCones_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appAddingCones_autogen.dir\\ParseCache.txt"
  "appAddingCones_autogen"
  )
endif()