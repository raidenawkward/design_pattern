cmake_minimum_required(VERSION 2.8)
PROJECT(DESIGN_PATTERN)

INCLUDE(pattern_list.cmake)


FOREACH(dir ${PATTERN_DIR_LIST})
	ADD_SUBDIRECTORY(${dir})
	ADD_TEST(test-${dir} ${PROJECT_BINARY_DIR}/${dir}/${dir})
ENDFOREACH()

ENABLE_TESTING()
