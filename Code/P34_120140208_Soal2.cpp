//NIM :120140208
//Nama :Marchell Manurung
//Tanggal :19 November 2020
//Deskripsi :EID

#include <iostream>
using namespace std;

int main() {
    int n, m, o, p;
    cin >> n;
    cin >> m;
    o = n;
    for (int i = 1; i < m; i++)
    {
        o *= n;
        //2 * 2
        //4 * 2
        //8
    }
    p = o;
    for (int i = 1; i < n; i++)
    {
        p *= o;
    }
    cout << o << endl;
    cout << p;

}