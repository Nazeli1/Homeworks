#include <iostream>
using namespace std;
int main() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, max;
	cout << "num1=";
	cin >> num1;
	cout << "num2=";
	cin >> num2;
	cout << "num3=";
	cin >> num3;
	cout << "num4=";
	cin >> num4;
	if (num1 > num2 && num1 > num3 && num1 > num4)
		max = num1;
	else
		if (num2 > num1 && num2 > num3 && num2 > num4)
			max = num2;
		else
			if (num3 > num1 && num3 > num2 && num3 > num4)
				max = num3;
			else
				if (num4 > num1 && num4 > num2 && num4 > num3)
					max = num4;
	cout << "max=" << max;
	return 0;
}