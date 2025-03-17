#include <iostream>
using namespace std;

int main()
{
    // Pecahan uang yang tersedia dan stoknya
    int pecahan[] = {100, 10, 5, 1};
    int stok[] = {7, 8, 8, 10};
    int dikeluarkan[4] = {0};

    int jumlah;
    cout << "Masukkan jumlah uang yang ingin diambil: Rp. ";
    cin >> jumlah;

    int sisaJumlah = jumlah;

    for (int i = 0; i < 4; i++)
    {
        int nilaiPecahan = pecahan[i];
        int tersedia = stok[i];

        int dibutuhkan = sisaJumlah / nilaiPecahan;
        int jumlahDikeluarkan = (dibutuhkan < tersedia) ? dibutuhkan : tersedia;

        if (jumlahDikeluarkan > 0)
        {
            dikeluarkan[i] = jumlahDikeluarkan;
            sisaJumlah -= jumlahDikeluarkan * nilaiPecahan;
        }
    }

    if (sisaJumlah > 0)
    {
        cout << "Kesalahan: Stok pecahan tidak mencukupi untuk jumlah yang diminta." << endl;
        return 0;
    }

    cout << "Uang Yang Dikeluarkan Mesin ATM:" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (dikeluarkan[i] > 0)
        {
            cout << dikeluarkan[i] << " Lembar Rp. " << pecahan[i] << "-" << endl;
        }
    }

    return 0;
}