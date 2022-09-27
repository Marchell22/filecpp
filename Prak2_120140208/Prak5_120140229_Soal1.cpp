//Nama      : Afif Syaifullah Fattah
//NIM       : 120140229
//Tanggal   : 12 Maret 2021
//Deskripsi : Volume dan Luas alas dari sebuah tabung dibulatkan ke atas
//            dengan input N dan panjang jari-jari dan tinggi.
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;

double upp(double x)
{
    int y = x + 1;
    return y;
}

int main()
{
    int n;
    cin >> n;
    int s[n][2];

    for(int i = 0; i < n; i++) {
        cin >> s[i][0] >> s[i][1];
    }

    for(int i = 0; i < n; i++) {
        double L = PI*s[i][0]*s[i][0], t = s[i][1];

        cout << fixed << setprecision(1);
        cout << "Volume : " << upp(L * t) << " cm\n";
        cout << "Luas : " << upp(L) << " cm\n";
    }
    return 0;
}
