#include <iostream>
using namespace std;

int cari(int arr[], int l, int r, int x){
	if( l <= r){
		int m = l + (r - l) / 2;
		
		if( arr[m] == x){
			return m;
		}else if (arr [m] < x){
			l = m + 1;
			return cari ( arr, l, r, x);
		}else{
			r = m - 1;
			return cari ( arr, l, r, x);
		}
	}
}
int main ()
{
	int arr[] = { 2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = cari (arr, 0 , n - 1,  x);
	(result == -1 ) ? cout << x << " Tidak ada di array" : cout << x << " Berada pada index ke-" << result;
					
					
	return 0;
}
