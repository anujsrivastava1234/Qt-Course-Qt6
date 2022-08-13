# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app9-QMlExampleSecond_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app9-QMlExampleSecond_autogen.dir\\ParseCache.txt"
  "app9-QMlExampleSecond_autogen"
  )
endif()
