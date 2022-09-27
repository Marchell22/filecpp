#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	int arit;
	int hasil;

	cout << "Angka Pertama =";
	cin >> x;
	cout << "Angka Kedua =";
	cin >> y;
	cout << "Pengoperasian Aritmatika :";
	cin >> arit;

	if (arit == 1) {
		hasil = x + y;
		cout << "Hasil =" << hasil;
	}
	else if (arit == 2) {
		hasil = x - y;
		cout << "Hasil =" << hasil;
	}
	else if (arit == 3) {
		hasil = x * y;
		cout << "Hasil =" << hasil;
	}
	else if (arit == 4) {
		hasil = x / y;
		cout << "Hasil =" << hasil;
	}
	else {
		cout << "Kesalahan memasukkan pilihan";
	}
}
