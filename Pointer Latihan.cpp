#include <iostream>
using namespace std;

void pointerr(int *a, int *b, int *c) {
	*a *= 2;
	*b *= 2;
	*c *= 2;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout<< "nilai sebelum diubah "<<endl;
	cout << a << endl << b << endl << c<<endl;
	pointerr(&a, &b, &c);
	cout<< "nilai sebelum diubah "<<endl;
	cout << a << endl << b << endl << c;
}
