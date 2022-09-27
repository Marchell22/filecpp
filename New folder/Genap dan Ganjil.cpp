#include <iostream>
using namespace std;

int main() {
    int N, i, bil, sum_ganjil = 0, sum_genap = 0;

    cin >> N;

    for (i = 1; i <= N; i++) {
        cout << "angka =";
        cin >> bil;

        if (bil % 2 == 0) {
            sum_genap += bil;
        }
        else {
            sum_ganjil += bil;
        }
    }
    cout << "Jumlah Bilangan Ganjil=" << sum_ganjil << endl;
    cout << "Jumlah Bilangan Genap=" << sum_genap << endl;
}
