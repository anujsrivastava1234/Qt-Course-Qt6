# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appFrameLayoutExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appFrameLayoutExample_autogen.dir\\ParseCache.txt"
  "appFrameLayoutExample_autogen"
  )
endif()
