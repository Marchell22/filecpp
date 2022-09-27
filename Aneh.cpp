#include <iostream>
using namespace std;


int main () {
	int m[2][2] = {{9,10},{8,11}};
	float x;
	cin >> x;
	for ( int i = 0; i < 2; i++){
		for ( int j = 0; j < 2; j++){
			m[i][j] = x * m[i][j];
			cout << m[i][j] << " ";
			
		}
		cout << endl;
	}
}
