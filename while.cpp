#include <iostream>
using namespace std;
int main(){
	int i = 1;
	int input;
	int jumlah = 0;
	cout << "Masukan Nilai Input : ";
	cin >> input;
	while(i <= input){
		cout << i << endl;
		jumlah = jumlah + i;
		i++;
	}
	cout << "Jumlah sama dengan = " << jumlah;
	return 0;
}
