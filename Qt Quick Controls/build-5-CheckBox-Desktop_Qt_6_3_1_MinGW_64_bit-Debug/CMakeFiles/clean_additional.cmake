# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app5-CheckBox_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app5-CheckBox_autogen.dir\\ParseCache.txt"
  "app5-CheckBox_autogen"
  )
endif()
