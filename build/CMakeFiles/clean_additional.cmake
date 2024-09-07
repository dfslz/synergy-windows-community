# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "src\\gui\\CMakeFiles\\synergy_autogen.dir\\AutogenUsed.txt"
  "src\\gui\\CMakeFiles\\synergy_autogen.dir\\ParseCache.txt"
  "src\\gui\\synergy_autogen"
  "src\\lib\\gui\\CMakeFiles\\gui_autogen.dir\\AutogenUsed.txt"
  "src\\lib\\gui\\CMakeFiles\\gui_autogen.dir\\ParseCache.txt"
  "src\\lib\\gui\\gui_autogen"
  )
endif()
