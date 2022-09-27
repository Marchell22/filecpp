#include <iostream>
using namespace std;

int pangkatIterasi(int a,int b){
	int hasil = a;
	for(int i=1; i<b; i++){
		if(b==0){
			return 1;
		}
		else if(b>=1){
			hasil=hasil*a;
			return hasil;
		}
	}

}
int main ()
{
	int a,b;
	cout<<"angka = ";cin>>a;
	cout<<"pangkat = ";cin>>b;
	
	cout<<"hasil = "<<pangkatIterasi(a,b);

}
