#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    int jumlah = 0;

    for (int i = 2; i <= N; i++)
    {
        for (int j = 3; j <= N; j++)
        {
            jumlah++;
            cout << "XXX" << endl;

        }
    }
    cout << "Jumlah" << jumlah<< endl;

    return 0;
}
