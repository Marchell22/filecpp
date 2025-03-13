#include <iostream>
using namespace std;

int main(){
	int array[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string bulan[12] = {"januari", "februari","maret","april", "mei", "juni", "juli","agustus", "september", "oktober", "november","desember"};
	for(int i = 1; i <= sizeof(array) /sizeof(int); i++){
		int a = sizeof(array);
		cout << a << endl;
		int b = sizeof(int);
		cout << b << endl;
		cout << a / b;
		cout << "Kalender " << bulan[i-1] << " Total Hari " << array[i-1] << endl;
	}
}
