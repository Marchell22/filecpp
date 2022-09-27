//NIM:120140208
//Nama:MArchell Manurung
//Tanggal:3 Desember 2020
//Deskripsi: Prima


#include <iostream>
using namespace std;

int get(int bil, int i) {
	if (i == 1) {
		return 1;
	}
	else if (bil % i == 0) {
		return 1 + get(bil, --i);
	}
	else {
		return 0 + get(bil, --i);
	}
}

int check(int bil) {
	if (bil > 1) {
		return (get(bil, bil) == 2);
	}
	else
		return false;
}

int main() {

	int bil;
	cin >> bil;

	if (check(bil)) {
		cout << "Prima" << endl;
	}
	else {
		cout << "Bukan Prima" << endl;
	}
	return 0;
}
