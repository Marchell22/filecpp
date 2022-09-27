#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
	address next;
	infotype info;
}ElmtList;

typedef struct List{
	address first;
};

bool IsEmpty (List L){
	if((L).first == NULL){
		return true;
	}else{
		return false;
	}
}

void CreateEmpty(List *L){
	(*L).first = NULL;
}

address Allocation (infotype x){
	address NewElmt;
	NewElmt = (ElmtList*) malloc (sizeof(ElmtList));
	
	NewElmt->info = x;
	NewElmt->next = NULL;
	
	return NewElmt;
}

void InsertFirst (List *L, infotype x){
	address NewElmt;
	NewElmt = Allocation (x);
	
	if(NewElmt != NULL){
		NewElmt->next = (*L).first;
		(*L).first = NewElmt;
	}
}

void InsertAfter(address *PredElmt, infotype x){
	address NewElmt;
	NewElmt = Allocation (x);
	
	if(NewElmt != NULL){
		NewElmt->next = (*PredElmt)->next;
		(*PredElmt)->next = NewElmt;
	}
}

void InsertLast(List *L, infotype x){
	
	if(IsEmpty(*L)){
		InsertFirst(L, x);
		
	}else{
		address temp;
		temp = (*L).first;
		while (temp->next != NULL){
			temp = temp->next;
		}
		InsertAfter(&temp, x);
	}
}

int main(){
	List L;
	CreateEmpty(&L);

	//Soal A
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;	
		InsertFirst(&L, x);
		InsertLast(&L, x);
	}
	address temp = (L).first;
	while (temp != NULL){
		cout << temp->info << ", ";
		temp = temp->next;
	}
}
