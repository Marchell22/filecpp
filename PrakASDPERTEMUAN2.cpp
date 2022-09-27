#include <iostream>
using namespace std;

void invers(float *a, float *b, float *c, float *d, float *hasil ){
	
	float temp;
	/*Pertukaran Tempat */		
	temp = *a;
	*a = *d;
	*d = temp;
		
	*b = (-1 * *b);
	*c = (-1 * *c);
	
	*a /= *hasil;
	*b /= *hasil;
	*c /= *hasil;
	*d /= *hasil; 
}

int main () {
	float matriks [2][2];
	cout <<"Masukkan Nilai :" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Matriks [" << i << "][" << j << "] = ";
			cin >> matriks[i][j];
		}	
	}
	

	float a = matriks[0][0];
	float b = matriks[0][1];
	float c = matriks[1][0];
	float d = matriks[1][1];
	
	cout << endl;
	
	float hasil = (a * d) - (b * c);


	
	cout <<"Matriks biasa : " << endl;
	cout << a << " " << b << endl << endl;
	cout << c << " " << d << endl << endl;
	
	if(hasil == 0){
		cout << "Tidak memiliki invers " << endl;

	}else {
		invers(&a, &b, &c, &d, &hasil);
		cout <<"Matriks invers : " << endl;
		cout << a << " " << b << endl << endl;
		cout << c << " " << d << endl << endl;
	
	}
}
