include( FetchContent )

function( include_benchmark )
set(BENCHMARK_ENABLE_TESTING off) 
FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.9.0
)

FetchContent_MakeAvailable( benchmark )
endfunction( include_benchmark )