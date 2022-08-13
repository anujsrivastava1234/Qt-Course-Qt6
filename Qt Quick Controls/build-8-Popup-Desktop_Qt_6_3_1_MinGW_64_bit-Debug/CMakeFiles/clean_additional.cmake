# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\app8-Popup_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\app8-Popup_autogen.dir\\ParseCache.txt"
  "app8-Popup_autogen"
  )
endif()
