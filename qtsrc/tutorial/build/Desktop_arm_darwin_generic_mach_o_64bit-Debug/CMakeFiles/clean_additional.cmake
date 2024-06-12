# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/tutorial_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/tutorial_autogen.dir/ParseCache.txt"
  "tutorial_autogen"
  )
endif()
