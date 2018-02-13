/***************************************************
Contains the function for which testing is to be done
*******************************************************/

//including benchmark library
#include "benchmark/benchmark.h"

static void BM_function_1(benchmark::State& state)
{
  while (state.KeepRunning())
   {
   		//Do something
   }
  
}

BENCHMARK(BM_function_1);
BENCHMARK_MAIN();