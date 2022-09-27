//NIM:120140208
//Nama:Marchell Manurung
//Tanggal:26 November 2020
//Deskripsi:Kekuatan

#include <iostream>
using namespace std;
int kekuatan(int a, int b) {

	return a * b;

}
int main() {
	int n[3], angka = 10, a, power, t = 1;

	for (int i = 0; i < 3; i++) {
		cin >> n[i];
	}

	for (int j = 0; j < 3; j++) {
		a = n[j];
		power = kekuatan(angka, a);
		cout << angka << " x " << n[j] << " = " << power << endl;
		angka += 5;
		t *= power;
	}
	cout << "Total = " << t;

	return 0;
}