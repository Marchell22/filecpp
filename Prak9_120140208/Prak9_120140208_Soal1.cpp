/*
	Nama : Marchell Manurung
	NIM  : 120140208
	TANGGAL : 17 MEI 2021
*/
#include <iostream>
using namespace std;

void tukar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int n;

	cin >> n;
	
	int array[n];
	
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n-1; j++){
			if(array[i] < array[j]){
				tukar(&array[i], &array[j]);
			}
		}
	}
	for(int i = 0;i < n; i++){
		cout << array[i] << " ";
	}
}
