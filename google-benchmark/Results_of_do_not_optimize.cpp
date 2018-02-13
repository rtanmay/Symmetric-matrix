/***************************************************
Contains the function for which testing is to be done
*******************************************************/

//including benchmark library
#include "benchmark/benchmark.h"

static void BM_not_optimized(benchmark::State& state)
{
  while (state.KeepRunning()) {
  for (int i = 1; i <= 10000; i++) {
    double x = 3.1032;
    benchmark::DoNotOptimize(x);
    }
  }
}

static void BM_optimized(benchmark::State& state)
{
  while (state.KeepRunning()) {
  for (int i = 1; i <= 10000; i++) {
    double x = 3.1032;
    }
  }
}

BENCHMARK(BM_not_optimized);
BENCHMARK(BM_optimized);
BENCHMARK_MAIN();

/*************************************************************************************************************************
2018-02-13 21:46:13
Run on (4 X 3000 MHz CPU s)
CPU Caches:
  L1 Data 32K (x2)
  L1 Instruction 32K (x2)
  L2 Unified 256K (x2)
  L3 Unified 4096K (x1)
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
--------------------------------------------------------
Benchmark                 Time           CPU Iterations
--------------------------------------------------------
BM_not_optimized      21774 ns      21774 ns      31818
BM_optimized          24617 ns      24614 ns      28252
****************************************************************************************************************************/