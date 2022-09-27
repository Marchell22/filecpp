#include <iostream>
using namespace std;

int main(){
    int a, b, n, i, sn, un;
    string pilih;
    string menu[2]= {"1.Sn","2.Un"};
    
    cout << "Masukan nilai suku ke satu (a) : ";
    cin >> a;
    
    cout << "Masukan nilai beda setiap suku (b) : ";
    cin >> b;
    
    cout << "Masukan jumlah deret (n) : ";
    cin >> n;
    
    sn=((n-1)*b+(a*2))*n/2;
    un = a + ((n-1) * b);
    
    
    for (i = 1; i <= n; i++){
    	cout << a << " + ";
    	a = a + b;
	}
	cout << endl;
	cout << menu[0] << endl;
	cout << menu [1] << endl;
	
	cout << "Pilihlah rumus yang ingin ada cari : ";
	cin >> pilih;
	
	if (pilih == menu[0]){
		cout << "jumlah deret ke n adalah : " << sn;
	}else if (pilih == menu[1]){
		cout << "jumlah deret ke n adalah : " <<un;
	}else{
		cout << "Pilihan tidak ada ";
	}
}
	
