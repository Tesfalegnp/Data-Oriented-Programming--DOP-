// benchmarks/benchmark_runner.cpp
#include "../oop_baseline/ClassTest.cpp"
#include "../dop_struct_of_arrays/StructTest.cpp"
#include "../dop_optimized/StructTest2.cpp"
#include "../dop_optimized/SwapBackDeletion.cpp"

int main() {
    const int num_entities = 1'000'000;

    run_class_test(num_entities);
    run_struct_test(num_entities);
    run_struct_test2(num_entities);
    run_swap_back_deletion();

    return 0;
}
