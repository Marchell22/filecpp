#include <iostream>
using namespace std;

float ave(float a, float b, float c){
	float hasil;
	float rata;
	hasil = a + b + c;
	rata = hasil / 3; 
	
	return rata;
}
int main ()
{
	float x, y, z;
	
	cout << " x : " ; cin >> x;
	cout << " y : " ; cin >> y;
	cout << " z : " ; cin >> z;
	
	cout << ave(x, y, z);
}	
