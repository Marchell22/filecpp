//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal : 18 Maret 2021
//Deskripsi : Kumpulan Data Secara Terbalik
#include <iostream>
using namespace std;

struct mhs{
	string nama;
	string nim;
};
int main (){
	int n;
	
	cout<<"Masukkan Berapa data : ";
	cin>>n;
	
	mhs x[100];
	
	for(int i = 0; i < n; i++){
	cin>>x[i].nama>>x[i].nim;
	}
	cout <<"Data Mahasiswa:" << endl;
	for(int i = n-1; i >= 0; i--){
		cout << x[i].nama <<" " << x[i].nim << endl;
	}
}
