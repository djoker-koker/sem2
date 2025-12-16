#include "../include/shaker_sort.h"

template <typename T>
void shaker_sort(vector<T> &vec)
{
    size_t len = vec.size();
    if (len <= 1)
        return;

    size_t left = 0;
    size_t right = len - 1;
    bool flag = true;
    while (left < right && flag)
    {
        flag = false;
        for (int i = left; i < right; i++)
        {
            if (vec[i] > vec[i + 1])
            {
                swap(vec[i], vec[i + 1]);
                flag = true;
            }
        }
        right--;
        for (int j = right; j > left; j--)
        {
            if (vec[j] < vec[j - 1])
            {
                swap(vec[j], vec[j - 1]);
                flag = true;
            }
        }
        left++;
    }
}

template void shaker_sort<int>(vector<int> &vec);
template void shaker_sort<double>(vector<double> &vec);
