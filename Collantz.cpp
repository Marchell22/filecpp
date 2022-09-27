#include <iostream>
using namespace std;

int Collatz( int x ){
	int langkah = 1;
	bool sampai = false;
	
	while ( sampai == false ){
		if (x % 2 == 0){
			x = x / 2; 
			cout << x << endl;
		}else{
			x = 3 * x + 1 ;
			cout << x << endl;
		}
		if ( x == 1 ){
			sampai = true;
		}else {
			langkah ++;
		}
	}
	return langkah;
}
int main () {
	int step, n;
	cin >> n;
	step = Collatz (n);
	cout << step;
	return 0; 
	
}
