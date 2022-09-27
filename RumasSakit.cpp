#include <iostream>
using namespace std;

int main () {
	int n;
	
	cin >> n;
	
	int rekam[n];
	string tanggal[n], nama[n], namadokter[n], berobat[n];
	
	string tanggaltertentu;
	int antrian = 1;
	
	for ( int i = 0; i < n ; i++){
		cout << "Pasien ke-" << i + 1 << " : " << endl;
		cout << "Nomor Rekam Medik : ";
		cin >> rekam[i];
		cin.sync();
		
		cout << "Nama Pasien : ";
		getline(cin,nama[i]);
		
		cout << "Dokter yang dikunjungi : ";
		getline(cin,namadokter[i]);
		cout << "Jenis Berobat (UMUM/BPJS) : ";
		getline(cin, berobat[i]);
		cout << "Tanggal berobat (tanggal/bulan/tahun): ";
		getline(cin, tanggal[i]);
	
	}
	cout << endl;
	cout << "Masukan Tanggal Tertentu (tanggal/bulan/tahun): ";
	cin >> tanggaltertentu;
	cout << endl;
	
	for ( int i = 0; i < n; i++){
		if(tanggaltertentu == tanggal[i]){
			cout << "Nama Pasien : " << nama[i] << endl;
			cout << "Nomor Antrian : " << antrian++ << endl;
		}
	}
}
