# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTabBarBAR_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTabBarBAR_autogen.dir\\ParseCache.txt"
  "appTabBarBAR_autogen"
  )
endif()
