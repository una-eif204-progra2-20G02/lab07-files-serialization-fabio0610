set(BINARY ${lab07-files-serialization-wems99})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES} PersonList.cpp PersonList.h IObjectSave.cpp IObjectSave.h SaveAsBinary.cpp SaveAsBinary.h SaveAsJson.cpp SaveAsJson.h PersonManager.cpp PersonManager.h)