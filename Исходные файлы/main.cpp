#include "main.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int32_t size{};
	Input_Size(size);
	Check_Size(size);

	char arr_char[MAX_SIZE];
	char element_to_find{};

	double arr_doub[MAX_SIZE];
	double doub_element_to_find{};

	int32_t arr_int[MAX_SIZE];
	int32_t int_element_to_find{};

	char choise{};
	Input_your_choise(choise);

	switch (choise) {
	case 'c':
		Input_Array(arr_char, size);

		std::cout << "your array >> " << "\n";
		PrintArray(arr_char, size);//1
		std::cout << std::endl;

		Input_Element_To_Find(element_to_find);
		std::cout << "position of element >> " << FindElement(arr_char, size, element_to_find) << "\n";//2

		std::cout << "count of elements between nulls >> " << CountElements(arr_char, size) << "\n";//3
		system("pause");
	case 'd':
		Input_Array(arr_doub, size);

		std::cout << "your array >> " << "\n";
		PrintArray(arr_doub, size);//1
		std::cout << std::endl;

		Input_Element_To_Find(element_to_find);
		std::cout << "position of element >> " << FindElement(arr_doub, size, doub_element_to_find) << "\n";//2

		std::cout << "count of elements between nulls >> " << CountElements(arr_doub, size) << "\n";//3
		system("pause");
	case 'i':
		Input_Array(arr_int, size);

		std::cout << "your array >> " << "\n";
		PrintArray(arr_int, size);//1
		std::cout << std::endl;

		Input_Element_To_Find(element_to_find);
		std::cout << "position of element >> " << FindElement(arr_int, size, int_element_to_find) << "\n";//2


		std::cout << "count of elements between nulls >> " << CountElements(arr_int, size) << "\n";//3
		system("pause");
	default:
		std::cout << "choose between 'c' , 'd' or 'i'";
	}

	return 0;
}

