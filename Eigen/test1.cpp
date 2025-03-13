#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Masukan Kata ";
    cin >> input;
    int n = 0;
    while (input[n] != '\0') {
        n++;
    }
    

    char huruf[100]; 
    char angka[100]; 
    int hurufIndex = 0, angkaIndex = 0;
    
    for (int i = 0; i < n; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            angka[angkaIndex] = input[i];
            angkaIndex++;
        } else {
            huruf[hurufIndex] = input[i];
            hurufIndex++;
        }
    }
    
    int j = hurufIndex - 1;
    int idx = 0;
    for (int i = 0; i < hurufIndex; i++) {
        input[idx] = huruf[j];
        idx++;
        j--;
    }
    
    for (int i = 0; i < angkaIndex; i++) {
        input[idx] = angka[i];
        idx++;
    }
    
    input[idx] = '\0';
    
    cout << "String setelah dibalik: " << input << endl;
    return 0;
}

