#include <iostream>
using namespace std;

int main () 
{
	int n;
	
	cout << " Masukan N = ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=i;j<=n-1; j++){
		cout << "#";
		}
		
		cout<<endl;
	}
}
