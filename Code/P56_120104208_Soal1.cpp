//NIM:12014028
//Nama: Marchell Manurung
//Tanggal :26 November 2020
//Deskripsi : EXO

#include <iostream>
using namespace std;

int main() {

	int l, p;

	cin >> l >> p;

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < p; j++) {
			if ((i + j) % 2 == 0) {
				cout << "x ";
			}
			else {
				cout << "o ";
			}
		}
		cout << "\n";
	}
	return 0;
}