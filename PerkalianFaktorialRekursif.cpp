#include <iostream>
using namespace std;

float faktorial(float a){
	if ( a == 0 ){
		return 1;	
	}else {
		return a * faktorial (a - 1);
	}
	
}
	
int main (){
	float x , y, hasil = 0;
	cin >> x >> y ;
	cout << "kursi : " << y << "Orang : " << x;
	
	hasil = faktorial(x) / (faktorial (x-y));
	cout << hasil;
}
