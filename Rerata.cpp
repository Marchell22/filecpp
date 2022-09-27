#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    float jumlah;
    float rerata;
    
    int arr[n];
    for (int i = 1; i <= n; i++){
    	cin >> arr[i];
    	
    	jumlah += arr[i]; 
	}
	rerata = jumlah / n;

}

