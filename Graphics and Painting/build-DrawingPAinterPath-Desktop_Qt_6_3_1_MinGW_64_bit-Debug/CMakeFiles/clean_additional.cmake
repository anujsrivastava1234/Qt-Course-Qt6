# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DrawingPAinterPath_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DrawingPAinterPath_autogen.dir\\ParseCache.txt"
  "DrawingPAinterPath_autogen"
  )
endif()
