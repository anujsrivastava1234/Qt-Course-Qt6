# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "5-SingalSlot_autogen"
  "CMakeFiles\\5-SingalSlot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\5-SingalSlot_autogen.dir\\ParseCache.txt"
  )
endif()
