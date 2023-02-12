file(GLOB CPP_FILES "*.cpp")
add_library(mozi_net
        OBJECT
        ${CPP_FILES})