#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
	char kalimat[100];
	char cari [10];

	
	cout << "Masukan Kalimat : ";
	cin.getline(kalimat,100);
	
	cout << "Masukan kata yang dicari :";
	cin.getline(cari,10); 
	
	if( strstr (kalimat,cari)){
		cout<< "kata " << cari << " ditemukan didalam kata ";
	}
	else{
		cout<<"kata "<<cari<<" tidak ditemukan didalam kata ";
	}
}
