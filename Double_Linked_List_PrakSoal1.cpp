#include <iostream>
using namespace std;

struct ElmtList
{
    string namaPasien;
    int NKP;
    ElmtList* next;
    ElmtList* prev;

    ElmtList(){
        next = NULL;
        prev = NULL;
    }

    ElmtList(int nomor, string nama){
        NKP = nomor; 
        namaPasien = nama;
        next = NULL;
        prev = NULL;
    }
};

typedef ElmtList* address;

struct List

{
    address first;
    address last;
    List(){
        first = NULL;
        last = NULL;
    }
};

bool IsEmpty(List L)
{
    return L.first == NULL;
}

address Allocation(int NKP, string name)
{
    address NewElmt = new ElmtList(NKP, name);
    return NewElmt;
}

void InsertFirst(List* L, int NKP, string name)
{
    address NewElmt = Allocation(NKP, name);

    if(NewElmt != NULL)
    {
        if(!IsEmpty(*L)) NewElmt->next = (*L).first;
        else (*L).last = NewElmt;
        
        (*L).first = NewElmt;
    }
}

void printDataList(List L)
{
    address temp = L.first;
    int urutan = 1;

    while(temp != NULL)
    {
        cout << urutan << '\t' << temp->NKP << ' ' << temp->namaPasien << '\n';
        temp = temp->next;
        urutan++;
    }
}

void swapNode(address x, address y)
{
    string tempNamaPasien = x->namaPasien;
    int tempNKP = x->NKP;

    x->namaPasien = y->namaPasien;
    x->NKP = y->NKP;

    y->namaPasien = tempNamaPasien;
    y->NKP = tempNKP;
}

void bubbleSort(List *L)
{
    address start = (*L).first;
    address pos;
    bool swapCheck;

    if((*L).first == NULL) {
    	return;
	}

    do
    {
        swapCheck = false;
        pos = (*L).first;

        while(pos->next != NULL)
        {
            if(pos->NKP > pos->next->NKP)
            {
                swapNode(pos, pos->next);
                swapCheck = true;
            }

            pos = pos->next;
        }
    } while (swapCheck == true);
}

int main()
{
    List antrian;
    string nama;
    int NKP;

    cout << "Masukan daftar NIK dan nama pasien, lalu hentikan masukan dengan -999:\n";
    cout << "NKP : ";
    cin >> NKP;

    while(NKP != -999)
    {
        cout << "Nama : ";
        cin >> nama;
        InsertFirst(&antrian, NKP, nama);
        cout << "NKP : ";
        cin >> NKP;
    }

    bubbleSort(&antrian);
    printDataList(antrian);

    return 0;
}
