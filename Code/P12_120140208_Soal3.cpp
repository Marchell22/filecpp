// NIM: 120140208
// Nama :Marchell Manurung
// Tanggal : 13 November 2020
// Deskripsi : Covid

#include<iostream>
using namespace std;

int main() {
	int kasus;

	cin >> kasus;

	if (kasus > 10) {
		cout << "Zona Merah" << endl;
	}
	else if (kasus > 0) {
		cout << "Zona Kuning" << endl;
	}
	else {
		cout << "Zona Hijau" << endl;
	}

}