#include <iostream>
using namespace std;

int misteri(int n, int m){
	if(m==0){
		return 0;
	}else {
		return n + misteri(n, m-1);
	}
}
int main () {
	int n , m;
	
	cin >> n;
	cin >> m;
	
	cout << misteri (n, m)<<endl;
}
/* Output Yang akan keluar jika diberikan inpuran misteri(3,3) ialah 9
   Hal dikarenakan Fungsi Rekursif n + misteri (n, m-1)
   Inputan misteri (3,3) =
   misteri (3,3) = 3 + misteri (3,2) => 3 + 3 + misteri (3,1) =>3+3+3+misteri(3,0)
   dikarenakn (m==0) maka di returnkan 0
   misteri (3,3) = 3+3+3+0=9
*/


