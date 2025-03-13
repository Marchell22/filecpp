#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	do{
		cout << "Masukan Nilai a : " ;
		cin >> a;
		cout << "Masukan Nilai b : " ;
		cin >> b;
		cout << "Masukan Nilai c : " ;
		cin >> c;
	}while(a == b || b == c || c == a);
	return 0;
}
