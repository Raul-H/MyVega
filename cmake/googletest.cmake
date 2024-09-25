include( FetchContent )
include( CTest )
#include(GoogleTest)

function( include_googletest )
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_MakeAvailable( googletest )
enable_testing()
endfunction( include_googletest )
