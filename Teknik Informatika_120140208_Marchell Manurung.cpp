#include <iostream>
using namespace std;


int main()
{
    string jurusan;
    string tahun;
    int avgUN;

    for (int i = 0; i < 7; i++)
    {
        cout << "masukan jurusan(IPA, IPS, Bahasa): ";
        cin >> jurusan;
        cout << "masukan Tahun Lulus(2019, 2020, 2021): ";
        cin >> tahun;
        cout << "Masukan Nilai rata-rata UN: ";
        cin >> avgUN;

        if (jurusan == "IPA" && tahun != "2019" && avgUN >= 300)
        {
            cout << "Selamat, Anda Lullus dan Diterima Sebagai Mahasiswa Baru Prodi PWK/Teknik Informatika Itera \n";                       
        }
        
        else 
        {
            cout << "Mohon Maaf, Anda Belum Memenuhi Syarat Sebagai Mahasiswa Baru Prodi PWK/Teknik Informatika Itera \n";     
        }
    }
}
