#include <iostream>
using namespace std;

int main ()
{
	int n = 3, jumlah = 0;
	int matriks1 [n][n], matriks2 [n][n], hasil[n][n];
	string pil;
	cout << "MATRIKS 1 : " << endl;
	for ( int i = 1; i <= n; i++){
		for ( int j = 1; j <= n; j++){
			cout <<"Nilai [" << i <<"] [" << j << "] : " ;
			cin >> matriks1[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "MATRIKS 2 : " << endl;
	for ( int i = 1; i <= n; i++){
		for ( int j = 1; j <= n; j++){
			cout <<"Nilai [" << i <<"] [" << j << "] : " ;
			cin >> matriks2[i][j];
		}
		cout << endl;
	}
		cout << "MATRIKS 1 : " << endl;
	for ( int i = 1; i <= n; i++){
		for ( int j = 1; j <= n; j++){
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "MATRIKS 2 : " << endl;
	for ( int i = 1; i <= n; i++){
		for ( int j = 1; j <= n; j++){
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "OPERASI ARITMATIKA (Penjumlahan/Perkalian) : ";
	cin >> pil;
	
	if(pil == "Perkalian"){
		for ( int i = 1; i <= n; i++){
			for ( int j = 1; j <= n; j++){
				for ( int k = 1; k <= n; k ++){
					jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
				}
				hasil[i][j] = jumlah;
				
			}
		}
		cout <<"HASIL PERKALIAN MATRIKS ORDO 3 X 3 : " << endl;
		for ( int i = 1; i <= n; i++){
			for ( int j = 1; j <= n; j++){
				cout << hasil[i][j] << " ";
			}
			cout << endl;
		}
	}else if ( pil == "Penjumlahan"){
		for ( int i = 1; i <= n; i++){
			for ( int j = 1; j <= n; j++){
				hasil[i][j] = matriks1 [i][j] + matriks2 [i][j];
			}
		}
		cout << "HASIL PENJUMLAHAN MATRIKS ORDO 3 X 3 : " << endl;
		for ( int i = 1; i <= n; i++){
			for ( int j = 1; j <= n; j++){
				cout << hasil[i][j] << " ";
			}
			cout << endl;
		}
	}
}
