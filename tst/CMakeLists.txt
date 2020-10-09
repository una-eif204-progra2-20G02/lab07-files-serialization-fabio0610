set(BINARY ${lab07-files-serialization-wems99}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

#add_executable(${BINARY} ${TEST_SOURCES} )

add_test(NAME ${BINARY} COMMAND ${BINARY})

#target_link_libraries(${BINARY} PUBLIC ${lab07-files-serialization-wems99}_lib gtest)