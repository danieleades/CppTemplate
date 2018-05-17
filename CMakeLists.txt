cmake_minimum_required (VERSION 3.5)

project (ProjectName VERSION 0.0.0.0)

set(testing ON)

include_directories(include)
add_subdirectory(src)

if(testing)
    add_subdirectory(test)
endif(testing)
