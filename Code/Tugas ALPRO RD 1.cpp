#include <iostream>
using namespace std;

int main() {
	//input data 
	int i, n, a, b, x, terkecil;
	float jumlah, sum, rata2ganjil, rata2genap;
	cout << "Masukkan banyak nilai : "; 
	cin >> n;
	a = 0; b = 0; jumlah = 0; sum = 0;
	
	//input nilai sebanyak n buah
	for (i = 1; i <= n; i++) {
		cout << "Masukkan nilai ke-" << i << " : ";
		cin >> x;
		}
		//mencari nilai terkecil
		if(i==1){
			terkecil=x;
		}
		else if (x < terkecil) {
			terkecil = x;
		}
		else {
		}
		//mencari rata rata data ganjil
		if (x % 2 == 1) {
			a = a + 1;
			jumlah = jumlah + x;
		}
		//mencari rata rata data genap
		else if (x % 2 == 0) {
			b = b + 1;
			sum = sum + x;
		}
	}
	//rumus mencari rata rata ganjil dan genap
	rata2ganjil = jumlah / a;
	rata2genap = sum / b;
	cout << "Rata-rata bilangan ganjil adalah : " << rata2ganjil << endl;
	cout << "Rata-rata bilangan genap adalah : " << rata2genap << endl;
	cout << " bilangan terkecil = " << terkecil;
}
