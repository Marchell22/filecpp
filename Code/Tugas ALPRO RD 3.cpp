#include <iostream>
using namespace std;
#include <string>

int main()
{
	int N;
	cout << "Masukan Banyak Mahasiswa:";
	cin >> N;
	string nama[100], nama1, prodi1;
	string prodi[100];
	int nilai[100], max = 0;

	for (int i = 1; i <= N; ++i)
	{
		cout << "Masukan Nama " << i;
		cin >> nama[i];
		cout << "Masukan Prodi ";
		cin >> prodi[i];
		cout << "Masukan Nilai ";
		cin >> nilai[i];
		if (max < nilai[i])
		{
			nama1 = nama[i];
			prodi1 = prodi[i];
			max = nilai[i];
		}
	}
	cout << "Nilai terbesar adalah:" << max << " atas nama " << nama1 << " dan prodi " << prodi1;
	return 0;
}