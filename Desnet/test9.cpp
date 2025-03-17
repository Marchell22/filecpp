#include <iostream>

using namespace std;

int main()
{
    int T[] = {1, 2, 3, 4, 5, 6, 7, 8}; // Data array sesuai soal (harus terurut)
    int N = 8, X = 6;                   // Jumlah elemen dan nilai yang dicari
    int atas = 1, bawah = N;        // Indeks atas dan bawah (C++ indeks mulai dari 0)
    bool Found = false;
    int IX = 0, tengah, count = 0;

    // Algoritma binary search
    while ((atas <= bawah) && (!Found))
    {
        tengah = (atas + bawah) / 2; // Hitung indeks tengah
        count++;                     // Hitung jumlah iterasi

        if (X == T[tengah])
        {
            Found = true;
            IX = tengah; // Indeks dalam soal mulai dari 1
        }
        else if (X < T[tengah])
        {
            bawah = tengah - 1; // Cari di bagian kiri
        }
        else
        {
            atas = tengah + 1; // Cari di bagian kanan
        }
    }

    // Output hasil
    cout << "IX: " << IX << endl;
    cout << "Jumlah iterasi tengah: " << count << " kali" << endl;

    return 0;
}
