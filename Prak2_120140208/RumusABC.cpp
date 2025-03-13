#include <iostream>

using namespace std;

int main (){
	cout << "Punya Marchell Manurung" << endl;
	int a, b, c;
	cout << "Masukan Nilai A : ";
	cin >> a ;
	cout << "Masukan Nilai B : ";
	cin >> b;
	cout << "Masukan Nilai C : ";
	cin >> c;
	cout << a << "x^2 + (" << b << "x) + (" << c << ") = 0" << endl;  

	float d = ((b*b) - (4 * a * c));
	cout << "Diskriminan : " << d << endl;

	cout << "Nilai X1 adalah (" << -b << " - Akar(" << d << "))/ " << 2 * a << endl;
	cout << "Nilai X2 adalah (" << -b << " + Akar(" << d << "))/ " << 2 * a << endl;
	
}
