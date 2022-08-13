# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "2-VedioPLayerExample_autogen"
  "CMakeFiles\\2-VedioPLayerExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\2-VedioPLayerExample_autogen.dir\\ParseCache.txt"
  )
endif()
