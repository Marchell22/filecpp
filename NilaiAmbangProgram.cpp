#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Masukkan jumlah informasi peserta tes ujian yang ingin didata : ";
	cin >> n;
	cout << endl;
	string kode[n], nama[n], kelas[n], jenis[n];
	float nilai[n];
	int pilihan;
	string nama1;
	for(int i = 0; i < n; i++){
		cout << "Peserta ke-" << i+1 << endl;
		cout << "Masukkan Kode Peserta : ";
		cin >> kode[i];
		cout << "Masukkan Nama : ";
		cin >> nama[i];
		cout << "Masukkan Kelas(A/B/C/D) : ";
		cin >> kelas[i];
		cout << "Masukkan Jenis Ujian (UTS/UAS) : ";
		cin >> jenis[i];
		cout << "Masukkan Nilai : ";
		cin >> nilai[i];
		cout << endl;
	}	
	
	cout << "Masukkan ambang nilai : " ;
	cin >> pilihan;
	for(int i = 0; i < n; i++){
		if(pilihan < nilai[i]){
			cout << "Nama peserta yang nilainya di atas " << pilihan << " adalah " << nama[i] << endl;
		}
		
	}
	return 0;
}
