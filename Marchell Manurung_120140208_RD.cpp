//NAMA :MARCHELL MANURUNG
//NIM :120140208
//KELAS :RD

//SOAL 1
#include <iostream>
using namespace std;

long int faktorial (int A);

int main(){
	
	int r,hasil;
	
	cout<<"MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai = ";
	cin>>r;
	
	hasil=faktorial(r);
	cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}

long int faktorial (int A){
	if (A==1)
		return(A);
		else
		return (A*faktorial(A-1));
}

//SOAL 2
#include <iostream>
using namespace std;

int deretRec(int n)
{
    if(n == 1) return 1;

    return n + deretRec(n - 1);
}

int main()
{
    int n;
    cout << "Masukan nilai n : ";
    cin >> n;
    cout << "Nilai bilangan pada deret ke-" << n << " = " << deretRec(n);

    return 0;
}

//SOAL 3
#include <iostream>
using namespace std;

int deretRec(int n)
{
    if(n == 1) return 2;

    return 2*n + deretRec(n - 1);
}

int main()
{
    int n;
    cout << "Masukan nilai n : ";
    cin >> n;
    cout << "Nilai bilangan pada deret ke-" << n << " = " << deretRec(n);

    return 0;
}
