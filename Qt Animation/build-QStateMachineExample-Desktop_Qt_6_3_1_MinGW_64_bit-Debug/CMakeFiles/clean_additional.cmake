# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QStateMachineExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QStateMachineExample_autogen.dir\\ParseCache.txt"
  "QStateMachineExample_autogen"
  )
endif()
