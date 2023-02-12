add_subdirectory(net)
add_subdirectory(util)
file(GLOB_RECURSE CPP_FILES "*.cpp")
file(GLOB_RECURSE H_FILES "*.h")
add_library(mozi STATIC ${CPP_FILES} ${H_FILES})

include_directories(include)
target_include_directories(mozi PUBLIC include)