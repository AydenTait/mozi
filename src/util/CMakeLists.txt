file(GLOB CPP_FILES "*.cpp")
add_library(mozi_util
        OBJECT
        ${CPP_FILES})
