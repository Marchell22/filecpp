#include <iostream>
using namespace std;
	
void ubah(int *sesuatu){
	*sesuatu = *sesuatu + 100;
}
int main(){
	int x;
	
	x = 50;
	
	cout << "Nilai x sebelum diubah : " << x;
	ubah(&x);
	
	cout << endl;
	cout << "Nilai x setelah diubah : " << x;
}	
