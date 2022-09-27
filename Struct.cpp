#include <iostream>
using namespace std;

struct dataMHS{
	int nim;
	string nama;
	string prodi;
	string jenjang;
	float ipk;
};
int main () {
	int n;
	
	cout << "Masukan Jumlah Mahasiswa : ";
	cin >> n;
	
	dataMHS x[n];
	
	for(int i = 0; i < n; i++){
		cout << "NIM : " ;
		cin >> x[i].nim;
		cout << " Nama : ";
		cin >> x[i].nama;
		cout << "Program Studi : ";
		cin >> x[i].prodi;
		cout << "Jenjang : ";
		cin >> x[i].jenjang;
		cout << "IPK : ";
		cin >> x[i].ipk;
		cout << endl << endl;
	}
	float nilai = 3.5;
	
	for(int i = 0; i < n; i++){
		if (x[i].ipk > nilai){
			cout << "a. NIM : " << x[i].nim << endl;
            
            cout << "b. Nama : " << x[i].nama << endl;
            
            cout << "c. Program Studi : " << x[i].prodi << endl;
            
            cout << "d. Jenjang : " << x[i].jenjang << endl;
            
            cout << "e. IPK : " << x[i].ipk << endl;
            
            cout << endl << endl;
        
		}
	}
	
	
}
