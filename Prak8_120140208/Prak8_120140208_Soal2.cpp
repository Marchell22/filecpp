/*
	Nama : Marchell Manurung
	NIM  : 120140208
	TANGGAL : 06 MEI 2021
*/
#include <iostream>

using namespace std;

void tukar(int *a , int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void tukar2(string *c , string *d){
	string tem = *c;
	*c = *d;
	*d = tem;
}
int main () {
	int n;
	
	cin >> n;
	
	int array[n];
	string nama[n];
	
	for(int i = 0; i < n; i++){
		cin >> nama[i] >> array[i];
	}
	for (int i = 0; i < n; i++){
		for ( int j = 0; j < n - 1; j++){
			if(array [i] > array [j] ){
				tukar(&array[i] , &array[j]);
				tukar2(&nama[i] , &nama[j]);
			}
		}
	}
	
	cout << endl;
	
	for ( int i = 0; i < n; i++){
		cout << nama[i] << " " <<array [i] << endl;
	}
}
