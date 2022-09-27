//Nama : Marchell Manurung
//NIM : 120140208
//Tanggal : 18 Maret 2021
//Deskripsi : Kumpulan smartphone
#include <iostream>
using namespace std;

struct mhs {
	string nama;
	string merek;
	string proces;
	string baterai;
};

int main() {
	int n;
	string username = "JoJoseph";
	string pass = "IniPassword";
	
	cin >> username;
	cin >> pass;
	cin >> n;

	mhs x[100];
	if (username == "JoJoseph"){
		if(pass == "IniPassword"){
			for(int i = 0; i < n; i++){
				cin.ignore();
				getline(cin, x[i].nama);
				getline(cin, x[i].merek);
				getline(cin, x[i].proces);
		 		getline(cin, x[i].baterai);
		 	}
		 }
	}
	for (int i = 0; i < n; i++) {
		cout << "Welcome! " << endl;
		cout << "Smart1 : " << x[i].nama << " " << x[i].merek << " " << x[i].proces << " " << x[i].baterai << "mAh";
	}
}

