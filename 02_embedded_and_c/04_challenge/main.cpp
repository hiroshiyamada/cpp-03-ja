#include "led_controller.hpp"
#include <iostream>

int main(){
    LedController led;
    led.turnOn();
    std::cout << led.getState() << std::endl;
    led.turnOff();
    std::cout << led.getState() << std::endl;
    return 0;
}