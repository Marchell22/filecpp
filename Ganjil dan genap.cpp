#include <iostream>
using namespace std;

int main()
{
    int angka[5];
    int hasil[5];
    
    for(int i = 0; i < 5; i++){
        cout << "Masukan Angka Ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    
    for(int j = 0; j < 5; j++){
        hasil[j] = angka[j] %2;
        switch(hasil[j]) {
          case 0:
            cout << angka[j] << " Merupakan Angka Genap" << endl;
            break;
          case 1 :
            cout << angka[j] << " Merupakan Angka Ganjil" << endl;
            break;
            default :
            	cout<<angka[j]<<" Bilangan Nol"<<endl;
            	break;
        }
           
    }

}
