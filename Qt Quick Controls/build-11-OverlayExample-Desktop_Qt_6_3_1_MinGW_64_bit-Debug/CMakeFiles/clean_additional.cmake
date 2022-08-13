# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app11-OverlayExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app11-OverlayExample_autogen.dir\\ParseCache.txt"
  "app11-OverlayExample_autogen"
  )
endif()
