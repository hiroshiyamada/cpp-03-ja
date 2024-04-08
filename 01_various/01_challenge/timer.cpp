#include "timer.hpp"
#include <iostream>

Timer::Timer(){
    start_time = std::chrono::high_resolution_clock::now();
}

Timer::~Timer(){
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
    std::cout << duration.count() << " ms has passed." << std::endl;
}