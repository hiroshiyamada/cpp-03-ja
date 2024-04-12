#include "temperature_sensor.hpp"

class CabinTemperature : public TemperatureSensor{
    public:
        temperature::kelvin read();
};