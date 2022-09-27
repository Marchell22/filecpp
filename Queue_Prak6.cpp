#include <iostream>
using namespace std;

#define nil 0
#define max 10

typedef string infotype;
typedef int address;
typedef struct{
  address head;
  address tail;
  infotype data[max+1];
} Queue;

#define Head(Q) (Q).head
#define Tail(Q) (Q).tail
#define InfoTail(Q) (Q).data[(Q).tail]
#define InfoHead(Q) (Q).data[(Q).head]

void CreateEmpty( Queue *Q ){
  Head(*Q) = nil;
  Tail(*Q) = nil;
}

bool isEmpty( Queue Q ){
  return Head(Q) == nil && Tail(Q) == nil;
}

int NbElmt( Queue Q ){
  if( isEmpty(Q) ){
    return 0;
  }else{
    if( Head(Q) <= Tail(Q) ){
      return ( Tail(Q) - Head(Q) +1  );
    }else{
      return (max - Head(Q) + Tail(Q) +1);
    }
  }
}

bool isFull( Queue Q ){
  return (NbElmt(Q) == max);
}

void Add( Queue *Q , infotype x){
  if( ! (isFull(*Q)) ){
      if( isEmpty(*Q) ){
        Head(*Q) = 1;
        Tail(*Q) = 1;
      }else{
        if( Tail(*Q) == max ){ 
          Tail(*Q) = 1;
        }else{ 
          Tail(*Q)++;
        }
      }
      InfoTail(*Q) = x;
  }else{
    cout<<"Queue penuh";
  }
}

void Del( Queue *Q, infotype *x ){
  *x = InfoHead(*Q);
  if(  Head(*Q) ==  Tail(*Q) ){
     Tail(*Q) = nil;
     Head(*Q) = nil;
  }else{
    if( Head(*Q) == max ) Head(*Q) =1;
    else Head(*Q)++;
  }
}

int main(){

	Queue Antrian;
	CreateEmpty(&Antrian);
	
	int n;
	string umur, nama,asal;
	cin >>n;
	
	for(int i = 0; i < n;i++){
		cout << "Nama :";
		cin >> nama;
		cin.ignore();
		cout << "Umur(tahun):";
		getline(cin, umur);
		cout << "Asal:";
		getline(cin, asal);
		Add(&Antrian, nama);
		Add(&Antrian, umur);
		Add(&Antrian, asal);
		cout << endl;
	}
	cout << "Nama\t\t\tUmur\t\t\tAsal\n";
	
	for(int i=1; i<=n; i++){
		cout << InfoHead(Antrian) ;	
		Del(&Antrian, &InfoHead(Antrian));
		cout << "\t\t\t";
		
		cout << InfoHead(Antrian) ;	
		Del(&Antrian, &InfoHead(Antrian));
		cout <<"\ttahun\t\t";
		
		cout << InfoHead(Antrian) ;	
		Del(&Antrian, &InfoHead(Antrian));

		cout << endl;
	}
}
