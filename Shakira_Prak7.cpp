#include <iostream>
using namespace std;

struct mhs{
	string nama;
	int nim;
	string gender;
	int nilai;
	string ket;
};
int main(){
	mhs x[100];
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>x[i].nama;
		cin>>x[i].nim;
		cin>>x[i].gender;
		if(x[i].gender == "L"){
			x[i].gender = "Laki-laki";
		}else if(x[i].gender == "P"){
			x[i].gender = "Perempuan";
		}
		cin>>x[i].nilai;
		if(x[i].nilai >= 81){
			x[i].ket = "Sangat baik dan Lulus";
		}else if(x[i].nilai >= 61 && x[i].nilai <= 80){
			x[i].ket = "Baik dan Lulus";
		}else if(x[i].nilai >= 41 && x[i].nilai <= 60){
			x[i].ket = "Kurang baik dan Lulus";
		}else if(x[i].nilai >= 0 && x[i].nilai <= 40){
			x[i].ket = "Buruk dan Mengulang";
		}
	}
	int j =0, cari;
	cin >> cari;
	
	for (int i=0; i<n; i++){
		if (cari==x[i].nim){
			cout <<"Nama : "<<x[i].nama<<endl;
			cout<<"Jenis Kelamin : "<<x[i].gender<<endl;
			cout<<"Keterangan : "<<x[i].ket<<endl;
			j++;
		}
		if(j == 0){
			cout<<"Data Mahasiswa Tidak Ditemukan"<<endl;
		}
		return 0;
	}
}
