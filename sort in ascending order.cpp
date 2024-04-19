#include <iostream>
void function(int* arr, int size1) {
	for (int i = 0;i < size1;i++) {
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];
	}
}
int main() {
	const int size = 5;
	int arr[size], min_value = 0;
	function(arr, size);
	for (int i = 0;i < size - 1;i++) {
		for (int j = 0;j < size - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				min_value = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = min_value;
			}
		}
	}
	for (int i = 0;i < size;i++) {
		std::cout << arr[i] << "\t";
	}
	return 0;
}