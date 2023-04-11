#include <iostream>


template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void max_three(int& num1, int& num2, int& num3) {


	int max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3) ? num2 : num3;
	num1 = num2 = num3 = max;

}


int func_negg(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (*(arr + i) < 0)
			return *(arr + i);
	}
	return *arr;
}

void func_null(int* arr2, const int length2, int* arr3, const int length3) {
	for (int i = 0; i < length2; i++) {
		for (int j = 0; j < length3; j++)
			if (*(arr2 + i) == *(arr3 + j))
				*(arr3 + j) = 0;
	}
}


// Задача 1
int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Задача 1. \n";
	int a = 3, b = 5, c = 4;
	max_three(a, b, c);
	std::cout << a << " " << b << " " << c << std::endl << std::endl;

	//Задача 2
	std::cout << "Задача 2. \n";
	const int size = 5;
	int arr[size]{ 5, 6, -8, 0, 3 };
	print_arr(arr, size);
	std::cout << "Первый отрицательный эелемент массива: " << func_negg(arr, size);
	std::cout << std::endl << std::endl;

	// Задача 3
	std::cout << "Задача 3. \n";
	const int size2 = 8;
	const int size3 = 8;
	int arr2[size2]{ 5, 6, 8, 9, 2, 4, 56, 82 };
	int arr3[size3]{ 8, 45, 96, 12, 5, 3, 4, 6 };
	std::cout << "Массив 1: \n";
	print_arr(arr2, size2);
	std::cout << "Массив 2: \n";
	print_arr(arr3, size3);
	func_null(arr2, size2, arr3, size3);
	std::cout << "Итоговый массив: \n";
	print_arr(arr3, size3);



	return 0;

}