#include <iostream>
#include <string>
using namespace std;

class myClass {
	public : 
		string myString;
};

int main () 
{
	myClass myObjek;
	
	myObjek.myString = "Binatang kau";
	
	cout << myObjek.myString;
}
