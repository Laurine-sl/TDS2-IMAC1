#pragma once
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> const &vec);

void bubble_sort(std::vector<int> &vec);
void selection_sort(std::vector<int> &vec);
void merge_sort_merge(std::vector<float> &vec, size_t const left, size_t const middle, size_t const right);
void merge_sort(std::vector<float> &vec, size_t const left, size_t const right);
void merge_sort(std::vector<float> &vec);