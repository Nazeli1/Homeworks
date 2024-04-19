#include <iostream>
int main() {
	const int size = 3;
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "the reversed 2D array:" << std::endl;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
int main() {
	const int size = 3;
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "the reversed 2D array:" << std::endl;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}