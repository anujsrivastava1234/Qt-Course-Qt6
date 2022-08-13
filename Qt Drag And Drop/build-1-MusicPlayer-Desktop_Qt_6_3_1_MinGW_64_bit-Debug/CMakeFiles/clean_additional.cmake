# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "1-MusicPlayer_autogen"
  "CMakeFiles\\1-MusicPlayer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\1-MusicPlayer_autogen.dir\\ParseCache.txt"
  )
endif()
