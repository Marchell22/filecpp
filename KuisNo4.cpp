#include <iostream>
using namespace std;

int belokan ( int *yy, int zz, int nim){
	if(nim % *yy == 0){
		*yy = *yy + 2;
	}else {
		*yy = *yy + 1;
	}
	return *yy * zz;
}
int main () {
	int aa, bb, nim, total = 0;
	
	cin >> aa >> nim;
	
	for ( int x = 1; x <= 9; x++){
		bb = belokan(&aa, x, nim);
		total += x * aa + bb;
		cout << total << endl;
	}
	return 0;
}
