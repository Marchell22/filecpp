//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal : 30 APRIL 2021
#include <iostream>
#include <algorithm>
using namespace std;

int binery(int x[], int start, int end, int target){
	if(end >= start){
		int mid = start + (end - start)/2;
		
		if(x[mid] == target){
			return 1;
		}else if(x[mid] > target){
			return binery(x, start, mid-1, target);
		}else if(x[mid] < target){
			return binery(x, mid+1, end, target);
		}
	}
	else{
		return -1;
	}
}


int main ()
{
	int n,temp;
	
	
	
	cin >> n;
	int x[n];
	int hasil[100];
	int target [100];
	
	
	for ( int i = 0; i < n; i++){
		cin >> x[i];
	}
	sort(x, x+n);
	for (int i = 0; i != n; i++){
		
	}
	for ( int i = 0; i < n; i++){
		cin >> target [i];
		if ( target [i]==-999){
			break;
		}
	}
	for ( int i = 0; i < n; i++){	
		hasil[i] = binery(x , 0 , n - 1, target[i]);
	}
	for(int i = 0; i < 100; i++){
		if(hasil[i] == 1){
			cout << "Bilangan " << target[i] << " ditemukan" << endl;
		}else if(target[i] == -999){
			return 0;
		}else{
			cout << "Bilangan " << target[i] << " tidak ditemukan" << endl;
		}
	}
}
