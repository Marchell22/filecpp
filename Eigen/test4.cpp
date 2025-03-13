#include <iostream>
using namespace std;

int main()
{
    int indexMatrix;
    cout << "Masukan ukuran Matriks : ";
    cin >> indexMatrix;

    int matriks[indexMatrix][indexMatrix];

    cout << "Masukan Elemen Matriks" << endl;
    for (int i = 0; i < indexMatrix; i++)
    {
        for (int j = 0; j < indexMatrix; j++)
        {
            cout << "Matriks Elemen [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matriks[i][j];
        }
    }
    int diagonalKanan = 0, diagonalKiri = 0;
    cout << "Diagonal Pertama = ";
    for (int i = 0; i < indexMatrix; i++)
    {
        cout << matriks[i][i];
        if (i >= indexMatrix - 1)
        {
            cout << " = ";
        }
        else
        {
            cout << " + ";
        }
        diagonalKanan += matriks[i][i];
    }
    cout << diagonalKanan;

    cout << endl;

    cout << "Diagonal Kedua = ";
    for (int i = 0; i < indexMatrix; i++)
    {
        cout << matriks[i][indexMatrix - 1 - i];
        if (i >= indexMatrix - 1)
        {
            cout << " = ";
        }
        else
        {
            cout << " + ";
        }
        diagonalKiri += matriks[i][indexMatrix - 1 - i];
    }
    cout << diagonalKiri;
    cout << endl;
    cout << "Maka Hasilnya adalah " << diagonalKanan << " - " << diagonalKiri << " = " << diagonalKanan - diagonalKiri;
    return 0;
}