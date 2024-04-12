#include "double_array.h"
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    double_array(arr.data(), arr.size());
    return 0;
}