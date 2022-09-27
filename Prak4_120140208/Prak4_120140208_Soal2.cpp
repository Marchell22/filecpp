//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal :25 MARET 2021
//Deskripsi : PEDAGANG UNTUNG
#include <iostream>
#include <math.h>
using namespace std;

struct mhs{
	float a;
	float b;
	
};
int main (){
	int n,y;
	int min;
	float jarak[100];
	
	cin>>n;
	mhs x[100];
	for(int i=0;i<n;i++){
	cin>>x[i].a>>x[i].b;
	
	}
	for(int i=0;i<n;i++){
		jarak[i]=sqrt(pow(x[i].a,2)+pow(x[i].b,2));
		
		if(jarak[i]<min){
			min=jarak[i];
			
		}
	}
	cout<<x[y].a<<" "<<x[y].b;

}
