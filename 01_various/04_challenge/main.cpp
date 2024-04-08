#include "unique_ptr.hpp"
#include <iostream>

int main(){
    unique_int_ptr my_int(3);
    std::cout << *my_int << std::endl;

    unique_ptr<float> my_float(5.0);
    std::cout << *my_float << std::endl;
    return 0;
}