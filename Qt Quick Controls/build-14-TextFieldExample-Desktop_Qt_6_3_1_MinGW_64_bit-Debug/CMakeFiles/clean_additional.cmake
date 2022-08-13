# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app14-TextFieldExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app14-TextFieldExample_autogen.dir\\ParseCache.txt"
  "app14-TextFieldExample_autogen"
  )
endif()
