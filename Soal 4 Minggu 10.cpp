#include <iostream>
using namespace std;

int kuadrat(int n){
	if(n==0){
		return 0;
	} else {
		return n * n;
	}
}
int main () 
{
	int n;
	
	cout << "Masukan Angka = ";
	cin>>n;
	cout<<n<<" Pangkat 2 adalah "<<kuadrat(n)<<endl;
}
