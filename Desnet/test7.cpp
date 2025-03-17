#include <iostream>

int main()
{
    int T[] = {8, 4, 7, 3, 1, 2, 6, 5}; // Data array
    int N = 8;
    int count = 0; // Counter untuk menghitung jumlah eksekusi perintah dalam if

    for (int pass = 1; pass <= N - 1; pass++)
    {
        for (int i = 2; i <= N; i++)
        { // Menggunakan indeks 1-based seperti di soal
            if (T[i] < T[i - 1])
            {
                int temp = T[i];
                T[i] = T[i - 1];
                T[i - 1] = temp;
                count++;
            }
        }
    }

    std::cout << "Jumlah eksekusi perintah antara if dan endif: " << count << " kali" << std::endl;
    return 0;
}
