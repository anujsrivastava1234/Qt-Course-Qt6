# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "14-QSliderBox_autogen"
  "CMakeFiles\\14-QSliderBox_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\14-QSliderBox_autogen.dir\\ParseCache.txt"
  )
endif()
