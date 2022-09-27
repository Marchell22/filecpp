#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
	string nama, nim, nohp;
	Node *next;
};

struct List{
	Node *first;
};

Node *ujung, *temp, *NewNode, *hapus, *before;

void CreateEmpty(List *L){
	(*L).first = NULL;
}

void InsertFirst(List *L, string nama, string nim, string nohp){
	NewNode = new Node();
    NewNode->nama = nama;
    NewNode->nim = nim;
    NewNode->nohp = nohp;
    NewNode->next = (*L).first;
    (*L).first = NewNode;
}

void InsertLast(List *L, string nama, string nim, string nohp){
	NewNode = new Node();
    NewNode->nama = nama;
    NewNode->nim = nim;
    NewNode->nohp = nohp;
	
	ujung = (*L).first;
	while(ujung->next != NULL){
		ujung = ujung->next;
	}
	NewNode->next = ujung->next;
	ujung->next = NewNode;
}

void GabungList(List *L, List *M){
    ujung = (*L).first;
    while(ujung->next != NULL){
        ujung = ujung->next;
    }
    ujung->next = (*M).first;
}

void PrintList(List *L1){
	temp = (*L1).first;
	int antrian = 1;
	
	while (temp != NULL){
		cout << "NO.Antrian : " << antrian << endl;
		cout << "Nama		: " << temp->nama << endl;
		cout << "NIM/NP		: " << temp->nim << endl;
		cout << "No Telepon	: " << temp->nohp << endl << endl;
		antrian++;
		temp = temp->next;
	}
}

void Delete(List *L){
	hapus = (*L).first;
    (*L).first = (*L).first->next;
    delete hapus;
}

void DeleteNode(List *L, string targetnim){
	if ((*L).first->nim == targetnim){
        Delete(&(*L));
    } else{
        temp = (*L).first;
        while(temp->nim != targetnim){
            before = temp;
            temp = temp->next;
            if (temp->next == NULL){
                break;
            }
        }
        hapus = temp;
        before->next = temp->next;
        delete hapus;
    }
}

int main(){
	List L1,L2;
	CreateEmpty(&L1);
	CreateEmpty(&L2);
	string nama,nohp,nim;
	int ulang;
	
	int cek = 0;
	cout << "Pendaftaran Normal : " << endl;
	do{
		cin.sync();
		
		cout << "Nama 		: ";
		getline(cin, nama);
				
		cout <<"NIM/NP 		: ";
		getline(cin, nim);
		
		cout <<"No Ponsel 	: ";
		getline(cin, nohp);
		
		if(cek != 0){
			InsertLast(&L1,nama,nim,nohp);
		}else{
			InsertFirst(&L1,nama,nim,nohp);
		}
		cek++;
		
		cout << "Apakah masih ada data lain? (0 = tidak, 1 = ya)";
		cin >> ulang;
	}while(ulang != 0);
	
	cek = 0;
	cout << "Pendaftaran Akhir : " << endl;
	do{
		cin.sync();
		
		cout << "Nama 		: ";
		getline(cin, nama);
		
		cout <<"NIM/NP 		: ";
		getline(cin, nim);
		
		cout <<"No Ponsel 	: ";
		getline(cin, nohp);
			
		if(cek != 0){
			InsertLast(&L2,nama,nim,nohp);
		}else{
			InsertFirst(&L2,nama,nim,nohp);
		}
		cek++;
		
		cout << "Apakah masih ada data lain? (0 = tidak, 1 = ya)";
		cin >> ulang;
	}while(ulang != 0);
	
	GabungList(&L1, &L2);
	
	cout << endl << "DATA ANTRIAN VAKSINISASI" << endl;
	PrintList(&L1);
	
	string targetnim;
	cout << "Data Peserta yang tidak hadir : " << endl;
	do{
		cout << "NIM/NP 	: ";
		cin >> targetnim;
		DeleteNode(&L1, targetnim);
		
		cout << "Apakah masih ada yang lain? (0 = tidak, 1 = ya)";
		cin >> ulang;
	}while(ulang != 0);
	
	cout << endl << "Data Peserta yang telah divaksinasi" << endl;
    PrintList(&L1);
    
    return 0;
}
