# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QLCDLayout_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QLCDLayout_autogen.dir\\ParseCache.txt"
  "QLCDLayout_autogen"
  )
endif()
