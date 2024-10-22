# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\projeto2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\projeto2_autogen.dir\\ParseCache.txt"
  "projeto2_autogen"
  )
endif()
