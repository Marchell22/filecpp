// Nama : Elsa Aprilla Manurung
// NIM : 120210239
// Prodi : Teknik Sipil
// Menghitung rata-rata tinggi badan dari 5 mahasiswa
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	float t1,t2,t3,t4,t5,avg;
 	
 	cout<<"Masukkan Tinggi Mahasiswa ke-1 = ";
 	cin>>t1;
 	cout<<"Masukkan Tinggi Mahasiswa ke-2 = ";
 	cin>>t2;
 	cout<<"Masukkan Tinggi Mahasiswa ke-3 = ";
 	cin>>t3;
 	cout<<"Masukkan Tinggi Mahasiswa ke-4 = ";
 	cin>>t4;
 	cout<<"Masukkan Tinggi Mahasiswa ke-5 = ";
 	cin>>t5;
 	
 	avg=(t1+t1+t3+t4+t5)/5;
 	
 	cout<<"Rata-rata tinggi kelima mahasiswa = "<<avg<<endl;
 }
