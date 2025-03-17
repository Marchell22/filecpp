#include <iostream>

using namespace std;

int main()
{
    int T[] = {8, 4, 7, 3, 1, 2, 6, 5}; // Data array sesuai soal
    int N = 8, X = 2;                   // Jumlah elemen dan nilai yang dicari
    int IX, i;

    // Menambahkan sentinel
    int T_extended[N];
    for (int j = 0; j < N; j++)
    {
        T_extended[j] = T[j];
    }
    T_extended[N+1] = X; // Sentinel T[N+1] = X

    // Algoritma pencarian
    i = 1; // Mulai dari indeks 0 karena di C++ array dimulai dari 0
    while (T_extended[i] != X)
    {
        i = i + 1;
    }

    // Cek apakah ditemukan dalam batas indeks yang valid
    if (i < N+1)
    {
        IX = i + 1; // Sesuai dengan indeks dalam soal (mulai dari 1)
    }
    else
    {
        IX = 0;
    }

    // Output hasil
    cout << "Nilai IX: " << IX << endl;

    return 0;
}
