# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQtContextMenuExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQtContextMenuExample_autogen.dir\\ParseCache.txt"
  "appQtContextMenuExample_autogen"
  )
endif()
