# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appToolTipExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appToolTipExample_autogen.dir\\ParseCache.txt"
  "appToolTipExample_autogen"
  )
endif()
