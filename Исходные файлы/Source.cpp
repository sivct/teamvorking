#include "main.h"

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

bool Check_Nat(int64_t num) {
	return num > 0;
}

void Input_your_choise(char& choise) {
	std::cout << "Input your choise (between 'c == char' , 'd == double' or 'i == int') >> ";
	std::cin >> choise;
}

void CLS() {
	std::cout << "’отите очистить экран?[y/n]: ";
	system("CLS");
}