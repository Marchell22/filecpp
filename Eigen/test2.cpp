#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    cout << "Masukan Kalimat Anda : ";
    getline(cin, kalimat);
    int Max = 0, TotalPanjang = 0;
    int Mulai = 0, TotalMulai = 0;

    for (int i = 0; i <= kalimat.length(); i++)
    {
        if (kalimat[i] != ' ' && kalimat[i] != '\0')
        {
            if (TotalPanjang == 0) Mulai = i;
            TotalPanjang++; 
        }
        else
        {
            if (TotalPanjang > Max)
            {
                Max = TotalPanjang;
                TotalMulai = Mulai;
            }
            TotalPanjang = 0;
            
        }
    }
    int PanjangKarakter = 0;
    for (int i = TotalMulai; i < TotalMulai + Max; i++)
    {
        cout << kalimat[i];
        PanjangKarakter++;
    }
    cout << endl;
    cout << PanjangKarakter << " character";
    cout << endl;
    return 0;
}