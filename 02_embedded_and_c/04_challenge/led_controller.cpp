#include "led_controller.hpp"

LedController::LedController(){
    led_init();
}

void LedController::turnOn(){
    led_on();
}

void LedController::turnOff(){
    led_off();   
}

bool LedController::getState() const{
    return led_get_state();
}