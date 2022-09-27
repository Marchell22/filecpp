/*
	Nama : Marchell Manurung
	NIM  : 120140208
	TANGGAL : 06 MEI 2021	
*/
#include <iostream>
using namespace std;

void tukar(float *a , float *b){
	float c = *a;
	*a = *b;
	*b = c;
}
void tukar2( int *x , int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void tukar3 ( string *o , string *p){
	string tem = *o;
	*o = *p;
	*p = tem;
}

int main () {
	int n , cari , rank ;
	
	cin >> n;
	int m =n;
	string nama[n];
	int nim[n];
	float ipk[n];
	
	for( int i = 0; i < n; i++){
		cin >> nama[i] >> nim[i] >> ipk[i];
	}
	for ( int i = 0; i < n; i++ ){
		for ( int j = 0; j < n - 1; j++){
			if(ipk[i] < ipk[j]){
				tukar(&ipk[i] , &ipk[j]);
				tukar2(&nim[i] , &nim[j]);
				tukar3(&nama[i], &nama[j]);
			}
		}
	}
	cin >> cari;
	for ( int i = 0; i < n; i++){
		cout << nama[i] << " " << nim[i] << " " << ipk[i] << endl;
	}
	
	for ( int i = 0; i < n; i++){
		if(cari == nim[i]){
			rank = m;
			cout << rank << endl;
		}else if( cari != nim[i]){
			m = m - 1;
			cout << m << endl;
		}
	}	
	for ( int i = 0; i < n; i++){
		if( cari == nim [i]){
			cout << nama[i] << " " << rank << endl;
		}
	}
}
