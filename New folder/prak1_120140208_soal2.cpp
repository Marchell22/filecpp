#include <iostream>
using namespace std;

int main() {
	int x[200], n;
	int max = 0;
	float rata2;
	float sum;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x[i];
		if (x[i] > max) {
			max = x[i];
		}
	}
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + x[i];
	}
	rata2 = sum / n;

	cout << max << endl;
	cout << rata2 << endl;

}