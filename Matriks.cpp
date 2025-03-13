#include <iostream>
using namespace std;

int main(){
	int x, y;
	// x  = baris dan y = kolom
	cout << "Masukan panjang baris : ";
	cin >> x;
	cout << "Masukan Panjang kolom : ";
	cin >> y;
	cout << "Matriks [" << x << "][" << y<< "]" << endl;
	int array[x][y];
	int arrayKedua[x][y];
	cout << "Matriks Pertama" << endl;
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolom
			cout << "Data Matriks [" << i << "][" << j << "] : ";
			cin >> array[i][j]; //fungsi cin disini bertujuan untuk masukan berupa data matriks
		}
	}
	cout << "Data Matriks Pertama" << endl;
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolomcout << "Data Matriks [" << i << "][" << j << "] : ";
			cout << "Data Matriks [" << i << "][" << j << "] : " << array[i][j] << endl; //fungsi endl berupa agar output masuk ke garis baru
		}
	}
	cout << "Matriks Kedua" << endl;
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolom
			cout << "Data Matriks [" << i << "][" << j << "] : ";
			cin >> arrayKedua[i][j]; //fungsi cin disini bertujuan untuk masukan berupa data matriks
		}
	}
	cout << "Data Matriks Kedua" << endl;
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolomcout << "Data Matriks [" << i << "][" << j << "] : ";
			cout << "Data Matriks [" << i << "][" << j << "] : " << arrayKedua[i][j] << endl; //fungsi endl berupa agar output masuk ke garis baru
		}
	}
	cout << "Penjumlahan Matriks" << endl;
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolom
			cout << "Pejumlahan matriks [" << i << "]["<< j << "] : " << array[i][j] << " + " << arrayKedua[i][j] << endl;
		}
	}
	for(int i = 1; i <= x; i++){ // Untuk perulangan baris
		for(int j = 1; j <= y; j++ ){ // untuk perulangan kolomcout << "Data Matriks [" << i << "][" << j << "] : ";
			cout << "Data Matriks Penjumlaha [" << i << "][" << j << "] : " << array[i][j] + arrayKedua[i][j] << endl; //fungsi endl berupa agar output masuk ke garis baru
		}
	}
	
}
