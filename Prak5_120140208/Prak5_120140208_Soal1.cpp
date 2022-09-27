//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal :08 April 2021

#include <iostream>
using namespace std;

int deret(int a){
	if(a == 1){
		return 1;
	} else{
		return a + deret(a-1);
	}
}
int pangkat(int b,int c){
	if(c == 0){
		return 1;
	} else{
		return b * pangkat(b,c-1);
	}
}
int main(){
	int x, a[100], b[100], c[100];
	string jenis[100];
	
	cin >> x;

	
	for(int i = 0; i < x; i++){
		cin >> jenis[i];
		if(jenis[i] == "deret"){
			cin >> a[i];
			deret(a[i]);
		}else if(jenis[i] == "pangkat"){
			cin >> b[i];
			cin >> c[i];
			pangkat(b[i],c[i]);
		}
	}
	for(int i = 0; i < x; i++){
		if(jenis[i] == "deret"){
			cout << deret(a[i]) << endl;
		}else if(jenis[i] == "pangkat"){
			cout << pangkat(b[i], c[i]) << endl;
		}
	}
}
