add_library(math_utils STATIC math_utils.c)
target_include_directories(math_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})