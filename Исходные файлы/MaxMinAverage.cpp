#include "main.h"
#include "MaxMinAverage.h"    

int32_t MaxElement(int32_t* arr, int32_t size) {
    int32_t maxIndex{};
    int32_t maxValue = arr[0];

    for (int32_t i { 1 }; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}


int32_t MinElement(int32_t* arr, int32_t size) {
    int32_t minIndex{};
    int32_t minValue = arr[0];

    for (int32_t i = { 1 }; i < size; ++i) {
        if (arr[i] > minValue) {
            minValue = arr[i];
            minIndex = { i };
        }
    }
    return minIndex;
}

double CalculateAverage(int32_t* arr, int32_t size) {
   int32_t maxIndex = { MaxElement( arr,size) };
   int32_t minIndex = { MinElement(arr,size) };
   return (arr[maxIndex] + arr[minIndex]) / 2;
}

