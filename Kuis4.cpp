#include <iostream>
using namespace std;

int tanjakan( int *aa, int bb, int nim){
	int tmp = nim % bb;
	if ( tmp > 5){
		*aa = tmp + 2;
		cout << "dd : "<<*aa <<endl;
	}else {
		*aa = tmp + 1;
		cout << "dd : "<< *aa <<endl;
	}
	return *aa * bb;
}
int main (){
	int dd, kk, nim, total = 0;
	
	cin >> dd >> nim;
	for ( int x = 9; x >= 1; x--){
		cout << "x : " << x << endl;
		kk = tanjakan(&dd, x , nim);
		cout << "kk : " << kk <<endl;
		total += x + dd - kk;
		cout << "total : " << total;
		cout <<endl<<endl;
	}
	return 0;
}
