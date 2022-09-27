//NIM:120140208
//Nama:MArchell Manurung
//Tanggal:3 Desember 2020
//Deskripsi: Labil


#include <iostream>
using namespace std;

int main()
{
    char arr[10];

    for (int i = 0; i <= 9; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i <= 9; i++) {
        if (arr[i] == '0') {
            arr[i] = '*';
        }
        else if (arr[i] == '1') {
            arr[i] = '*';
        }
        else if (arr[i] == '5') {
            arr[i] = '#';
        }
    }
    for (int i = 0; i <= 9; i++) {
        cout << arr[i] << " ";
    }
}
