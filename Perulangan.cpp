#include <iostream>
using namespace std;

int main () {
	int x,n;
	int rata,hasil;
	
	cout<<"jumlah mahasiswa : ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"Nilai Mahasiswa ke-"<<i<<": ";
		cin>>x;
		
		hasil=hasil+x;
	}
	rata=hasil/n;
	cout<<"rata-rata nilai mahasiswa adalah "<<rata<<endl;
	
	
}
