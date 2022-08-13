# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QEasingCurveExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QEasingCurveExample_autogen.dir\\ParseCache.txt"
  "QEasingCurveExample_autogen"
  )
endif()
