#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    
    cout << "Masukan Jumlah keluarga";
    cin >> jumlah;
    
    string nama_karyawan[jumlah];
    int anak[jumlah];
    int istri[jumlah];
    int gaji[jumlah];
    int total[jumlah];
    int tunjangan[jumlah];
    
    for(int i = 0; i < jumlah; i++){
        
        anak[i] = 0;
        istri[i] = 0;
        gaji[i] = 0;
        total[i] = 0;
        tunjangan[i] = 0;
        
            
        cout << "Masukan Nama Karyawan Ke-" << i + 1 << ": ";
        cin >> nama_karyawan[i];
        cin.sync();
    
        cout << "Masukan jumlah anak dari-" << nama_karyawan[i] << ": ";
        cin >> anak[i];
        
        cout << "Masukan jumlah gaji dari-" << nama_karyawan[i] << ": ";
        cin >> gaji[i];
        
        cout << "Masukan jumlah istri dari-" << nama_karyawan[i] << ": ";
        cin >> istri[i];
        
        if(anak[i] >= 1){
            
            tunjangan[i] = (10/100) * gaji[i];
            
        }
        
        if(istri[i] >= 1){
            
            tunjangan[i] += (15/100) * gaji[i];
            
        }
        
        total[i] = gaji[i] + tunjangan[i];
        
        if(total[i] >= 3000000 && istri[i] > 0 && anak[i] == 2){
            
            cout << endl << nama_karyawan[i] << endl;
            cout << gaji[i] << endl;
            cout << tunjangan[i] << endl;
            cout << total[i] << endl;
            
        }else if( istri[i] == 0 && anak[i] == 1 && total[i] < 2000000 ){
            
            cout << endl << nama_karyawan[i] << endl;
            cout << gaji[i] << endl;
            cout << tunjangan[i] << endl;
            cout << total[i] << endl;
            
        }
        
    }

    return 0;
}

