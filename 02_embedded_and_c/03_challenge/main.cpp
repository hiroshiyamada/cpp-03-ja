#include "traffic_light.hpp"
#include "clamp.hpp"
#include "constexpr.hpp"
#include <iostream>

int main(){
    std::cout << trafficLightDuration(TrafficLightState::green) << std::endl;
    std::cout << clamp(10, 5, 30) << std::endl;
    std::cout << calculateCircumference(10) << std::endl;
    return 0;
}