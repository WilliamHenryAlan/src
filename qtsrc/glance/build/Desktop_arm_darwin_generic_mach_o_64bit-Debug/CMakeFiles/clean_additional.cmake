# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/glance_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/glance_autogen.dir/ParseCache.txt"
  "glance_autogen"
  )
endif()
