/*NAMA : MARCHELL MANURUNG
  NIM  : 120140208
  KELAS : RD */
  

// ------------------------------Soal 3------------------------------
/*	Output dari program tersebut adalah :
	12  					*/

// ------------------------------Soal 4------------------------------
/*	Output dari program tersebut adalah :
	1  1  					*/


// ------------------------------Soal 5------------------------------
#include <iostream>
using namespace std;

void balik(int* n, int* temp)
{
	int i = 0;
	temp[i] = *n;
	i++;
}
int main()
{
	int N;
	cout << "Masukkan nilai N = ";
	cin >> N;
	
	int x[N];
	int y[N];
	
	cout << "Nilai Sebelum Di ubah : "<< endl;

	for (int i=N; i>=1; i--)
	{
		cin >> x[i];
		balik(&x[i], &y[i]);
	}
	cout <<"Nilai Setelah Di ubah : " << endl;
	for (int i=1; i<=N; i++)
	{
		cout << y[i] << " ";
	}
}
