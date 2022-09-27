/*	NAMA : MARCHELL MANURUNG
	KELAS : RD
	NIM : 120140208
	SOAL NOMOR 1
	ID = 3
*/

#include <iostream>
using namespace std;

void tukar ( int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main () 
{
	int arr [5];
	
	for ( int i = 0; i < 5; i++){
		cin >> arr[i];
	}
	for ( int i = 0; i < 5; i++){
		tukar (&arr[0],&arr[3]);
		tukar (&arr[2],&arr[4]);
	}
	for ( int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
}
