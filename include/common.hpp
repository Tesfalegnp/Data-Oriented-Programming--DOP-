// include/common.hpp
#pragma once
#include <iostream>
#include <vector>
#include <chrono>
#include <string>

class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    std::string label;
public:
    Timer(const std::string& name) : label(name) {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> ms = end - start;
        std::cout << label << ": " << ms.count() << " ms\n";
    }
};

struct Enemies {
    std::vector<float> x, y, vx, vy;
};

enum EntityState {
    ACTIVE,
    SLEEPING,
    DEAD
};

struct EnemiesWithState {
    std::vector<float> x, y, vx, vy;
    std::vector<EntityState> state;
};
