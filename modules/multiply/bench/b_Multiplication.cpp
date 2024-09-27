#include "MyVega/multiply.hpp"
#include <benchmark/benchmark.h>

static void BM_MultiplyCompute(benchmark::State& state) {
  // Perform setup here
  arith::Multiplication mul;
  double a = 0;
  double b = 0;
  for (auto _ : state) {
    // This code gets timed
    mul.compute( a, b );
    a += 0.1;
    b += 0.1;
  }
}
// Register the function as a benchmark
BENCHMARK(BM_MultiplyCompute);