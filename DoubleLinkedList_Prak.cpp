#include <iostream>
#include <stdlib.h>
using namespace std;
 
 
typedef struct TElmtList *address;
typedef struct TElmtList{
   string namaPasien;
    int NKP;
	address prev;
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
 
 
void InsertFirst(List *L, int NKP, string name){
   address NewElmt;
   NewElmt = new ElmtList;
	NewElmt->prev = NULL;
	NewElmt->NKP  = NKP;
	NewElmt->namaPasien = name;
	NewElmt->next = NULL;
 
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
void InsertAfter(address *PredElmt, int NKP, string name){
    address NewElmt;
    NewElmt = new ElmtList;
	NewElmt->prev = NULL;
	NewElmt->NKP  = NKP;
	NewElmt->namaPasien = name;
	NewElmt->next = NULL;
	
    if(NewElmt != NULL){
        NewElmt->next = (*PredElmt)->next;
        (*PredElmt)->next = NewElmt;
    }
}
void InsertLast(List *L, int NKP, string name){
    if(IsEmpty(*L)){
        InsertFirst(&(*L), NKP, name);
    } else {
        address temp;
        temp = (*L).first;
        while (temp->next != NULL){
            temp = temp->next;
        }
        InsertAfter(&temp, NKP, name);
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
void printDataList2(List *L){
	address temp = (*L).first;
	while(temp != NULL){
		cout<< '\t'<< temp->NKP <<' '<< temp->namaPasien <<'\n';
		temp = temp->next;
	}
	cout<<endl;
}

void Sort(List *L)
{
    string tempNamaPasien;
    int tempNKP;
    address tmp;
    bool Check;

    if((*L).first == NULL) return;

    do
    {
        Check = false;
        tmp = (*L).first;

        while(tmp->next != NULL)
        {
            if(tmp->NKP > tmp->next->NKP)
            {
                tempNamaPasien = tmp->namaPasien;
    			tempNKP = tmp->NKP;

 				tmp->namaPasien = tmp->next->namaPasien;
    			tmp->NKP = tmp->next->NKP;

    			tmp->next->namaPasien = tempNamaPasien;
   				tmp->next->NKP = tempNKP;
                Check = true;
            }

            tmp = tmp->next;
        }
    } while (Check == true);
}
int main(){
	List antrian;
	int NKP;
	string nama;
	
	CreateEmpty(&antrian);
	
 
	cout << "Masukkan daftar NIK dan nama pasien, lalu hentikan masukan dengan -999:\n";
	cout << "NKP  : ";
	cin >> NKP;
	while(NKP!=-999){
		cout << "Nama : ";
		cin >> nama;
		InsertLast(&antrian, NKP, nama);
		cout<<"NKP  : ";
		cin>> NKP;
	}
	printDataList(&antrian);
	
	Sort(&antrian);
    printDataList2(&antrian);
 
	return 0;
}

