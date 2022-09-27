/*
	Nama : Marchell Manurung
	NIM  : 120140208
	TANGGAL : 17 MEI 2021
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
	int idx_max;
	cin >> n;
	
	int array[n];
	string nama[n];
	
	for(int i = 0; i < n; i++){
		cin >> nama[i] >> array[i];
	}
	for (int i = 0; i < n; i++){
		idx_max = 0;
		for ( int j = 1; j <= i; j++){
			if(array [j] < array [idx_max] ){
				idx_max = j;
			}
		}
		tukar(&array[i] , &array[idx_max]);
		tukar2(&nama[i] , &nama[idx_max]);
	}
	
	cout << endl;
	
	for ( int i = 0; i < n; i++){
		cout << nama[i] << " " <<array [i] << endl;
	}
}
