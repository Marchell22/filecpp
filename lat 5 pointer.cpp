#include <iostream>
#include <conio.h>

using namespace std;

void prosesPerpindahan(int data[],int y){
 int x;
 
 for(x=0;x<y;x++){
  cout<<data[x]<<" ";
 }
 
 cout<<endl;
}

void prosesSorting(int data[],int y){
 int proses,x,tampung;
 
 for(proses=1;proses<y;proses++){
  for(x=0;x<y-proses;x++){
   if(data[x]>data[x+1]){
    tampung=data[x];
    data[x]=data[x+1];
    data[x+1]=tampung;
   }
  }
  cout<<"Tahap Ke-"<<proses<<" : ";
  prosesPerpindahan(data,y);
 }
 
 
}

int main(){
 int data[]={6,10,15,12,11};
 int x;
 const int jumlahdata=5;
 
 prosesSorting(data,jumlahdata);
 
 cout<<endl;
 cout<<"Setelah Di Urutkan : "<<endl;
 prosesPerpindahan(data,jumlahdata);
 
}
