#include <iostream>
#include <stdlib.h>
using namespace std;
 
 
typedef struct TElmtList *address;
typedef struct TElmtList{
   string namaPasien;
	address prev;
   int NKP;
   address next;
} ElmtList;
 
typedef struct List {
   address first;
   address last;
};
 
bool IsEmpty(List L){
   return (L.first == NULL && L.last == NULL);
}
 
void CreateEmpty(List *L){
   (*L).first = NULL;
   (*L).last = NULL;
}
 
address Allocation(int NKP, string name){
   address NewElmt;
   NewElmt = (ElmtList*) malloc (sizeof(ElmtList));
 
	NewElmt->prev = NULL;
	NewElmt->NKP  = NKP;
   NewElmt->namaPasien = name;
   NewElmt->next = NULL;
 
   return NewElmt;
}
 
void InsertFirst(List *L, int NKP, string name){
   address NewElmt;
   NewElmt = Allocation(NKP, name);
 
   if(NewElmt != NULL){
       NewElmt->next = (*L).first;
		if(!IsEmpty(*L)){
       	(*L).first->prev = NewElmt;
		}
		else{
			(*L).last = NewElmt;
		}
       (*L).first = NewElmt;
   }
}
 
void printDataList(List *L){
	address temp = (*L).first;
	int urutan = 1;
	while(temp != NULL){
		cout<< urutan <<'\t'<< temp->NKP <<' '<< temp->namaPasien <<'\n';
		temp = temp->next;
		urutan ++;
	}
	cout<<endl;
}
 
int main(){
	List antrian;
	int NKP;
	string nama;
 
	cout<<"Masukkan daftar NIK dan nama pasien, lalu hentikan masukan dengan -999:\n";
	cout<<"NKP  : ";cin>> NKP;//menerima masukan pertama
	while(NKP!=-999){//syarat perulangan adalah, inputan NIK tidak bernilai -999
		cout<<"Nama : ";cin>>nama;
		//memasukkan data pasien ke list
		InsertFirst(&antrian, NKP, nama);
		//menerima masukan berikutnya
		cout<<"NIK  : ";cin>> NKP;
	}
	printDataList(&antrian);
 
	return 0;
}

