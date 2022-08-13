# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "10-QSQLTableModel_autogen"
  "CMakeFiles\\10-QSQLTableModel_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\10-QSQLTableModel_autogen.dir\\ParseCache.txt"
  )
endif()
