#include <iostream>
using namespace std;

#define Nil 0
#define MaxEl 10

typedef string infotype;
typedef int address;
typedef struct{
	infotype data[MaxEl+1];
	address TOP;	
}stack;

#define TOP(S)			(S).TOP
#define InfoTop(S)		(S).data[(S).TOP]

void CreateEmpty(stack *S){
	TOP(*S) = Nil;
}

bool IsEmpty(stack S){
	return (TOP(S) == Nil);
}

bool IsFull(stack S){
	return (TOP(S) == MaxEl);
}

void Push(stack *S, infotype X) {
	if (!IsFull(*S)) {
		TOP(*S)++;
		InfoTop(*S)= X;
	} else {
		cout << "Stack Penuh";
	}
}

void Pop(stack *S, infotype *X) {
	if (!IsEmpty(*S)) {
		*X = InfoTop(*S);
		TOP(*S)--;
	} else {
		cout << "Stack Kosong";
	}
}


int main(){
	stack Nama;
	stack Umur;
	stack Asal;
	CreateEmpty(&Nama);
	CreateEmpty(&Umur);
	CreateEmpty(&Asal);
	string nama,umur,asal;
	infotype Datanama,Dataumur,Dataasal;
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Nama :";
   		cin >> nama;
    	Push(&Nama, nama);
		cout << "Umur(tahun):";
		cin >> umur;
    	Push(&Umur, umur);
		cout << "Asal:";
		cin.ignore();
	    getline(cin, asal);
		Push(&Asal, asal);
	    cout << endl;
	}
	cout << "No\tNama\tUmur\t\tAsal\n";
	for(int i = 0; i < n; i++){
		Pop(&Nama, &Datanama);
		Pop(&Umur, &Dataumur);
		Pop(&Asal, &Dataasal);
		cout << i+1 << "\t" <<  Datanama << "\t" << Dataumur << "\t\t" << Dataasal << "\n";
	}
	
}
