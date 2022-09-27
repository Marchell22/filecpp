#include <iostream>
using namespace std;

int siap( int x , int y){
	if ( x < y){
		return x + siap(x-3 , y-4) * siap (x-2 , y-3);
	}else {
		return x + y;
	}
}
int main () {
	int a , b;
	cin >> a >> b;
	cout << siap (a,b);
	
}
