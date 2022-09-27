//NIM : 120140208
//Nama : Marchell Manurung
//Tanggal : 26 November 2020
//Deskripsi : Fungsi Bangun Datar

#include <iostream>
using namespace std;

void PrintLuasSegitiga(float alas, float tinggi)
{
    cout << "Luas = " << (alas * tinggi) / 2.0 << endl;
}

void PrintLuasPersegi(int sisi)
{
    cout << "Luas = " << sisi * sisi << endl;
}

void PrintLuasLingkaran(int jari2)
{
    cout << "Luas = " << jari2 * jari2 * 3.14 << endl;
}

int main()
{
    string bangun;
    cin >> bangun;

    if (bangun == "Persegi") {
        int sisi;
        cin >> sisi;
        PrintLuasPersegi(sisi);
    }
    else if (bangun == "Segitiga") {
        float alas, tinggi;
        cin >> alas >> tinggi;
        PrintLuasSegitiga(alas, tinggi);
    }
    else if (bangun == "Lingkaran") {
        int jari2;
        cin >> jari2;
        PrintLuasLingkaran(jari2);
    }
    return 0;
}