#include <iostream>
using namespace std;

struct buku {
    float isbn;
    string judul;
    string pengarang;
    float halaman;
    string penerbit;
};
int main() {
    buku x;

    cout << "Masukkan ISBN Buku : " << endl;
    cin >> x.isbn;
    cin.sync();
    cout << "Masukkan judul Buku : " << endl;
    getline(cin,x.judul);
    cout << "Masukkan pengarang Buku : " << endl;
    getline(cin,x.pengarang);
    cout << "Masukkan Jumlah halaman :" << endl;
    cin >> x.halaman;
    cin.sync();
    cout << "Masukkan penerbit:" << endl;
    getline(cin,x.penerbit);

    cout << endl << endl;

    cout << "ISBN buku:" << x.isbn << endl;
    cout << "Judul buku:" << x.judul << endl;
    cout << "Pengarang Buku :" << x.pengarang << endl;
    cout << "Jumlah Halaman :" << x.halaman << endl;
    cout << "Penerbit Buku :" << x.penerbit << endl;
}
