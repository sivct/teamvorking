#include <iostream>
void Input_Size(int32_t&);
void Input_Array(int64_t*, int32_t&);
bool Check_Nat(int64_t);
void Check_Size(int32_t);



int main() {
	setlocale(LC_ALL, "Rus");
	const int32_t MAX_SIZE = 100, SECOND_MAX_SIZE{ 100 }, MAX{ MAX_SIZE + SECOND_MAX_SIZE };
	int32_t size{}, secondsize{}, switch_on{};
	int64_t arr[MAX_SIZE], secondarr[SECOND_MAX_SIZE], allarr[MAX];







	return 0;
}







void Input_Size(int32_t& size) {
	std::cout << "¬ведите размер массива >> ";
	std::cin >> size;
	Check_Size(size);
}

void Check_Size(int32_t size) {
	while (!Check_Nat(size)) {
		if (!Check_Nat(size)) {
			std::cout << "Size is not natural(((\n" << "Enter new nat size >> ";
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cin >> size;
		}
	}
}

void Input_Array(int64_t* arr, int32_t& size) {
	std::cout << "¬ведите все элементы массива >> ";
	for (size_t number{ 0 }; number < size; ++number) {
		std::cin >> arr[number];
		Check_Num(arr[number]);
	}
}

bool Check_Nat(int64_t num) {
	return num > 0;
}
