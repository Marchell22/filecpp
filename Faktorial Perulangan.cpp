#include <iostream>
using namespace std;

int main () 
{
	int n;
	int hasil=1;
	
	cout << "Masukkan n = ";
	cin >> n;
	cout << n <<"!" << endl;
	
	
	for(int i = n; i >= 1 ; i--){
		hasil = hasil * i;
		cout << i ;
		if(i!=1){
			cout<<"*";
		}
	}
	if ( n = 0 ){
		return 1;
	}
	cout<<" = "<<hasil;
}
