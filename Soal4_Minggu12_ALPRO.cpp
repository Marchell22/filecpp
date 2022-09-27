#include <iostream>
using namespace std;

int main(){
	int vokal=0, konsonan=0, spasi=0, angka=0;
	char kal[100];
	
	cout << "Masukkan kalimat = ";
	cin.getline(kal,100);
	
	for (int i = 0; i < kal[i]; i++){
		if (kal[i] == 'A' || kal[i] == 'a' || kal[i] == 'I' || kal[i] == 'i' || kal[i] == 'U' || kal[i] == 'u'|| kal[i] == 'E' || kal[i] == 'e' || kal[i] == 'O' || kal[i] == 'o'){
			vokal = vokal + 1;
		}else if(kal[i] == ' '){
			spasi = spasi + 1;
		}else if(kal[i] == '1' || kal[i] == '2' || kal[i] == '3' || kal[i] == '4'
				|| kal[i] == '5' || kal[i] == '6' || kal[i] == '7' || kal[i] == '8'
				|| kal[i] == '9' || kal[i] == '0'){
			angka = angka + 1;
		}else{
			konsonan = konsonan + 1;
		}
	}
	
	cout << "Jumlah huruf Vokal ada " << vokal << " huruf" << endl;
	cout << "Jumlah huruf Konsonan ada " << konsonan << " huruf" << endl;
	cout << "Jumlah angka dalam kalimat ada " << angka << " angka" << endl;
}
