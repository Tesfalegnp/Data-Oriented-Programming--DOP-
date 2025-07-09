 [DOP](image/dop.png)

#  Data-Oriented Programming (DOP) in C++

A performance-focused hands-on C++ project demonstrating how to refactor traditional object-oriented code into data-oriented patterns. This project was developed during the **iCog Labs** training titled _"Reducing memory footprint: An Introduction to Data-Oriented Programming"_ (July 5, 2025) by **Tibebe Solomon**.

---

##  Project Objective

To refactor OOP code into DOP using:
- Struct of Arrays
- Swap-back Deletion
- Pre-sorting by State
- Invariant Hoisting

Then benchmark each transformation to understand its effect on performance and memory access.

---

##  Benchmark Summary

| Technique              | File Name              | Time (ms)    | % Improvement |
|------------------------|------------------------|--------------|----------------|
| OOP Baseline           | `ClassTest.cpp`        | 24.6669 ms   | 0%             |
| Struct of Arrays       | `StructTest.cpp`       | 17.0611 ms   | +30.81%        |
| Optimized Struct       | `StructTest2.cpp`      | 14.7568 ms   | +40.16%        |
| Swap-Back Deletion     | `SwapBackDeletion.cpp` | 0.001886 ms  | Logic only     |
| Pre-Sorting by State   | `PreSortByState.cpp`   | 38.456 ms    | -55.90%        |
| Invariant Hoisting     | `InvariantHoisting.cpp`| 18.9837 ms   | +23.06%        |

>  Results may vary based on compiler optimizations, CPU cache behavior, and dataset size.

---

## 🛠 Techniques Demonstrated

| Technique            | Description |
|---------------------|-------------|
| **Struct of Arrays** | Separates fields into independent vectors for cache alignment. |
| **Swap-back Deletion** | Quickly removes entities by swapping with the last element. |
| **Pre-sorting by State** | Groups entities by behavior to avoid branching. |
| **Invariant Hoisting** | Moves unchanging calculations outside of loops. |

---

##  Folder Structure

```bash
.
├── benchmarks/
│   └── benchmark_runner.cpp     # Main entry point for running all tests
├── dop_struct_of_arrays/
│   └── StructTest.cpp
├── dop_optimized/
│   ├── StructTest2.cpp
│   ├── SwapBackDeletion.cpp
│   ├── PreSortByState.cpp
│   └── InvariantHoisting.cpp
├── oop_baseline/
│   └── ClassTest.cpp
├── include/
│   └── common.hpp               # Shared types and timing utility
├── build/                       # CMake build folder
├── CMakeLists.txt
├── report.md                    # Benchmark report
├── README.md
└── .github/
    └── workflows/
        └── benchmark.yml        # GitHub Action workflow for CI
````

---

##  How to Build and Run Locally

### 1. Prerequisites

Ensure C++ compiler and CMake are installed:

```bash
sudo apt update
sudo apt install build-essential cmake
```

### 2. Build and Run

```bash
cd ~/Project_package/DOP-c++/Data-Oriented-Programming--DOP-
mkdir build && cd build
cmake ..
make
./dop_benchmark
```

---

##  GitHub CI/CD Workflow

A GitHub Actions workflow automatically:

* Installs dependencies
* Builds the project
* Runs `dop_benchmark`
* Uploads the result as `benchmark_result.txt` artifact (retained for 30 days)

 Workflow file: `.github/workflows/benchmark.yml`

You can view the result in the **Actions** tab on GitHub.

---

##  Learning Outcomes

By completing this project, I learned to:

* Identify the performance limitations of object-oriented design.
* Apply DOP principles to improve cache locality and reduce memory footprint.
* Benchmark C++ code using `std::chrono`.
* Set up GitHub Actions to automate testing and benchmarking workflows.
* Use descriptive commit messages like:

  * `perf: convert enemy update loop to struct-of-arrays`
  * `refactor: hoist invariant distance calculation`

---

##  References

* [Medium: Introduction to DOP](https://medium.com/mirum-budapest/introduction-to-data-oriented-programming-85b51b99572d)
* [CppReference: std::chrono](https://en.cppreference.com/w/cpp/chrono)

---

##  Author

**Hope Tesfalegn**
Trainee(Intern) @ iCog Labs | AI & Performance Optimization Enthusiast

---

##  License

This project is released under the MIT License.
