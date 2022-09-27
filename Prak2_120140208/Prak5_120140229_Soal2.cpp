//Nama      : Afif Syaifullah Fattah
//NIM       : 120140229
//Tanggal   : 12 Maret 2021
//Deskripsi : Menenkripsi sebuah string dengan menukar karakter yang berada pada
//            posisi genap dengan lawannya dari belakang.
#include <iostream>
#include <string>
using namespace std;

string enkripsiJojo(string s)
{
    int l = s.length();

    for(int i = 0; i < 2; i++) {
        if(i%2 == 0) {
            char c = s[i];
            s[i] = s[l - i - 1];
            s[l - i - 1] = c;
        }
    }

    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout << enkripsiJojo(s) << endl;
    return 0;
}
