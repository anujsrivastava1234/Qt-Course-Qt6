# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app13-QmlComponents_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app13-QmlComponents_autogen.dir\\ParseCache.txt"
  "app13-QmlComponents_autogen"
  )
endif()
