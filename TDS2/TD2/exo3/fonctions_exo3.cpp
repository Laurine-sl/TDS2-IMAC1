#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> const &vec)
{
    return std::is_sorted(vec.begin(), vec.end());
}

//bubble sort
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

//selection sort
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

void merge_sort_merge(std::vector<float> &vec, size_t const left, size_t const middle, size_t const right)
{   
    size_t const left_size{middle - left + 1};
    size_t const right_size{right - middle};
    std::vector<float> left_vec(vec.begin() + left, vec.begin() + middle + 1);
    std::vector<float> right_vec(vec.begin() + middle + 1, vec.begin() + right + 1);
    size_t left_index{0};
    size_t right_index{0};

    size_t index{left};
     while (left_index < left_size && right_index < right_size)
    {
        if (left_vec[left_index] < right_vec[right_index])
        {
            vec[index] = left_vec[left_index];
            ++left_index;
        }
        else
        {
            vec[index] = right_vec[right_index];
            ++right_index;
        }
        ++index;
    }
    while (left_index < left_size)
    {
        vec[index] = left_vec[left_index];
        ++index;
        ++left_index;
    }
    while (right_index < right_size)
    {
        vec[index] = right_vec[right_index];
        ++index;
        ++right_index;
    }
}
void merge_sort(std::vector<float> &vec, size_t const left, size_t const right)
{
    if (left >= right)
    {
        return;
    }
    int middle = left + (right - left) / 2;
    merge_sort(vec, left, middle);
    merge_sort(vec, middle + 1, right);
    merge_sort_merge(vec, left, middle, right);
}

void merge_sort(std::vector<float> &vec)
{
    merge_sort(vec, 0, vec.size() - 1);
}
