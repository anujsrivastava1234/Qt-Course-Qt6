# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "20-QColorDialog_autogen"
  "CMakeFiles\\20-QColorDialog_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\20-QColorDialog_autogen.dir\\ParseCache.txt"
  )
endif()
