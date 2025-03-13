#include <iostream>
using namespace std;
int main (){
	int input, x;
	int jumlah = 0;
	cout << "Masukan Input : ";
	cin >> input;
	for(int i = 0; i <= input; i++){
		cout <<"Data Ke-" << i <<"] :";
		cin >> x;
		jumlah=jumlah+x;
	}
	cout << "Jumlah Data adalah : " << jumlah << endl;
}
