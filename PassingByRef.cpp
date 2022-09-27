#include <iostream>
using namespace std;
void ubah( int *x, int *y, int *z){
	*x = *x * 2;
	*y = *y * 2;
	*z = *z * 2;
}
int main () {
	int a, b, c;
	
	cin >> a >> b >> c;
	
	cout << "Nilai Sebelum diubah : " << a <<" " <<  b <<" "<< c;
	cout << endl;
	
	ubah(&a, &b, &c);
	
	cout << "Nilai Sesudah diubah : " << a <<" " << b << " "<< c;
	
}
