//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal :23 APRIL
//Deskripsi : TUKANG SULAP

#include <iostream>
using namespace std;

void change(int& c, int& d) {
    swap(c, d);
}

int main()
{
    int N, T, x, y;
    char P, Q;
    cin >> N;
    int z[2][N];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> z[i][j];
        }
    }

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> P >> x >> Q >> y;
        int a = P - 'A';
        int b = Q - 'A';
        change(z[a][x - 1], z[b][y - 1]);
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cout << z[i][j];
            if (j != N - 1) {
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }
    return 0;
}
