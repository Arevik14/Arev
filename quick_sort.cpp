// quick_sort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
void sort(int *arr, int size) {
	int i = 0;
	int j = size - 1;
	int middle = arr[size / 2];
	do {
		while (arr[i] < middle)
			i++;
		while (arr[j] > middle)
			j--;

		if (i <= j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	 
	if (j > 0)
		sort(arr, j + 1);
	if (i < size )
		sort(&arr[i], size-i);
}
int main()
{
	int const n = 12;
		int arr[n];
	std::cout << "input array of "<<n<<" elements"<<std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	sort(arr, n);
	std::cout << "Sorted array" <<std::endl;
	for (int i = 0; i < n; i++)
		std::cout << arr[i]<<"    ";
    return 0;
}

