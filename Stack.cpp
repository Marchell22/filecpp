#include <iostream>
using namespace std;

#define maxStack 10

struct peserta{
	string nama,asal;
	int umur;
};

peserta pesertaBaru(string a, int b, string c){
	peserta psrt;
	psrt.nama = a;
	psrt.umur = b;
	psrt.asal = c;
	return psrt;
}

struct stack{
	peserta data[10];
	int head;
};

bool isEmpty(stack *stck){
	return stck->head == 0;
}

void newStack(stack *stck){
	stck->head = 0;
}

void push(stack *stck, string a, int b, string c){
	if(stck->head < maxStack){
		stck->data[stck->head++] = pesertaBaru(a,b,c);
	}
}

void pop(stack *stck){
	if(!isEmpty(stck)){
		stck->head--;
	}
}

void printStack(stack *stck){
	int idx = 1;
	for(int i = stck->head - 1; i >= 0; i--){
		cout << idx++ << " " << stck->data[i].nama << " " << stck->data[i].umur << " " << stck->data[i].asal << endl;
	}
}

int main(){
	int n;
	stack peserta;
	newStack(&peserta);
	cout << "masukan jumlah orang : ";
	cin >> n;
	for(int i = 0; i < n; i++){
		string a,c;
		int b;
		cout << "Nama: ";
		cin >> a;
		cout << "Umur: ";
		cin >> b;
		cout << "Asal: ";
		cin >> c;
		push(&peserta, a,b,c);
		cout << endl;
	}
	printStack(&peserta);
	
}
