#include <iostream>
using namespace std;

void jumlah(int *x,int y){
	*x=y-1;
}
int main (){
	int a,b;
	cin>>b;
	jumlah(&a,b);
	cout<<a;
}
