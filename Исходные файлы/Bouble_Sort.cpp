#include "main.h"
#include "Bouble_Sort.h"



void Bouble_Sort(int64_t* arr, int32_t size) {
    for (size_t i = 0; i < size; ++i) {
        bool flag = true;
        for (int j = 0; j < size - (i + 1); j++) {
            if (arr[j] > arr[j + 1]) {
                flag = false;
                std::swap(arr[j], arr[j + 1]);
            }
        }
        if (flag) {
            break;
        }
    }
}
