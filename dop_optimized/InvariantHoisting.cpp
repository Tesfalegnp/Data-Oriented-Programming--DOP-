// dop_optimized/InvariantHoisting.cpp
#include "../include/common.hpp"
#include <cmath> // for sqrt()

void run_invariant_hoisting(int num_entities) {
    Enemies enemies;
    enemies.x.resize(num_entities, 0.0f);
    enemies.y.resize(num_entities, 0.0f);
    enemies.vx.resize(num_entities, 1.0f);
    enemies.vy.resize(num_entities, 1.0f);

    // Let's say the player is at a fixed position
    const float player_x = 500.0f;
    const float player_y = 500.0f;

    // ❌ BEFORE (inefficient): calculate dx, dy, distance INSIDE the loop
    // ✅ AFTER (hoisting): precompute fixed distance values
    const float dx = player_x - 0.0f;
    const float dy = player_y - 0.0f;
    const float distance = std::sqrt(dx * dx + dy * dy); // hoisted

    Timer timer("InvariantHoisting");

    for (int i = 0; i < num_entities; ++i) {
        // Instead of recomputing dx, dy, distance here for each entity
        enemies.x[i] += enemies.vx[i] + dx / distance;
        enemies.y[i] += enemies.vy[i] + dy / distance;
    }
}
