#include <iostream>
using namespace std;

struct data{
	string nama;
	string istri;
	int jumlah;
	int gajipokok;
	int totalgaji;
	int tunjangananak;
	int tunjanganistri;
};
int main(){
	int n;
	int jumlah;
	
	cout <<"banyak karyawan = ";
	cin >> n;
	
	data x[n];
	
	for(int i = 0; i < n; i++){
		cout << "Karyawan ke- " << i+1 << endl;
		cout <<"Masukkan nama karyawan = ";
		cin >> x[i].nama;
		cin.sync();
		
		cout <<"apakah ada istri (ada / tidak ada) = ";
		cin >> x[i].istri;
		
		cout <<"Masukkan jumlah anak = ";
		cin>>x[i].jumlah;
		
		cout <<"Masukkan gaji pokok = ";
		cin>>x[i].gajipokok;
		
		cout <<"Masukkan total gaji = ";
		cin>>x[i].totalgaji;
		
		x[i].tunjangananak = x[i].gajipokok*10/100;
		cout <<" tunjangan anak pertama = " << x[i].tunjangananak <<endl;
		
		x[i].tunjanganistri = x[i].gajipokok*15/100;
		cout <<" tunjangan istri = " << x[i].tunjanganistri <<endl;
			}
	cout <<"Menampilkan data karyawan yang mepunyai istri dan 2 orang anak serta gaji di atas Rp 3.000.000 " << endl;
	for(int i = 0; i < n; i++){
		if(x[i].jumlah == 2 && x[i].istri == "ada" &&x[i].gajipokok>3000000){
			jumlah = jumlah + 1;
			cout <<"Nama karyawan = " << x[i].nama << endl;
			cout <<"istri = " << x[i].istri << endl;
			cout <<"jumlah anak = " << x[i].jumlah << endl;
			cout <<"gaji pokok = " << x[i].gajipokok<< endl;
			cout <<"total gaji = " << x[i].totalgaji << endl;
			cout <<"Tunjangan anak = " << x[i].tunjangananak << endl;
			cout <<"Tunjangan istri = " << x[i].tunjanganistri << endl;
			cout << endl << endl;
		}
		
	for(int i = 0; i < n; i++){
		if(x[i].jumlah == 1 && x[i].istri == "tidak ada" && x[i].gajipokok<2000000){
			jumlah = jumlah + 1;
			cout <<"Nama karyawan = " << x[i].nama << endl;
			cout <<"istri = " << x[i].istri << endl;
			cout <<"jumlah anak = " << x[i].jumlah << endl;
			cout <<"gaji pokok = " << x[i].gajipokok<< endl;
			cout <<"total gaji = " << x[i].totalgaji << endl;
			cout <<"Tunjangan anak = " << x[i].tunjangananak << endl;
			cout <<"Tunjangan istri = " << x[i].tunjanganistri << endl;
			cout << endl << endl;
		}
	}
}
}
