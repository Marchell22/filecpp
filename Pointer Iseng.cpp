#include <iostream>
using namespace std;

void coba_dulu (int* x, int* y){

	*x = *x + *y;
}

int main () {
	int a , b;
	cin >> a;
	cin >> b;
	for(int i = 0 ; i <= 5 ; i++ ){
		coba_dulu (&a, &b);
	}
	cout << a << " " << b ;
	return 0;
}
