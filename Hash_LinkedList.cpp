#include<iostream>
#include<string>
using namespace std;


#define Nil NULL
#define max 100

#define info(P) (P)->angka
#define next(P) (P)->next
#define first(H,i) (H)[i].first

typedef int infotype;
typedef struct TNode *address;
typedef struct TNode{
    infotype angka;
    address next;
}node;

address createnew(infotype data){
    address newnode;
    newnode = new node;

    info(newnode) = data;
    next(newnode) = Nil;

    return newnode;
}

bool isempty(address first){
    return first == Nil;
}

void insertfirst(address *first,infotype data){
    address newnode;
    newnode = createnew(data);
    next(newnode) = *first;
    *first = newnode;
}

void insertlast(address *first, infotype data){
    address newnode;
    newnode = createnew(data);
    address cur = *first;
    while (cur->next != Nil){
        cur = next(cur);
    }
    next(cur) = newnode;
}


void ascii(infotype data){
    int tag = 1;
    for(int i = 65 ;i <=90;i++){
        if(data != i){
            if(data == 32){
            	cout << " ";
            	break;
			}
			else{
				tag++;
			}
        }
        else if(data == i){
            cout << char(91-tag);
        }
    }
}

typedef struct THash *addhash;
typedef struct THash{
    address first;
}Hash;

void CreateEmpty(addhash datahash){
    for(int i=0;i<max;i++){
        first(datahash,i) = Nil;
    }
}

void insertdata(addhash datahash, infotype x ){
    int index = 1;
    address *first = &(first(datahash,index));

    if(isempty(*first)){
        insertfirst(first,x);
    }
    else{
        insertlast(first,x);
    }
}

void cetak(addhash datahash){
    for(int i=0;i<max;i++){
        address first = first(datahash,i);

        address temp = first;
        while(temp != Nil){
            ascii(info(temp));
            temp = next(temp);
        }
    }
}

int main(){
    Hash data[100];
    string kata;
    cout << "Masukkan kalimat (Huruf Kapital) : ";
    getline(cin, kata);
    CreateEmpty(data);
    for(int i=0; i<kata.length(); i++){
        insertdata(data, (int)kata[i]);
    }

    cetak(data);
}
