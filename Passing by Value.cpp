#include <iostream>
using namespace std;

int ubah (int sesuatu){
	sesuatu = sesuatu + 100;
}
int main ()
{
	int x = 50 ;
	
	cout << "Nilai Sebelum diubah : " << x << endl;
	cout << "Nilai Sesudah diubah : " << ubah(x);
	cout << endl;
	
}
