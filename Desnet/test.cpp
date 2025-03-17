#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int N)
{
    int counter = 0; // Untuk menghitung berapa kali IMax diperbarui

    for (int Pass = 0; Pass < N - 1; Pass++)
    {
        int IMax = Pass;

        for (int i = Pass + 1; i < N; i++)
        {
            if (arr[IMax] < arr[i])
            {
                IMax = i;
                counter++; // Setiap kali IMax berubah, counter bertambah
                cout << "IMax diperbarui: " << IMax << " dengan nilai " << arr[IMax] << endl;
                cout << i << endl;
            }
        }

        // Tukar nilai maksimum dengan nilai di posisi Pass
        int Temp = arr[IMax];
        arr[IMax] = arr[Pass];
        arr[Pass] = Temp;
    }

    cout << "Jumlah total pembaruan IMax: " << counter << " kali" << endl;
}

int main()
{
    int arr[] = {1, 9, 2, 8, 3, 7, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    selectionSortDescending(arr, N);

    // Menampilkan hasil akhir
    cout << "Array setelah diurutkan secara descending: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
