# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app7-SliderExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app7-SliderExample_autogen.dir\\ParseCache.txt"
  "app7-SliderExample_autogen"
  )
endif()
