// dop_optimized/PreSortByState.cpp
#include "../include/common.hpp"
#include <algorithm> // for std::sort
#include <random>    // for random state generation

bool is_active(EntityState state) {
    return state == ACTIVE;
}

bool is_sleeping(EntityState state) {
    return state == SLEEPING;
}

void run_pre_sort_by_state(int num_entities) {
    EnemiesWithState enemies;
    enemies.x.resize(num_entities);
    enemies.y.resize(num_entities);
    enemies.vx.resize(num_entities, 1.0f);
    enemies.vy.resize(num_entities, 1.0f);
    enemies.state.resize(num_entities);

    // Randomly assign states
    std::default_random_engine engine(42);
    std::uniform_int_distribution<int> dist(0, 2);

    for (int i = 0; i < num_entities; ++i) {
        enemies.state[i] = static_cast<EntityState>(dist(engine));
    }

    // Sorting: active first, then sleeping, then dead
    std::vector<int> indices(num_entities);
    std::iota(indices.begin(), indices.end(), 0);

    std::sort(indices.begin(), indices.end(), [&](int a, int b) {
        return enemies.state[a] < enemies.state[b]; // ACTIVE < SLEEPING < DEAD
    });

    // Timer start after sort
    Timer timer("PreSortByState");

    for (int i : indices) {
        if (enemies.state[i] == ACTIVE) {
            enemies.x[i] += enemies.vx[i];
            enemies.y[i] += enemies.vy[i];
        }
    }
}
