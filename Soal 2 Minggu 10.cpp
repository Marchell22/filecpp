#include <iostream>
using namespace std;

int ngapaya (int n)
{
    if(n == 1){
    	return 1;
	}
	else {
		return n + ngapaya(n-1);
	}
}

int main()
{
    int n;
    cout << "Masukan bilangan bulat positif : ";
    cin >> n;
    cout << "hasil akhirnya adalah = " <<ngapaya(n);
}
