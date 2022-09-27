//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal : 05 Maret 2021
//Deskripsi : Anak Ayam
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		if (i > 1) {
			cout << "Tek kotek kotek kotek anak ayam turun " << i << endl;
			cout << "Tek kotek kotek kotek mati 1 tinggal " << i - 1 << endl;
		}
		else {
			cout << "Tek kotek kotek kotek anak ayam turun " << i << endl;
			cout << "Tek kotek kotek kotek mati 1 tinggal induknya" << endl;
		}
	}
}
