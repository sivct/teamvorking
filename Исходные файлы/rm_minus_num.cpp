#include "rm_minus_num.h"
#include "main.h"
void Swap_Allements_Of_Array(int64_t*, int32_t, int32_t);



void Negative_Numbers_Are_Equal_To_Zero(int64_t* arr, int32_t size) {
	void Input_Size(int32_t&);
	void Input_Array(int64_t*, int32_t&);

	for (size_t number{ 0 }; number < size; ++number) {
		if (arr[number] < 0) {
			int64_t temp{ arr[size - 1] };
			for (arr[number]; arr[number] < size; ++arr[number]) {
				Swap_Allements_Of_Array(arr, arr[number], arr[number] - 1);
			}
			arr[size - 1] = temp;
		}
	}

	for (size_t number{ 0 }; number < size; ++number) {
		if (arr[number] < 0) {
			arr[number] = 0;
		}
	}
}

void Swap_Allements_Of_Array(int64_t* arr, int32_t firstellement, int32_t secondellement) {
	int64_t temp{ arr[firstellement] };
	arr[firstellement] = arr[secondellement];
	arr[secondellement] = temp;
}
