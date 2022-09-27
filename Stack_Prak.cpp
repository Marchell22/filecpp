#include <iostream>
using namespace std;

#define nill 0
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
	peserta data[maxStack+1];
	int head;
};

#define head(stck) (stck).head
#define InfoTop(stck) (stck).data[(stck).head]

boolean isEmpty(stack *stck){
	return head(*stck)== nill;
}

void newStack(stack *stck){
	head(*stck) = nill;
}

void push(stack *stck, string a, int b, string c){
	if(head(*stck) < maxStack){
		InfoTop(stck++) = pesertaBaru(a,b,c);
	}
}

void pop(stack *stck){
	if(!isEmpty(stck)){
		head(stck)--;
	}
}

void printStack(stack *stck){
	int idx = 1;
	for(int i = head(stck) - 1; i >= 0; i--){
		cout << idx++ << "\t" << (stck).data[i].nama << "\t" << (stck).data[i].umur << "\t" << (stck).data[i].asal << endl;
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
