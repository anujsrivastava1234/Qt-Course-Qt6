# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "12-RandomNumberApp_autogen"
  "CMakeFiles\\12-RandomNumberApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\12-RandomNumberApp_autogen.dir\\ParseCache.txt"
  )
endif()
