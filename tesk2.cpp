#include <iostream>
int main() {
	int size = 2;
	char arr[size];
	std::cout << "size: ";
	std::cin >> size;
	std::cout << "the elements of array which type is char" << " ";
	for (int i = 0;i < size;i++) {
		std::cin >> arr[i];
	}
	std::cout << "the reversed array is:" << " ";
	for (int i = size;i >= 0;i--) {
		std::cout << arr[i];
	}

	return 0;
}
