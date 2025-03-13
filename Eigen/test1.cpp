#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Masukan Kata ";
    cin >> input;
    int n = 0;
    while (input[n] != '\0') {// Ketika string kosong berhenti " "
        n++;
    }
    
    // Menyimpan hanya huruf dan angka dalam array terpisah
    char huruf[100]; // Menyimpan huruf
    char angka[100]; // Menyimpan angka
    int hurufIndex = 0, angkaIndex = 0;
    
    for (int i = 0; i < n; i++) {
        if (input[i] >= '0' && input[i] <= '9') {//Menggunakan Angka ASCII >= 48 dan <= 57
            angka[angkaIndex] = input[i];
            angkaIndex++;
        } else {
            huruf[hurufIndex] = input[i];
            hurufIndex++;
        }
    }
    
    // Membalikkan huruf
    int j = hurufIndex - 1;
    int idx = 0;
    for (int i = 0; i < hurufIndex; i++) {
        input[idx] = huruf[j];
        idx++;
        j--;
    }
    
    // Menambahkan angka di akhir string
    for (int i = 0; i < angkaIndex; i++) {
        input[idx] = angka[i];
        idx++;
    }
    
    // Menutup string array jika string kosong
    input[idx] = '\0';
    
    cout << "String setelah dibalik: " << input << endl;
    return 0;
}

