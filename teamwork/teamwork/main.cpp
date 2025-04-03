#include <iostream>
#include "main.h"
#include "Bouble_Sort.h"
#include "rm_minus_num.h"
#include "MaxMinAverage.h"
#include "InsertSort.h"
#include "dimad.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int32_t size{};
	uint16_t switch_on{};
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
		std::cout << "[1]PrintArray, âûâåñòè ýëåìåíòû ìàññèâà íà êîíñîëü;\n[2]Ôóíêöèÿ FindElement äëÿ ïîèñêà ýëåìåíòà â ìàññèâå;\n"
			<< "[3]CountElements, êîòîðàÿ èùåò êîëè÷åñòâî ýëåìåíòîâ ìåæäó ïåðâûì è ïîñëåäíèì íóëåâûìè ýëåìåíòàìè â ìàññèâå;\n[4]MaxElement;\n"
			<< "[5]MinElement;\n[6]CalculateAverage, íàõîäèò ñðåäíåå àðèôìåòè÷åñêîå ýëåìåíòîâ ìåæäó ìàêñèìàëüíûì è ìèíèìàëüíûì ýëåìåíòàìè â ìàññèâå öåëûõ ÷èñåë;\n"
			<< "[7]Íàéòè ñóììó âñåõ ïðîñòûõ ÷èñåë â ìàññèâå;\n[8]Ñîðòèðîâêà ìàññèâà ïóçûðüêîì;\n[9]Ïîìåíÿòü ïîðÿäîê ýëåìåíòîâ ìàññèâà íà îáðàòíûé;\n"
			<< "[10]Óäàëèòü èç ìàññèâà âñå îòðèöàòåëüíûå ÷èñëà;\n[11]Ñîðòèðîâêà ìàññèâà âñòàâêîé;\n[12]Î÷èñòèòü ýêðàí; \n[13]Âûõîä.\n";
		std::cout << "Íîìåð çàäà÷è == ";
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
			std::cout << "Àðèôìåòè÷åñêîå ýëåìåíòîâ ìåæäó ìàêñèìàëüíûì è ìèíèìàëüíûì ýëåìåíòàìè â ìàññèâå öåëûõ ÷èñåë == " << CalculateAverage(arr_int, size);
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

