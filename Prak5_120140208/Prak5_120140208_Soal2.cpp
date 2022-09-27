//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal :08 April 2021
#include <iostream>
using namespace std;

struct mhs{
	string nama;
	string nim;
	float nilai;
};
mhs x[100];
int n,rata;

void printlulus(int a){
	if(a>=n){
		return;
	}
	if(x[a].nilai>rata){
		cout<< "Nama : "<<x[a].nama<<endl;
		cout<< " NIM : "<<x[a].nim<<endl;
		cout<<endl;
	}
	printlulus(a+1);
}

	

	
int main (){
	int sum=0;
	
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cin.ignore();
		
		cin>>x[i].nama;
		
		cin>>x[i].nim;
		
		cin>>x[i].nilai;
		sum=sum+x[i].nilai;
	}
	rata=sum/n;
	cout << "Nilai Rata-rata : " << rata << endl;
	cout << "Data Mahasiswa Lulus: " << endl << endl;
	
	printlulus(0);
}
