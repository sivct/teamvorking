#include "rm_minus_num.h"
#include "main.h"



void Negative_Numbers_Are_Equal_To_Zero(int32_t* arr, int32_t size) {
	std::cout << "¬ведите размер массива >> ";
	std::cin >> size;

	std::cout << "¬ведите все элементы массива >> ";
	for (size_t number{ 0 }; number < size; ++number) {
		std::cin >> arr[number];
	}

	int32_t posIndex{ 0 };

	for (size_t i{ 0 }; i < size; ++i) {
		if (arr[i] >= 0) {
			arr[posIndex++] = arr[i];
		}
	}

	for (size_t i = posIndex; i < size; ++i) {
		arr[i] = 0;
	}
}
