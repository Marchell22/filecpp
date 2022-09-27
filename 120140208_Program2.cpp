#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int n, maks, min;
	
	cout << "Masukan berapa data : ";
	cin >> n;
	
	float array [n] ;
	float jumlah;
	float rata=0;
	float ragam;
	float a=0;
	float simpangan_baku;
	float simpangan_rata;
	float b=0;
	float jangkauan;
	

	for ( int i = 0; i < n; i++){
		cout <<"Data ke-" << i+1 << " : ";
		cin >> array [i] ;
		
		jumlah = jumlah + array[i];
		
	}
	rata = jumlah / n ;
	
	cout << "Jumlah Semua Data : " << jumlah << endl;
	
	
	cout << "Rata - Rata : " << rata << endl;
	
	maks = array[0];
	min = array[0];
	for ( int i = 0; i < n; i++){
		if (array[i] > maks){
			maks = array[i];
		}else if ( array [i] < min){
			min = array[i];
		}
	}
	jangkauan = maks - min;
	cout << "Jangkauan : " << jangkauan <<endl;
	for ( int i = 0; i < n; i++){
		b = b + fabs((array[i]-rata));
	}
	simpangan_rata=b/n;
	
	cout << "simpangan Rata-Rata : " << simpangan_rata << endl;
	
	for ( int i = 0; i < n; i++){
		a = a + pow(array[i]- rata,2);
	}
	ragam = a / n;
	simpangan_baku = sqrt(ragam);
	
	cout << "Ragam : " << ragam << endl;
	cout << "Simpangan Baku : " << simpangan_baku << endl;
}
