#include <iostream>
using namespace std;
int Max(int n, int *a) {
	int sum = 0, b = 0;
	for (int i = 1; i <= n; i++) {
		if (b > 0) {
			b += a[i];
		}
		else b = a[i];
		if (b > sum) {
			sum = b;
		}

	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	while (n != EOF)
	{
		int a[10000];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		cout << Max(n, a);
		cin >> n;
	}
}
