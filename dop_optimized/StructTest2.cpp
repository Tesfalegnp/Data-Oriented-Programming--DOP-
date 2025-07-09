// dop_optimized/StructTest2.cpp
#include "../include/common.hpp"

void run_struct_test2(int num_entities) {
    Enemies enemies;
    enemies.x.resize(num_entities, 0.0f);
    enemies.y.resize(num_entities, 0.0f);
    enemies.vx.resize(num_entities, 1.0f);
    enemies.vy.resize(num_entities, 1.0f);

    const float common_dx = 1.0f;
    const float common_dy = 1.0f;

    Timer timer("StructTest2");
    for (int i = 0; i < num_entities; ++i) {
        enemies.x[i] += common_dx; // Hoisted invariant
        enemies.y[i] += common_dy;
    }
}
