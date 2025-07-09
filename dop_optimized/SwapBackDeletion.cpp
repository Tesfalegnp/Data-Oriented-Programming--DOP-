// dop_optimized/SwapBackDeletion.cpp
#include "../include/common.hpp"

void run_swap_back_deletion() {
    std::vector<int> health = { 100, 20, 0, 50 };
    Timer timer("SwapBackDeletion");

    for (size_t i = 0; i < health.size();) {
        if (health[i] <= 0) {
            health[i] = health.back(); // Swap back
            health.pop_back();
        } else {
            ++i;
        }
    }
}
