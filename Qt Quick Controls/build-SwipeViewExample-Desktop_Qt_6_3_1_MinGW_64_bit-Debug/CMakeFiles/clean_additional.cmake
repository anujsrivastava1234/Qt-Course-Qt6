# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSwipeViewExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSwipeViewExample_autogen.dir\\ParseCache.txt"
  "appSwipeViewExample_autogen"
  )
endif()
