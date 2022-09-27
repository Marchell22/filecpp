//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal : 30 APRIL 2021
#include <iostream>
using namespace std;

int main () 
{
	int n;
	
	cin >> n;
	
	int x[n];
	
	int cari [100];
	int hasil [100];
	
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}
	for ( int i = 0; i < 100; i++){
		cin >> cari [i] ;
		if( cari [i] == -999){
			break;
		}
	}
	for ( int j = 0; j < 100; j++){
		hasil [j] = 0;
	}
	for ( int j = 0; j < 100; j++){
		for ( int i = 0; i < n; i++){
			if ( x[i] == cari [j] ){
				hasil [j] = hasil [j] + 1; 
			}
		}
	}
	for(int j = 0; j < 100; j++){
		if(hasil[j] > 0){
			cout << "Bilangan " << cari[j] << " ditemukan sebanyak " << hasil[j] << " kali" << endl;
		}else if(cari[j] == -999){
			return 0;	
		}else {
			cout << "Bilangan " << cari[j] << " tidak ditemukan" << endl;
		}
	}
}
