# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QPropertyAnimationExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QPropertyAnimationExample_autogen.dir\\ParseCache.txt"
  "QPropertyAnimationExample_autogen"
  )
endif()
