#include <iostream>
using namespace std;

int main (){
    int pilihan, a, b, hasil;
    
    cout<<"Menu Pilihan : "<<endl;
    cout<<"1.Tambah"<<endl;
    cout<<"2.Kurang"<<endl;
    cout<<"3.Kali"<<endl;
    cout<<"4.Bagi"<<endl;
    
    cout<<endl<<endl;
    
    cout<<"Masukkan angka 1 : ";
    cin>>a;
    cout<<"Masukkan Angka 2 : ";
    cin>>b;
    
    cout<<endl;
    cout<<"Masukan Pilihan :";
    cin>>pilihan;
    
    switch(pilihan){
        case 1 : 
            cout<<"Operasi Tambah"<<endl;
            hasil = a+b;
            cout<<hasil;
            break;
        case 2 :
            cout<<"Operasi Kurang "<<endl;
            hasil=a-b;
            cout<<hasil;
            break;
        case 3 :
            cout<<"Operasi Kali"<<endl;
            hasil=a*b;
            cout<<hasil;
            break;
        case 4 :
            cout<<"Operasi Bagi "<<endl;
            hasil=a/b;
            cout<<hasil;
            break;
        default : 
            cout<<"Tidak Terdapat Pilihan "<<endl;
        
    }
    
}
