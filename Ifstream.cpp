#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void array(int matriks[9][9]){
	for (int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			cout << matriks[i][j] << "\t";
		}
		cout << endl;
	}
}
int main(){
	ifstream myFile;
	int matriks[9][9];
	myFile.open("Sudoku1.txt");
	for (int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			myFile >> matriks[i][j];
			cout << matriks[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	array(matriks);
}
