#include <iostream>
using namespace std;
int main() {
	int num = 0, digit = 0, revNum = 0;
	cout << "number :";
	cin >> num;
	while (num != 0) {
		digit = num % 10;
		num = num / 10;
		revNum = (revNum * 10) + digit;
	}
	cout << "Reverse number=" << revNum;
	return 0;
}