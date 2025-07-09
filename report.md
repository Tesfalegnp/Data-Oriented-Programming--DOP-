# Data-Oriented Programming Benchmark Report

This report compares performance improvements using various Data-Oriented Programming (DOP) techniques over a baseline Object-Oriented Programming (OOP) implementation.

## 📊 Benchmark Summary

| Technique              | File Name              | Time (ms)    | % Improvement over Baseline |
|------------------------|------------------------|--------------|------------------------------|
| Baseline (OOP)         | ClassTest.cpp          | 24.6669      | 0%                           |
| Struct of Arrays       | StructTest.cpp         | 17.0611      | +30.81%                      |
| Optimized Struct (Hoisting) | StructTest2.cpp    | 14.7568      | +40.16%                      |
| Swap-Back Deletion     | SwapBackDeletion.cpp   | 0.001886     | Logic only                   |
| Pre-Sorting by State   | PreSortByState.cpp     | 38.4560      | -55.90% (slower than base)   |
| Invariant Hoisting     | InvariantHoisting.cpp  | 18.9837      | +23.06%                      |

> 📌 Note: Pre-sorting by state is not always faster, especially if sorting overhead outweighs loop gains for small datasets.

## 🛠 Benchmark Setup

- **Language:** C++
- **Measurement Tool:** `std::chrono::high_resolution_clock`
- **Entities:** 1,000,000 per benchmark
- **Machine:** Ubuntu 24.04 (assumed)

## 🧠 Summary

- `StructTest2.cpp` showed the **best performance** with 40% improvement.
- Invariant Hoisting gave meaningful improvements with minimal code change.
- Pre-Sorting by State needs profiling for larger datasets to prove beneficial.

