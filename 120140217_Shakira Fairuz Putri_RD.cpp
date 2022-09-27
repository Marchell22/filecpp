// SOAL 1
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kata[100], huruf[10];
	
	cout << "Masukkan kata = ";
	cin.getline(kata, 100);
	
	cout << "Masukkan huruf yang ingin dicari = ";
	cin.getline(huruf, 10);
	
	if(strstr (kata, huruf)){
		cout << "Huruf "<< huruf <<" terdapat dalam kata.";
	}else{
		cout << "Huruf "<< huruf <<" tidak terdapat dalam kata.";
	}
}

// SOAL 2
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kalimat[100];
	char cari[10];
	
	cout << "Masukkan sebuah kalimat = ";
	cin.getline(kalimat, 100);
	
	cout << "Masukkan kata yang ingin dicari = ";
	cin.getline(cari, 10);
	
	if (strstr (kalimat, cari)){
		cout << "Kata " << cari << " ditemukan";
	}else{
		cout << "Kata " << cari << " tidak ditemukan";
	}
}

// SOAL 3
#include <iostream>
using namespace std;

int main(){
	int vokal = 0, konsonan = 0, spasi = 0;
	char kal[100];
	
	cout << "Masukkan kalimat = ";
	cin.ignore();
	cin.getline(kal, 100);
	
	for (int i = 0; i < kal[i]; i++){
		if (kal[i] == 'A' || kal[i] == 'a'){
			vokal = vokal + 1;
		}else if (kal[i] == 'I' || kal[i] == 'i'){
			vokal = vokal + 1;
		}else if (kal[i] == 'U' || kal[i] == 'u'){
			vokal = vokal + 1;
		}else if (kal[i] == 'E' || kal[i] == 'e'){
			vokal = vokal + 1;
		}else if (kal[i] == 'O' || kal[i] == 'o'){
			vokal = vokal + 1;
		}else if (kal[i] == ' '){
			spasi = spasi + 1;
		}else{
			konsonan = konsonan + 1;
		}
	}
	cout << "Jumlah huruf Vokal ada " << vokal << " huruf" << endl;
	cout << "Jumlah huruf Konsonan ada " << konsonan << " huruf" << endl;
}

// SOAL 4
#include <iostream>
using namespace std;

int main(){
	int vokal = 0, konsonan = 0, spasi = 0, angka = 0;
	char kal[100];
	
	cout << "Masukkan kalimat = ";
	cin.ignore();
	cin.getline(kal, 100);
	
	for (int i = 0; i < kal[i]; i++){
		if (kal[i] == 'A' || kal[i] == 'a'){
			vokal = vokal + 1;
		}else if (kal[i] == 'I' || kal[i] == 'i'){
			vokal = vokal + 1;
		}else if (kal[i] == 'U' || kal[i] == 'u'){
			vokal = vokal + 1;
		}else if (kal[i] == 'E' || kal[i] == 'e'){
			vokal = vokal + 1;
		}else if (kal[i] == 'O' || kal[i] == 'o'){
			vokal = vokal + 1;
		}else if (kal[i] == '1' || kal[i] == '2' || kal[i] == '3' || kal[i] == '4'
				|| kal[i] == '5' || kal[i] == '6' || kal[i] == '7' || kal[i] == '8'
				|| kal[i] == '9' || kal[i] == '0'){
			angka = angka + 1;
		}else if (kal[i] == ' '){
			spasi = spasi + 1;
		}else{
			konsonan = konsonan + 1;
		}
	}
	cout << "Jumlah huruf Vokal dalam kalimat ada " << vokal << " huruf" << endl;
	cout << "Jumlah huruf Konsonan dalam kalimat ada " << konsonan << " huruf" << endl;
	cout << "Jumlah angka dalam kalimat ada " << angka << " angka" << endl;
}
