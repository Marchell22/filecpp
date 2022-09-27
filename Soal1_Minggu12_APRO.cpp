#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
	char kata[25];
	char cari [10];

	
	cout << "Masukan sebuah kata : ";
	cin.getline(kata,25);
	
	cout << "Masukan kata yang dicari :";
	cin.getline(cari,10); 
	
	if( strstr (kata,cari)){
		cout<< "karakter " << cari << " ditemukan didalam kata ";
	}
	else{
		cout<<"karakter "<<cari<<" tidak ditemukan didalam kata ";
	}
}
