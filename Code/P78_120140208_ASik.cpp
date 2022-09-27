//NIM:120140208
//Nama:MArchell Manurung
//Tanggal:3 Desember 2020
//Deskripsi: ASik Gak asik

#include <iostream>
using namespace std;

bool ask(int n, int num[])
{
    for(int i = 0; i <= n/2; i++) {
        if(num[i] != num[n - i - 1]) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int num[n];

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << (ask(n, num)?"ARRAY ASIK":"ARRAY GAK ASIK") << endl;
    return 0;
}
