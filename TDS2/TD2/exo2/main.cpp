#include <iostream>
#include <vector>
#include <algorithm>
#include "fonctions.hpp"

int main()
{
    std::vector<float> array{1., 2., 5., 7.4, 6.5, 6., 10.3, 8., 0.9};

    merge_sort(array);

    if (is_sorted(array))
    {
        std::cout << "Le tableau est trié" << std::endl;

        for (size_t i = 0; i < array.size(); i++)
        {
            std::cout << array[i] << ", ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Le tableau n'est pas trié" << std::endl;
    }
}