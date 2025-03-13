#include <iostream>
using namespace std;

int main() {
    int jumlahMataKuliah;
    double totalSKS = 0.0, totalNilai = 0.0;

    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlahMataKuliah;

    for (int i = 0; i < jumlahMataKuliah; i++) {
        double sks, nilai;
        cout << "Masukkan SKS untuk mata kuliah " << i + 1 << ": ";
        cin >> sks;
        cout << "Masukkan nilai untuk mata kuliah " << i + 1 << ": ";
        cin >> nilai;

        totalSKS += sks;
        totalNilai += (nilai * sks);
    }

    double ipk = totalNilai / totalSKS;

    cout << "IPK Anda adalah: " << ipk << endl;

    return 0;
}

