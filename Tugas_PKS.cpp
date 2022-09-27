#include <iostream>
using namespace std;

int main ()
{
	int n;
	int cari;
	
	cin >> n;
	
	string nama[n];
	int usia[n];
	float ipk[n];
	string nim[n];
	string prodi[n];
	
	
	
	
	for (int i = 0; i < n; i++){
		cin.ignore();
		
		cout << "Data ke-" << i+1 << endl;
		cout << "Nama :";
		getline(cin,nama[i]);
		
		cout << "Prodi : ";
		getline (cin,prodi[i]);
		
		cout << "NIM :";
		getline (cin,nim[i]);
		
		cout << "Usia : ";
		cin >> usia [i];
		
		cout << "IPK : ";
		cin >> ipk[i];
		
	}
	
	cin >> cari;
	cout << endl;
		cout << "Nama :" << nama[cari - 1] << endl;
		cout << "Prodi :" << prodi[cari - 1] << endl;
		cout << "NIM :" << nim[cari - 1] << endl;
		cout << "Usia :" << usia[cari - 1] << endl;
		cout << "IPK :" << ipk[cari - 1] << endl;	
		return 0;
}
