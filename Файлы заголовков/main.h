#ifndef MAIN_H
#define MAIN_H

#include <iostream>
const int32_t MAX_SIZE = 100;

void Input_your_choise(char&);
void Input_Size(int32_t&);
bool Check_Nat(int64_t);
void Check_Size(int32_t);
void Output_Arr(int64_t*, int32_t);
void CLS();

template <class T>
void Input_Array(T* arr, int32_t& size) {
	std::cout << "¬ведите все элементы массива >> ";
	for (size_t number{ 0 }; number < size; ++number) {
		std::cin >> arr[number];
	}
}

template <class T >
void Input_Element_To_Find(T& element) {
	std::cout << "¬ведите элемент массива, индекс которого хотите узнать >> ";
	std::cin >> element;
}

template <class T >//1
void PrintArray(T* array, int32_t size) {
	for (int32_t i{}; i < size; ++i) {
		std::cout << array[i] << ' ';
	}
}

template <class T >//2
int32_t FindElement(T* array, int32_t size, T element) {
	int32_t pruf{};
	int32_t position{};
	for (int32_t i{}; i < size; ++i) {
		if (array[i] == element) {
			position = i + 1;
			pruf += 1;
		}
	}
	if (pruf != 0) {
		return position;
	}
	else {
		return -1;
	}
}

template <class T >
int32_t Find_First_Null(T* array, int32_t size) {
	int32_t index_of_null{ -1 };
	for (int32_t i{}; i < size; ++i) {
		if (array[i] == 0 || array[i] == '0') {
			index_of_null = i;
			break;
		}
	}
	return index_of_null;
}
template <class T >
int32_t Find_Second_Null(T* array, int32_t size) {
	int32_t index_of_null{ -1 };
	for (int32_t i{}; i < size; ++i) {
		if (array[i] == 0 || array[i] == '0') {
			index_of_null = i;
		}
	}
	return index_of_null;
}


template <class T >//3
int32_t CountElements(T* array, int32_t size) {
	int32_t index_of_first_null{ Find_First_Null(array, size) };
	int32_t index_of_last_null{ Find_Second_Null(array, size) };
	int32_t count_of_null{ index_of_last_null - index_of_first_null - 1 };
	if (count_of_null == -1 || index_of_first_null == -1 || index_of_last_null == -1) {
		return -1;
	}
	else {
		return count_of_null;
	}
}

#endif
