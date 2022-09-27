#include <iostream>
using namespace std;
int main() {
    float bil,min, max;
    int i,N;

    cin >> N;

    for (i = 1; i <= N; i++) {
        cout << "Angka =";
        cin >> bil;
        
        if(bil==1){
        	max==bil;
        	min==bil;
		}

        else if (bil > max) {
            max = bil;
        }
        else if (bil<min) {
            min = bil;
        }
    }
    cout << "Nilai Terbesar = " << max << endl;
    cout << "Nilai Terkecil = " << min << endl;
}
