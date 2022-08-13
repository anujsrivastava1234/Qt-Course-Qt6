# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTabBarButton_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTabBarButton_autogen.dir\\ParseCache.txt"
  "appTabBarButton_autogen"
  )
endif()
