#include "dimad.h"

void reverseArray(int32_t* arr, int32_t size) {
    int32_t start { 0 };
    int32_t end { size - 1 };

    while (start < end) {
        int32_t temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}


bool isPrime(int32_t num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int32_t i{ 0 }; i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int32_t sumOfPrimes(int32_t* arr, int32_t size) {
    int32_t sum{ 0 };
    for (int32_t i{ 0 }; i < size; ++i) {
        if (isPrime(arr[i])==true) {
            sum += arr[i];
        }
    }
    return sum;
}

