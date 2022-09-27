#include <iostream>
using namespace std;

int pangkat(int a, int b){
	if(b<=0){
		return 1;
	}else {
		return a * pangkat(a,b-1);
	}
}

int main(){
	int a,b;
	cout<<"angka = ";cin>>a;
	cout<<"pangkat = ";cin>>b;
	
	cout<<"hasil = "<<pangkat(a,b);


}
