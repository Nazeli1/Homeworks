#include <iostream>
int main() {
	int size = 5, num = 0;
	int arr[size];
	std::cout << "num:";
	std::cin >> num;
	std::cout << "size:";
	std::cin >> size;
	for (int i = 0;i < size;i++) {
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];
	}
	for (int i = 0;i < size;i++) {
		for (int j = i + 1;j < size;j++) {
			if (num == arr[i] + arr[j]) {
				std::cout << arr[i] << "\t" << arr[j];
			}
		}
	}
	return 0;
}