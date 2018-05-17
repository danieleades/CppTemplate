set(SRC_FILES
source1.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

add_executable(${PROJECT_NAME}.exe main.cpp)
target_link_libraries(${PROJECT_NAME}.exe ${PROJECT_NAME})

add_definitions(-DVERSION="${${PROJECT_NAME}_VERSION}")
