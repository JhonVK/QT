# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Projeto1QT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Projeto1QT_autogen.dir\\ParseCache.txt"
  "Projeto1QT_autogen"
  )
endif()
