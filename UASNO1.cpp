#include <iostream>
using namespace std;

bool cekAngka( int i){
	return ( i % 2 == 0);
}
void sederhana( int data, int id){
	if ( id > 0 && cekAngka (id)){
		sederhana (data + 1, id - 2);
	}else if (id > 0 && !cekAngka (id)){
		sederhana (data + 2, id +3);
	}
	if (id <=0) {
		cout << "nilai data" << data << endl;
	}
}
int main ()
{
	int id =((5+120140208) % 4)+1;
	cout << id;
}
