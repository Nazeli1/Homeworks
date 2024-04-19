#include <iostream>
using namespace std;
int main() {
	int firstNum = 0, secondNum = 1, num = 0, size = 0, i = 0;
	cout << "size:";
	cin >> size;
	if (size == 1) {
		cout << size;
	}
	else {
		for (i = 1;i <= size;i++) {
			firstNum = 0;
			secondNum = 1;
			cout << secondNum << "\t";
			for (int j = 1;j < i;j++) {
				num = firstNum + secondNum;
				cout << num << '\t';
				firstNum = secondNum;
				secondNum = num;
			}
			cout << endl;
		}

	}
	return 0;
}