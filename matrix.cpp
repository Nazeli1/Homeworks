#include &lt;iostream&gt;
void Spiral(int arr[][4], int rows, int cols) {
	int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
	int d = 0;
	while (top& lt; = bottom & amp;&amp; left & lt; = right) {
		if (d == 0) {
			for (int i = left; i & lt; = right; i++)
				std::cout& lt;&lt; arr[top][i] & lt;&lt; &quot; &quot;;
			top++;
		}
		else if (d == 1) {
			for (int i = top; i & lt; = bottom; ++i)
				std::cout& lt;&lt; arr[i][right] & lt;&lt; &quot; &quot;;
			right--;
		}
		else if (d == 2) {
			for (int i = right; i & gt; = left; i--)
				std::cout& lt;&lt; arr[bottom][i] & lt;&lt; &quot; &quot;;
			bottom--;
		}
		else if (d == 3) {
			for (int i = bottom; i & gt; = top; --i)
				std::cout& lt;&lt; arr[i][left] & lt;&lt; &quot; &quot;;
			left++;
		}
		d = (d + 1) % 4;
	}
}
int main() {
	int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	const int n = 4;
	const int m = 4;
	Spiral(arr, n, m);
	return 0;
}
