#include <iostream>
bool function(int arr[][3], int rows, int cols, int targetRow, int targetCol) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (i != targetRow || j != targetCol) {
				if (arr[i][j] == arr[targetRow][targetCol]) {
					return true;
				}
			}
		}
	}
	return false;
}
int main() {
	int arr[3][3] = { 11, 22, 3, 54, 5, 11, 17, 22, 19 };
	int rows = 3;
	int cols = 3;
	std::cout << "Non-repeating elements is: ";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (!function(arr, rows, cols, i, j)) {
				std::cout << arr[i][j] << " ";
			}
		}
	}
	return 0;
}