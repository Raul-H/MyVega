#include "MyVega/add.hpp"
#include <benchmark/benchmark.h>

static void BM_AddtionCompute(benchmark::State& state) {
  // Perform setup here
  arith::Addition add;
  double a = 0;
  double b = 0;
  for (auto _ : state) {
    // This code gets timed
    add.compute(a++, b++);
  }
}
// Register the function as a benchmark
BENCHMARK(BM_AddtionCompute);