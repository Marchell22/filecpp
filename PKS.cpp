#include <iostream>
using namespace std;

int main () 
{
	int n;
	
	cout << "Masukkan N : ";
	
	cin >> n;
	
	for(int i = 1; i <= n; i++ ){
		for(int j = 1; j <= n; j++){
			if(i%2==1 && j%2==0 || i%2==0 && j%2==1   ){
				cout <<"o";
			}else {
				cout <<"#";
			}
		}
		cout << endl ;
	}
}
