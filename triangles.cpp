#include<iostream>                                                 
using namespace std;
int main() {
	int size;
	char symbol;
	cout << "size=";
	cin >> size;
	cout << "symbol:";
	cin >> symbol;
	for (int i = 1;i <= size;i++) {
		for (int j = 1;j <= i;j++) {
			cout << symbol << '\t';
		}
		cout << endl;
	}

	return 0;
}