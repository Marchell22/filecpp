#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	
	int array[n];
	int hasil[100];
	int target[100];
	
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	
	for ( int i = 0; i < 100; i++){
		cin >> target [i];
		if( target[i] == -999){
			break;
		}
	}
	
	for(int y = 0; y < 100; y++){
		hasil[y] = 0;
	}

	for(int y = 0; y < 100; y++){
		for(int i = 0; i < n; i++){
			if(array[i] == target[y]){
				hasil[y] = hasil[y] + 1;
			}
		}
	}
	for(int y = 0; y < 100; y++){
		if(hasil[y] > 0){
			cout << "Bilangan " << target[y] << " ditemukan sebanyak " << hasil[y] << " kali" << endl;
		}else if(target[y] == -999){
			return 0;	
		}else {
			cout << "Bilangan " << target[y] << " tidak ditemukan" << endl;
		}
	}
}
