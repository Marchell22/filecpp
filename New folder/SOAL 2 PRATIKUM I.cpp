#include <iostream>
using namespace std;

int main() {
	int n;
	int usia[100];
	int max = 0;
	float rata;
	float sum;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> usia[i];
		if (usia[i] > max) {
			max = usia[i];
		}
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + usia[i];
		}
	}rata = sum / n;
	cout << sum << endl;
	cout << max << endl;
	cout << rata;

	return 0;
}