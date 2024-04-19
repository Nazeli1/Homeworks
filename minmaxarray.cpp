#include <iostream>
#define max(a,b) (a>b? a:b)
#define min(a,b) (a<b? a:b)
//using namespace std;
int main() {
	const long int n = 5;
	long long int arr[n], max_value = 0, min_value = 0;
	for (int i = 0;i < n;i++) {
		std::cout << "arr[" << i << "]=";
		std::cin >> arr[i];
	}
	max_value = arr[0];
	min_value = arr[0];
	for (int i = 1;i < n;i++) {
		max_value = max(arr[i], max_value);
		min_value = min(arr[i], min_value);
	}
	std::cout << "the max element of array :" << max_value << std::endl;
	std::cout << "the min element in array:" << min_value;
	return 0;
}