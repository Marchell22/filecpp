//NIM:!20140208
//Nama:Marchell Manurung
//Tanggal:19 November 2020
//Deskripsi:Masalah FW
#include <iostream>
using namespace std;


int main() {
	string kata, anjay, selesai;
	anjay = "anjay";
	selesai = "selesai";
	int i = 0;
	while (i < 1) {
		cin >> kata;

		if (kata == anjay) {
			cout << "Anda  mengucapkan kata terlarang";
			i++;
		}
		else if (kata == selesai) {
			cout << "Anda tidak mengucapkan kata terlarang";
			i++;
		}
	}
}