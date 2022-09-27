#include <iostream>
using namespace std;

void nimBaru(int *x){
	int *y;
	
	y = x;
	*x = *y + 3;

	if (*y % 2 == 0){
		y = x;
	}else{
		*y = *x - 3;
	}
}
int main () {
	int nim1, nim2, y = 10;
	string nama;

	cin >> nimq

	
	nimBaru(&nim1);
	
	cout << nim1;
	

	
}
	

