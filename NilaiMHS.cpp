#include <iostream>
using namespace std;

int main () {
	int n,m;
	
	cin >> n;
	
	float kimia[n], fisika[n], math[n], jumlah[n], rerata[n];
	string nama[n];
	float maks;
	
	for ( int i = 0; i < n; i++){
		cout << "Data Mahasiswa Ke-" << i+1 << endl;
		cout << "Nama Mahasiswa : ";
		cin >> nama[i];
		cout << "Nilai Fisika : ";
		cin >>  fisika[i];
		cout << "Nilai Kimia : ";
		cin >> kimia[i];
		cout << "Nilai Matematika : ";
		cin >> math[i];
		
		jumlah[i] = kimia[i]+fisika[i]+math[i];
		rerata[i] = jumlah[i]/3;
		cout <<  "Rerata : " << rerata[i] << endl;
			
	}
	cout << endl << endl;
	for ( int i = 0; i < n; i++){
		if ( rerata[i] < 60 ) {
			cout <<"Remedial atas nama " << nama[i] << " dengan rata-rata : "<< rerata [i] << endl;
		}
	}
	cout << endl << endl;
	maks = rerata[0];
	for ( int i = 0; i < n; i++){
		if ( maks < rerata [i]){
			m = i;
		}
	}
	cout <<"Rata-Rata Maksimum : " << rerata[m] << " Atas nama : " << nama[m];

}
