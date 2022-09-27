#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream myFile;
	myFile.open("data.txt");
	myFile << "Apa";
	myFile.close();
	cin.get();
}
