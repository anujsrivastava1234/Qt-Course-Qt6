# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appStackViewExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appStackViewExample_autogen.dir\\ParseCache.txt"
  "appStackViewExample_autogen"
  )
endif()
