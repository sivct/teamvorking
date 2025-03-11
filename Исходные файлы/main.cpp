#include "main.h"
#include "Bouble_Sort.h"
#include "rm_minus_num.h"

int main() {
	setlocale(LC_ALL, "Rus");
	const int32_t MAX_SIZE = 100;
	int32_t size{};
	int64_t arr[MAX_SIZE];
	Input_Size(size);
	Check_Size(size);

	Input_Array(arr, size);
	Bouble_Sort(arr, size);
	Output_Arr(arr, size);





	return 0;
}


