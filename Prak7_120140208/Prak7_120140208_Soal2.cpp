//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal : 30 APRIL 2021
#include <iostream>
using namespace std;

struct mhs
{
	string nama;
	string kelamin;
	int nim;
	int nilai;
	string keterangan;
};
int main ()
{
	int n ;
	int cari;
	cin >> n;
	
	
	
	mhs x[100];
	
	for ( int i = 0; i < n; i++){
		cin >> x[i].nama >> x[i].nim >> x[i].kelamin >> x[i].nilai;
	}
	for ( int i = 0; i < n; i++){
		if (x[i].kelamin == "P"){
			x[i].kelamin = "Perempuan";
		} else if (x[i].kelamin == "L"){
			x[i].kelamin = "Laki-Laki";
		}
	}
	for ( int i = 0; i < n; i++){
		if (x[i].nilai >= 81){
			x[i].keterangan = "Sangat baik dan Lulus";
		}else if(x[i].nilai >= 61 && x[i].nilai <= 80){
			x[i].keterangan = "Baik dan Lulus";
		}else if(x[i].nilai >= 41 && x[i].nilai <= 60){
			x[i].keterangan = "Kurang baik dan Lulus";
		}else if(x[i].nilai >= 0 && x[i].nilai <= 40){
			x[i].keterangan = "Buruk dan Mengulang";
		}
	}
	cin >> cari;
	
	for ( int i = 0; i < n; i++){
		if (cari == x[i].nim){
			cout << "Nama : " << x[i].nama << endl;
			cout << "Jenis Kelamin : " << x[i].kelamin << endl;
			cout << "Keterangan : " << x[i].keterangan << endl;
			break;
		}
		else if ( cari != x[i].nim){
			if (i == n - 1){
				cout << "Data Tidak Ditemukan " << endl;
			}
		}
	}
}
