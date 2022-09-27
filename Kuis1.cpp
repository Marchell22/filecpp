#include <iostream>
using namespace std;

void tukar(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int n = 4;
	int arr[n];
	
	cout << "Masukkan Data Array = " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Masukan : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	tukar (&arr[0], &arr[1]);
	tukar (&arr[2], &arr[3]);
		cout << "Luaran: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
