#include "traffic_light.hpp"

int trafficLightDuration(TrafficLightState state){
    if(state == TrafficLightState::green){
        return 10;
    }else if (state == TrafficLightState::red){
        return 20;
    }else if (state == TrafficLightState::yellow){
        return 30;
    }
    return 0;
}