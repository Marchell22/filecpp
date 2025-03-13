#include <iostream>
using namespace std;

int main(){
	int bulat;
	cout << "Masukan Bilangan Bulat : ";
	cin >> bulat;
	
	int i = 2;
	bool isPrime = true;
	
	while(i < bulat && isPrime){
		if(bulat % i == 0 && bulat != 2 && bulat != 3){
			isPrime = false;
		}
		i++;
	}
	if(isPrime){
		cout << "Bilangan yang kita inputkan merupakan bilangan prima";
	}else{
		cout << "Bilangan yang kita inputkan merupakan bukan bilangan prima";
	}
}
