#include <iostream>
using namespace std;
/* 	V -> Tegangan
	Rs -> Hambatan seri
	Rp -> Hambatan paralel
	I -> Kuat Arus 
*/
float V, Rs, Rp, I;


void Pararel(int n){
	float nilai, jumlah = 0;
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai ke-" << i+1 <<" : ";
		cin >> nilai;
		jumlah += 1.0 / nilai;
	}
	jumlah = 1.0/jumlah;
	cout<<"Jumlah nilai hambatannya : "<<jumlah<<endl;
	Rp=jumlah;
}
void Seri( int n){
	float nilai, jumlah = 0;
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai ke-" << i+1 <<" : ";
		cin >> nilai;
		jumlah +=  nilai;
	}
	
	cout<<"Jumlah nilai hambatannya : "<< jumlah << endl;
	Rs=jumlah;
}
void tegangan( int n){
	float nilai, jumlah = 0;
	for(int i = 0; i < n; i++){
		cout << "Masukkan nilai ke-" << i+1 <<" : ";
		cin >> nilai;
		jumlah +=  nilai;
	}
	
	cout<<"Jumlah nilai tegangannya : "<< jumlah << endl;
	V=jumlah;
}
void total( float I, float Rp, float Rs, float v){
	I = V / ( Rs + Rp);
	cout << "Nilai kuat arus pada Amperemeter adalah : " << I << endl;
}
int main() {
	int n;

	cout << "Berapa jumlah hambatan tersusun pararel : ";
	cin >> n;
	Pararel(n);
	cout <<endl;
	
	cout << "Berapa jumlah hambatan tersusun seri : ";
	cin >> n;
	Seri(n);
	cout <<endl;
		
	cout << "Berapa jumlah baterai tersusun seri : ";
	cin >> n;
	tegangan(n);
	cout << endl;
	
	total(I, Rp, Rs, V);
}
