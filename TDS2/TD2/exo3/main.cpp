#include <iostream>
#include "fonctions.hpp"
#include "ScopedTimer.hpp"
#include <vector>
#include <cstdlib>
#include <algorithm>

std::vector<int> generate_random_vector(size_t const size, int const max = 100) {
    std::vector<int> vec(size);
    std::generate(vec.begin(), vec.end(), [&max]() { return std::rand() % max;} );
    return vec;
}

int main()
{
    std::vector<int> array;
    array = generate_random_vector(8, 10);
    
    // ScopedTimer<std::micro>  timer("temps normal");
    // std::sort(array.begin(), array.end());
    // 0.00216 ms

    ScopedTimer<std::micro>  timer("temps bubble");
    bubble_sort(array);
    // 0.005043 ms
    
}