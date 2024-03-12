#include <iostream>
#include <vector>
#include "fonctions.hpp"

int main()
{
    std::vector<int> array{1, 2, 5, 4, 7, 6, 3, 8, 9};
    bubble_sort(array);
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

    std::vector<int> array2{1, 3, 5, 4, 9, 6, 2, 8, 7};
    selection_sort(array2);
    if (is_sorted(array2))
    {
        std::cout << "Le tableau est trié" << std::endl;

        for (size_t i = 0; i < array2.size(); i++)
        {
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Le tableau n'est pas trié" << std::endl;
    }
}