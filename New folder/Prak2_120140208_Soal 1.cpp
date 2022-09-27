//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal : 12 Maret 2021
//Deskripsi : Volume

#include <iostream>
using namespace std;

float Alas(int a)
{

    return 3.14 * a * a;

}

float volume (int a, int b)
{

    return  (3.14 * a * a) * b;

}

int main() {

    int n;
    float tinggi;
    float panjang;
    
    cout<<"Masukkan N Volume : ";
    cin >> n;

   int  x[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Data ke-" << i + 1 << endl ;
        cout << "panjang : ";
        cin >> panjang;
        cout << "tinggi : ";
        cin >> tinggi;

        cout << "Volume : " << volume(panjang, tinggi)+1<<".0 cm" << endl;
        cout << "Luas : " << Alas(panjang)+1 <<".0 cm"<< endl;

    }





    return 0;
}
