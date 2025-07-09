// oop_baseline/ClassTest.cpp
#include "../include/common.hpp"

class Enemy {
public:
    float x, y, vx, vy;
    void update() {
        x += vx;
        y += vy;
    }
};

void run_class_test(int num_entities) {
    std::vector<Enemy> enemies(num_entities);
    for (auto& e : enemies) {
        e.vx = 1.0f; e.vy = 1.0f;
    }

    Timer timer("ClassTest");
    for (auto& e : enemies) {
        e.update();
    }
}
