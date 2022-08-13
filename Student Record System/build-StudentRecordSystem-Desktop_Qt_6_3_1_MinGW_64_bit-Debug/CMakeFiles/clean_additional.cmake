# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentRecordSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentRecordSystem_autogen.dir\\ParseCache.txt"
  "StudentRecordSystem_autogen"
  )
endif()
