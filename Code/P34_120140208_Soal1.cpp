//NIM:120140208
//Nama:Marchell Manurung
//Tanggal:19 November 2020
//Deskripsi: Letak Bom

#include <iostream>
using namespace std;


int main() {
    int n, m, o;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            o = i + j;
            if (o % m == 0)
            {
                cout << "X ";
            }
            else
            {
                cout << "O ";
            }
        }
        cout << endl;
    }

}