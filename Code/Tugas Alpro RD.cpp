#include <iostream>
using namespace std;

int main() {
	int i, n, a, b, x, terkecil;
	float jumlah, sum, rata2ganjil, rata2genap;
	cout << "Masukkan banyak nilai : "; cin >> n;
	a = 0; b = 0; jum = 0; sum = 0;
	for (i = 1; i <= n; i++) {
		cout << "Masukkan nilai ke-" << i << " : ";
		cin >> x;
		if (i == 1) {
			terkecil = x;
		}
		else if (x < terkecil) {
			terkecil = x;
		}
		else {
		}
		if (x % 2 == 1) {
			a = a + 1;
			jumlah = jumlah + x;
		}
		else if (x % 2 == 0) {
			b = b + 1;
			sum = sum + x;
		}
	}
	rganjil = jumlah / a;
	rgenap = sum / b;
	cout << "Rata-rata bilangan ganjil adalah : " << rata2ganjil << endl;
	cout << "Rata-rata bilangan genap adalah : " << ratagenap << endl;
	cout << " bilangan terkecil = " << terkecil;
}