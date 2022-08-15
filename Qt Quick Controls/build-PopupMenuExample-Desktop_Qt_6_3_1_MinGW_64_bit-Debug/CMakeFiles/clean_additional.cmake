# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appPopupMenuExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appPopupMenuExample_autogen.dir\\ParseCache.txt"
  "appPopupMenuExample_autogen"
  )
endif()
