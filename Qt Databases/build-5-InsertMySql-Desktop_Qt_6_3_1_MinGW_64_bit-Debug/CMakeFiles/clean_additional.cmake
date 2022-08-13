# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "5-InsertMySql_autogen"
  "CMakeFiles\\5-InsertMySql_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\5-InsertMySql_autogen.dir\\ParseCache.txt"
  )
endif()
