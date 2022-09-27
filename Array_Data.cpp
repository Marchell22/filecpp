#include <iostream>

using namespace std;

int main() {
	int x,y;
	
	cout << "Masukan Baris : ";
	cin >> x;
	
	cout << "Masukan Kolom : ";
	cin >> y;
	
	int data[x][y];
	
	float jumlah1[x], jumlah2[y];
	float rerata1[x], rerata2[y];
	
	cout << endl;
	
	for ( int i = 1; i <= x; i++){
		for (int j = 1; j <= y; j++){
			cout << "Data ke-" << i <<" Nomor " << j << " : " ;
			cin >> data[i][j];
		}
	}
	cout << endl << endl;
	
	for ( int i = 1; i <= x; i++){
		jumlah1[i] = 0;
		rerata1[i] = 0;
		for (int j = 1; j <= y; j++){
			jumlah1[i] = jumlah1[i] + data[i][j];	
		}
		rerata1[i] = jumlah1[i]/y;
		
		cout << "Jumlah baris ke-"<< i << " : " << jumlah1[i] << endl;
		cout << "Rerata baris ke-"<< i << " : " << rerata1[i] << endl;
		cout << endl << endl;
	}
	
	for(int j = 1; j <= y ; j++){
		jumlah2[j] = 0;
		rerata2[j] = 0;
		for( int i = 1; i <= x; i++){
			jumlah2[j] = jumlah2[j] + data[i][j];
		}
		rerata2[j] = jumlah2[j] / x;
		cout << "Jumlah kolom ke-" << j << " : " << jumlah2[j] << endl;
		cout << "Rerata kolom ke-" << j << " : " << rerata2[j] << endl;
		cout << endl << endl;
	}
	cout << "|NO\t";
	for ( int i = 1; i <= x; i++){
		cout <<"|\t"<< "Data " << i <<"\t"; 
	}
	cout <<"|\tJUMLAH\t";
	cout <<"|\tRERATA \t|" << endl;
	for ( int j = 1; j <= y; j++){
		cout <<"|" << j << "\t";
		for (int i = 1; i <= x; i++){
			cout <<"|\t" << data[i][j] << "\t" ;
		}
		cout << "|\t" << jumlah2[j] << "\t\t" << "|\t" << rerata2[j] << "\t|";
		cout << endl;
	}
	
	cout <<"|JUMLAH\t";
	for ( int i = 1; i <= x; i++){
		cout <<"|\t" << jumlah1[i] << "\t";
	}
	cout << endl;
	cout <<"|RERATA\t";
	for ( int i = 1; i <= x; i++){
		cout << "|\t" << rerata1[i] << "\t";
	}
}
