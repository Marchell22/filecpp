/*
	Nama : Marchell Manurung
	NIM  : 120140208
	TANGGAL : 17 MEI 2021	
*/

#include <iostream>
using namespace std;

void merge(float ipk[],string nama[], int nim[],  int l, int m, int r){
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int Lnim[n1], Rnim[n2];
	string Lnama[n1], Rnama[n2];
	float Lipk[n1], Ripk[n2];
	 
	for (int i = 0; i < n1; i++){
        Lipk[i] = ipk[l + i];
        Lnama[i] = nama[l + i];
        Lnim[i] = nim[l + i];
    }
	for (int j = 0; j < n2; j++){
        Ripk[j] = ipk[m + 1 + j];
        Rnama[j] = nama[m + 1 + j];
        Rnim[j] = nim[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    
    while (i < n1 && j < n2) {
        if (Lipk[i] <= Ripk[j]) {
            ipk[k] = Lipk[i];
            nama[k] = Lnama[i];
            nim[k] = Lnim[i];
            i++;
        } else {
            ipk[k] = Ripk[i];
            nama[k] = Rnama[i];
            nim[k] = Rnim[i];
            j++;
        }
        k++;
    }
    while (i < n1) {
        ipk[k] = Lipk[i];
        nama[k] = Lnama[i];
        nim[k] = Lnim[i];
        i++;
        k++;
    }
     while (j < n2) {
        ipk[k] = Ripk[j];
    	nama[k] = Rnama[j];
        nim[k] = Rnim[j];
        j++;
        k++;
    }
}

void mergeSort(float ipk[],string nama[], int nim[], int l, int r){
	if(l>=r){
       return;
    }
    
    int m = l + (r-l) / 2;
    mergeSort(ipk,nama,nim,l,m);
    mergeSort(ipk,nama,nim,m+1,r);
    merge(ipk,nama,nim,l,m,r);
}

int main () {
	int n , cari , rank ;
	
	cin >> n;
	int m = n;
	string nama[n];
	int nim[n];
	float ipk[n];
	
	for( int i = 0; i < n; i++){
		cin >> nama[i] >> nim[i] >> ipk[i];
	}
	
	cin >> cari;
	
	mergeSort(ipk,nama,nim, 0 , n-1);
	
	for ( int i = 0; i < n; i++){
		cout << nama[i] << " " << nim[i] << " " << ipk[i] << endl;
	}
	for ( int i = 0; i < n; i++){
		if(cari == nim[i]){
			rank = m;
		}else if( cari != nim[i]){
			m = m - 1;
		}
	}	
	for ( int i = 0; i < n; i++){
		if( cari == nim [i]){
			cout << nama[i] << " " << rank << endl;
		}
	}
}
