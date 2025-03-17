#include <iostream>

using namespace std;

char CC; // Current Character

void START()
{
    cin >> CC; // Memulai dengan membaca karakter pertama
}

void ADV()
{
    cin >> CC; // Membaca karakter berikutnya
}

bool EOP()
{
    return CC == '.'; // Mengembalikan true jika karakter adalah MARK
}

int main()
{
    int countLE = 0; // Menyimpan jumlah pasangan "LE"

    START();            // Mulai membaca karakter pertama
    char prevChar = CC; // Menyimpan karakter sebelumnya

    while (!EOP())
    {          // Selama belum mencapai MARK '.'
        ADV(); // Baca karakter berikutnya
        if (prevChar == 'L' && CC == 'E')
        {
            countLE++; // Jika ditemukan pasangan "LE", tambah hitungan
        }
        prevChar = CC; // Perbarui karakter sebelumnya
    }

    cout << "Jumlah pasangan 'LE' = " << countLE << endl;
    return 0;
}
