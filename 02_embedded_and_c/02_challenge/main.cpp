#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "tire_pressure.hpp"
#include <iostream>


int main(){
    CPUTemperature cpu;
    using FunctionType = decltype(&CPUTemperature::read);
    std::cout << cpu.read().value << std::endl;
    CabinTemperature cabin;
    std::cout << cabin.read().value << std::endl;
    TirePressure tire;
    std::cout << tire.read().value << std::endl;
    return 0;
}