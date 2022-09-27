#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Masukkan nilai N = ";
	cin >> N;
	
	int x[N];

	
	cout << "Nilai Sebelum Di ubah : "<< endl;

	for (int i=N; i>=1; i--)
	{
		cin >> x[i];
	}
	cout <<"Nilai Setelah Di ubah : " << endl;
	for (int i=1; i<=N; i++)
	{
		cout << x[i] << " ";
	}
}
