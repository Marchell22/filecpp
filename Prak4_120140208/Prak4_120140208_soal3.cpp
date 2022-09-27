//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal :25 MARET 2021
//Deskripsi : PESAN CINTA RAHASIA

#include <iostream>
using namespace std;

string huruf = "abcdefghijklmnopqrstuvwxyz";
int indeks;

int Enc(char a, char b, int c) {
    for (int i = 0; i < 26; i++) {
        if (a == huruf[i]) {
            indeks = (i + c);
            while (indeks > 25) {
                indeks = indeks - 26;
            }
            return indeks;
        }
    }
}

int Dec(char a, char b, int c) {
    for (int i = 25; i >= 0; i--) {
        if (a == huruf[i]) {
            indeks = i - c;
            while (indeks < 0) {
                indeks = indeks + 26;
            }
            return indeks;
        }
    }
}

int main() {
    string pil, kal;
    int shift, penukaran;
    cin >> pil;
    cin >> shift;
    getline(cin >> ws, kal);
    penukaran = shift % 26;
    int n = kal.length();
    if (pil == "encrypt") {
        for (int i = 0; i < n; i++) {
            if (kal[i] == ' ') {
                continue;
            }
            else {
                kal[i] = huruf[Enc(kal[i], n, penukaran)];
            }
        }
    }
    else if (pil == "decrypt") {
        for (int i = 0; i < n; i++) {
            if (kal[i] == ' ') {
                continue;
            }
            else {
                kal[i] = huruf[Dec(kal[i], n, penukaran)];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << kal[i];
    }
}
