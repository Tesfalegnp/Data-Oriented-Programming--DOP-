// dop_struct_of_arrays/StructTest.cpp
#include "../include/common.hpp"

void run_struct_test(int num_entities) {
    Enemies enemies;
    enemies.x.resize(num_entities, 0.0f);
    enemies.y.resize(num_entities, 0.0f);
    enemies.vx.resize(num_entities, 1.0f);
    enemies.vy.resize(num_entities, 1.0f);

    Timer timer("StructTest");
    for (int i = 0; i < num_entities; ++i) {
        enemies.x[i] += enemies.vx[i];
        enemies.y[i] += enemies.vy[i];
    }
}
