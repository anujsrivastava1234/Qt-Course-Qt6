# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appMenuBarExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appMenuBarExample_autogen.dir\\ParseCache.txt"
  "appMenuBarExample_autogen"
  )
endif()
