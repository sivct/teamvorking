#include <iostream>
#include "main.h"
#include "Bouble_Sort.h"
#include "rm_minus_num.h"
#include "MaxMinAverage.h"
#include "InsertSort.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int32_t size{};
	int16_t switch_on{};
	Input_Size(size);
	Check_Size(size);

	char arr_char[MAX_SIZE];
	char element_to_find{};

	double arr_doub[MAX_SIZE];
	double doub_element_to_find{};

	int32_t arr_int[MAX_SIZE];
	int32_t int_element_to_find{};

	char choise{};




	while (true) {
		std::cout << "[1]PrintArray, вывести элементы массива на консоль;\n[2]Функция FindElement для поиска элемента в массиве;\n"
			<< "[3]CountElements, которая ищет количество элементов между первым и последним нулевыми элементами в массиве;\n[4]MaxElement;\n"
			<< "[5]MinElement;\n[6]CalculateAverage, находит среднее арифметическое элементов между максимальным и минимальным элементами в массиве целых чисел;\n"
			<< "[7]Найти сумму всех простых чисел в массиве;\n[8]Сортировка массива пузырьком;\n[9]Поменять порядок элементов массива на обратный;\n"
			<< "[10]Удалить из массива все отрицательные числа;\n[11]Сортировка массива вставкой;\n[12]Очистить экран; \n[13]Выход.\n";
		std::cout << "Номер задачи == ";
		std::cin >> switch_on;

		switch (switch_on) {
		default:
			break;
		case 1:
			Input_your_choise(choise);

			switch (choise) {
			case 'c':
				PrintArray(arr_char, size);
				std::cout << std::endl;
				break;
			case 'd':
				PrintArray(arr_doub, size);
				std::cout << std::endl;
				break;
			case 'i':
				PrintArray(arr_int, size);
				std::cout << std::endl;
				break;
			default:
				break;
			}
			break;
		case 2:
			Input_your_choise(choise);

			switch (choise) {
			case 'c':
				Input_Size(size);
				Input_Array(arr_char, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_char, size);
				std::cout << std::endl;

				Input_Element_To_Find(element_to_find);
				std::cout << "position of element >> " << FindElement(arr_char, size, element_to_find) << "\n";
				break;
			case 'd':
				Input_Size(size);
				Input_Array(arr_doub, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_doub, size);
				std::cout << std::endl;

				Input_Element_To_Find(element_to_find);
				std::cout << "position of element >> " << FindElement(arr_doub, size, doub_element_to_find) << "\n";//2
				break;
			case 'i':
				Input_Size(size);
				Input_Array(arr_int, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_int, size);
				std::cout << std::endl;

				Input_Element_To_Find(element_to_find);
				std::cout << "position of element >> " << FindElement(arr_int, size, int_element_to_find) << "\n";
				break;
			default:
				break;
			}
			break;
		case 3:
			Input_your_choise(choise);

			switch (choise) {
			case 'c':
				Input_Size(size);
				Input_Array(arr_char, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_char, size);
				std::cout << std::endl;

				std::cout << "count of elements between nulls >> " << CountElements(arr_char, size) << "\n";
				break;
			case 'd':
				Input_Size(size);
				Input_Array(arr_doub, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_doub, size);
				std::cout << std::endl;

				std::cout << "count of elements between nulls >> " << CountElements(arr_doub, size) << "\n";
				break;
			case 'i':
				Input_Size(size);
				Input_Array(arr_int, size);

				std::cout << "your array >> " << "\n";
				PrintArray(arr_int, size);
				std::cout << std::endl;

				std::cout << "count of elements between nulls >> " << CountElements(arr_int, size) << "\n";
				break;
			default:
				break;
			}
			break;
		case 4:
			Input_Size(size);
			Input_Array(arr_int, size);
			std::cout << "MaxElement -- " << MaxElement(arr_int, size);
			break;
		case 5:
			Input_Size(size);
			Input_Array(arr_int, size);
			std::cout << "MinElement -- " << MinElement(arr_int, size);
			break;
		case 6:
			Input_Size(size);
			Input_Array(arr_int, size);
			std::cout << "Арифметическое элементов между максимальным и минимальным элементами в массиве целых чисел == " << CalculateAverage(arr_int, size);
			break;
		case 7:

			break;
		case 8:
			Input_Size(size);
			Input_Array(arr_int, size);
			Bouble_Sort(arr_int, size);
			break;
		case 9:

			break;
		case 10:
			Negative_Numbers_Are_Equal_To_Zero(arr_int, size);
			break;
		case 11:
			Input_Size(size);
			Input_Array(arr_int, size);
			insertionSort(arr_int, size);
			break;
		case 12:
			CLS();
			break;
		case 13:
			return 0;
		}
	}


	return 0;
}

