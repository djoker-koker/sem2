#include "../include/binary_insertion_sort.h"

template <typename T>
void binary_insertion_sort(vector<T> &vec)
{
    size_t len = vec.size();
    if (len <= 1)
        return;

    for (int i = 1; i < len; i++)
    {
        T key = vec[i];
        size_t left = 0;
        size_t right = i;
        while (left < right)
        {
            size_t mid = (left + right) / 2;
            if (key < vec[mid])
                right = mid;
            else
                left = mid + 1;
        }
        size_t pos = left;
        for (int j = i; j > left; j--)
        {
            vec[j] = vec[j - 1];
        }
        vec[left] = key;
    }
}

template void binary_insertion_sort<int>(vector<int> &vec);
template void binary_insertion_sort<double>(vector<double> &vec);
