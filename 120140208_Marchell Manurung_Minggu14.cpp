#include <iostream>
using namespace std;

struct mhs{
	string isbn;
	string judul;
	int hal;
};

int main () 
{
	int n,temphal, j;
	string tempisbn, tempjudul;
	
	cin >> n;
	
	mhs x[n];
	
	for(int i = 0; i < n; i++){
		cout << "Data Ke-" << i+1 << endl;
		
		cout << "ISBN : ";
		cin >> x[i].isbn;
		
		cout << "Judul : ";
		cin >> x[i].judul;
		
		cout <<"Halaman : ";
		cin >> x[i].hal;
		
		cout << endl;
	}
	for ( int i = 1; i < n ; i++){
		temphal = x[i].hal;
		tempjudul = x[i].judul;
		tempisbn = x[i].isbn;
		j = i - 1;
		while ( j >=0 && x[j].hal > temphal ){
			x[j+1].hal = x[j].hal;
			x[j+1].isbn = x[j].isbn;
			x[j+1].judul = x[j].judul;
			j--;
		}
		x[j+1].hal = temphal;
		x[j+1].isbn = tempisbn;
		x[j+1].judul = tempjudul;
	}
	cout << endl;
	/*PENGURUTAN NAIK*/
	cout << " PENGURUTAN NAIK " << endl;
	for ( int i = 0; i < n; i++){
		cout << "ISBN : " << x[i].isbn << endl;
		cout << "Judul : "<< x[i].judul << endl;
		cout << "Halaman : " << x[i].hal << endl;
	}
	
	
	for ( int i = 1; i < n ; i++){
		temphal = x[i].hal;
		tempjudul = x[i].judul;
		tempisbn = x[i].isbn;
		j = i - 1;
		while ( j >=0 && x[j].hal < temphal ){
			x[j+1].hal = x[j].hal;
			x[j+1].isbn = x[j].isbn;
			x[j+1].judul = x[j].judul;
			j--;
		}
		x[j+1].hal = temphal;
		x[j+1].isbn = tempisbn;
		x[j+1].judul = tempjudul;
	}
	cout << endl;
	cout << " PENGURUTAN TURUN " << endl;
	/*PENGURUTAN TURUN*/
	for ( int i = 0; i < n; i++){
		cout << "ISBN : " << x[i].isbn << endl;
		cout << "Judul : "<< x[i].judul << endl;
		cout << "Halaman : " << x[i].hal << endl;
	}
}
