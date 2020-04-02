#include <iostream>
using namespace std;
int Max(int n, int a[]) {
	int sum = 0, j = 0;
	for (int i = 0; i < n; i++) {
		if (j > 0) {
			j += a[i];
		}
		else j = a[i];
		if (j > sum) {
			sum = j;
		}
	}
	return sum;
}
int main() {
	int n;
	int a[10000];
	cin >> n;
	while (n != EOF)
	{
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << Max(n, a);
		cin >> n;
	}
}
