//Nama : Elsi Aprina Manurung
//NIM : 120210240
//Prodi : Teknik Sipil
// Menentukan Bilangan Positif atau negatif atau nol
#include <iostream>
using namespace std;

int main () 
{
    float bil;
    
    cout<<"Masukan Bilangan : ";
    cin >>bil;
    
    if(bil>0){
        cout<<bil<<" Termasuk Bilangan Positif";
    }
    else if(bil<0){
        cout<<bil<<" Termasuk Bilangan Negatif";
    }
    else {
        cout<<bil<<" Adalah Bilangan Nol";
    }
}
