#include <iostream>
using namespace std;
int main() {
	const int n = 5;
	int A[n], i, max;
	for (i = 0;i < n;i++)
	{
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
	max = A[0];
	for (i = 1;i < n;i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	cout << "the max element is:" << max;
	return 0;
}