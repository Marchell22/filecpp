//Nama : Dhilan Septa Yudha
//NIM : 120140224
//Tanggal : 30 April 2021
//Deksripsi : Binary Search

#include <iostream>
using namespace std;

int binary(int array[], int start, int end, int target){
	if(end >= start){
		int mid = start + (end - start)/2;
	
		if(array[mid] == target){
			return 1;
		}else if(array[mid] > target){
			return binary(array, start, mid-1, target);
		}else if(array[mid] < target){
			return binary(array, mid+1, end, target);
		}
	
	}else{
		return -1;
	}
}

int main(){
	int n,temp;
	cin >> n;
	int array[n];
	int x[100];
	int target[100];
	//input nilai
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	//sorting
	for(int i = 1; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	//input target
	for (int i = 0; i < 100; i++){
		cin >> target[i];
		if(target[i] == -999){
			break;
		}
	}
	//pencarian nilai
	for(int i = 0; i < n; i++){
		x[i] = binary(array, 0, n-1, target[i]);
		
	}
	//output
	for(int i = 0; i < 100; i++){
		if(x[i] == 1){
			cout << "Bilangan " << target[i] << " ditemukan" << endl;
		}else if(target[i] == -999){
			return 0;
		}else{
			cout << "Bilangan " << target[i] << " tidak ditemukan" << endl;
		}
	}
}
