#include <iostream>
using namespace std;

int main () 
{
	int n, cari, m;
	
	cout << "Masukan Jumlah Makhluk Hidup : ";
	cin >> n;
	
	string takson[n], nama_mh[n], kingdom[n], divisi[n], filum[n], kelas[n], ordo[n], famili[n], genus[n] , spesies[n];
	
	
	
	
	for ( int i = 0; i < n; i++){
		cout << "Sebutkan Taksonomi yang anda inginka (Hewan/Tumbuhan) : ";
		cin >> takson [i];
		cin.ignore();
		if (takson [i] == "Hewan"){
			cout << "Data Ke-" << i+1 << endl;
		
			cout <<"Nama Makhluk Hidup : ";
			getline(cin,nama_mh[i]);
			
			cout << "Kingdom : ";
			getline(cin,kingdom[i]);
		
			cout << "Filum : ";
			getline(cin,filum[i]);
		
			cout << "Kelas : ";
			getline(cin,kelas[i]);
		
			cout << "Ordo : ";
			getline(cin,ordo[i]);
		
			cout << "Famili : ";
			getline(cin,famili[i]);
		
			cout << "Genus : ";
			getline(cin,genus[i]);
		
			cout << "Spesies : ";
			getline(cin,spesies[i]);
		}else if ( takson [i] == "Tumbuhan"){
			cout << "Data Ke-" << i+1 << endl;
		
			cout <<"Nama Makhluk Hidup : ";
			getline(cin,nama_mh[i]);
		
			cout << "Kingdom : ";
			getline(cin,kingdom[i]);
		
			cout << "Divisi : ";
			getline(cin,divisi[i]);
		
			cout << "Kelas : ";
			getline(cin,kelas[i]);
		
			cout << "Ordo : ";
			getline(cin,ordo[i]);
		
			cout << "Famili : ";
			getline(cin,famili[i]);
		
			cout << "Genus : ";
			getline(cin,genus[i]);
		
			cout << "Spesies : ";
			getline(cin,spesies[i]);
		}else {
			cout << "Tidak Ditemukan " << endl;
		}
	}
}
