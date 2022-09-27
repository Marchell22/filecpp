#include <iostream>
using namespace std;
//ALAMAT
int pointer ( int *arr[]){
	
	cout << *(arr+0) << endl;
	cout << *(arr+1) << endl;
	cout << *(arr+2) << endl;
}
int main () {
	int arr[] = { 1, 3, 5};
	int *ptr = arr;
	
	pointer(&ptr);	
}
