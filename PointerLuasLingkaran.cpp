#include <iostream>
using namespace std;

void nilai(int *y){
	cout << "Alamat Parameter : " << y << endl;
	cout << "Nilai Parameter : " << *y << endl;
}
void LuasLingkaran(int *jari){
	float phi = 3.14;
	float luas;
	
	luas = phi * *jari * *jari;
	cout << "Luas Lingkaran : " << luas << endl;
}

int main () {
	int jari;
	
	cout << "Masukan Jari Jari : ";
	cin >> jari;
	
	nilai(&jari);
	LuasLingkaran(&jari);
}
