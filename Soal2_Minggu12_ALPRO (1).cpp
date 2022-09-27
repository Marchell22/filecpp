#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char target;
	int n = 100;
	bool hasil = false;

	char array[n];
	
	cout <<"Masukkan Kata = ";
	cin.getline(array, 100);
	
	cout << "Target Karakter Yang Dicari = ";
	cin >> target;
	
	for(int i = 0;i < n; i++){
		if(array[i] == target){
			hasil = true;
			break;
		}
	}
	
	if(hasil == false){
		cout << "Karakter yang dicari tidak terdapat dalam kata";
	}else{
		cout << "Karakter ditemukan di dalam kata!";
	}
	return 0;
}
