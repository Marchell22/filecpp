//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal :23 APRIL
//Deskripsi : PEDAGANG UNTUNG

#include <iostream>
#include <math.h>
using namespace std;

void cek(int *x, int *y, int n){
    int min =INT_MAX;
    int jarak[n], j;
    for (int i = 0; i < n; i++)
    {
        jarak[i] = sqrt(pow(x[i], 2) + pow(y[i], 2));
        if (min > jarak[i])
        {
            min = jarak[i];
            j = i;
        }
    }
    cout << x[j] << " " << y[j];
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    cek(a, b, n);
}
