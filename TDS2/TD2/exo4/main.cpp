#include <iostream>
#include <vector>
#include <algorithm>

int search(std::vector<int> &vec, int const left, int const right, int const value) // value est la valeur recherchée
{
    int middle = (left + right) / 2;
    if (left > right)
    {
        return -1;
    }
    else if (vec[middle] < value)
    {
        return search(vec, middle + 1, right, value);
    }
    else if (vec[middle] > value)
    {
        return search(vec, left, middle - 1, value);
    }
    else if (vec[middle] == value)
    {
        return vec[middle];
    }
    return -1;
}

void dichotomy(std::vector<int> array, int const value)
{
    std::sort(array.begin(), array.end());
    std::cout << std::endl;
    std::cout << search(array, 0, array.size() - 1, value);
}

int main()
{
    dichotomy({1, 2, 2, 3, 4, 8, 12}, 8);
    dichotomy({1, 2, 3, 3, 6, 14, 12, 15}, 15);
    dichotomy({2, 2, 3, 4, 5, 8, 12, 15, 16}, 16);
    dichotomy({5, 6, 7, 8, 9, 10, 11, 12, 13}, 6);
    dichotomy({1, 2, 3, 4, 5, 6, 7, 8, 9}, 10);
}