/*NAMA :MARCHELL MANURUNG
  NIM : 120140208
  KELAS RD 
*/

#include <iostream>
using namespace std;

struct smartphone{
	string nama;
	string merk;
	string processor;
	string battery;
};

int main(){
	int n;
	string username;
	string password;
	
	cin >> username >> password;
	cin >> n;
	
	smartphone x[n];
	if (username == "Joseph_PC"){
		if(password == "AkuPenjelajahPedagang"){
			for(int i = 0; i < n; i++){
				cin >> x[i].nama >> x[i].merk >> x[i].processor >> x[i].battery;
			}
		 }
	}
	if (username == "Joseph_PC"){
		if(password == "AkuPenjelajahPedagang"){
			for ( int i = n-1; i >= 0 ; i--){
				cout << x[i].nama << " " << x[i].merk << " "<< x[i].processor << " " << x[i].battery << endl;
			}
		}
	}
}
