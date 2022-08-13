# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "17-QTableWidget_autogen"
  "CMakeFiles\\17-QTableWidget_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\17-QTableWidget_autogen.dir\\ParseCache.txt"
  )
endif()
