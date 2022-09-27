#include <iostream>
using namespace std;

struct data{
	string nim;
	string nama;
};
int main(){
	int n;
	
	cin >> n;
	
	data x[n];
	
	for(int i = 0; i < n; i++){
		cin >> x[i].nama >> x[i].nim;
	}
	cout <<"Data Mahasiswa:" << endl;
	for(int i = n-1; i >= 0; i--){
		cout << x[i].nama <<" " << x[i].nim << endl;
	}
}
