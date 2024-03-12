#include <vector>
#include <algorithm>
bool is_sorted(std::vector<int> const &vec) { return std::is_sorted(vec.begin(), vec.end()); }

// exercice 1
void bubble_sort(std::vector<int> &vec)
{
    if (!is_sorted(vec))
    {
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = 1; j < vec.size() - i; j++)
            {
                if (vec[j - 1] > vec[j])
                {
                    std::swap(vec[j - 1], vec[j]);
                }
            }
        }
    }
}

void selection_sort(std::vector<int> &vec)
{
    if (!is_sorted(vec))
    {
        for (int i = 0; i < vec.size() - 1; i++)
        {
            int min_vec = i;
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[j] < vec[min_vec])
                {
                    min_vec = j;
                }
                std::swap(vec[i], vec[min_vec]);
            }
        }
    }
}
