# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app12-TextInputElements_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app12-TextInputElements_autogen.dir\\ParseCache.txt"
  "app12-TextInputElements_autogen"
  )
endif()
