//NAMA : MARCHELL MANURUNG
//NIM : 120140208
//KELAS : RD

//SOAL NO 1
#include <iostream>
using namespace std;

int deret_asoy (int n){
	int angka;
	
	if(n==1){
		angka = 1;
	}
	else {
		angka = ( n- 1) + deret_asoy(n-1);
	}
	cout<<angka <<" , ";
	return angka;
}
int main (){
	int n;
	
	cin>>n;
	cout<<deret_asoy(n)<<endl;
}
/* deret_asoy(7) maka output yang keluar ialah 1 , 2 , 4, 7 , 11 ,16 ,22 , 22 */

//SOAL NO 2
#include <iostream>
using namespace std;

int ngapaya (int n)
{
    if(n == 1){
    	return 1;
	}
	else {
		return n + ngapaya(n-1);
	}
}

int main()
{
    int n;
    cout << "Masukan bilangan bulat positif : ";
    cin >> n;
    cout << "hasil akhirnya adalah = " <<ngapaya(n);
}

//SOAL No 3
#include <iostream>
using namespace std;
int misteri(int n, int m){
	if(m==0){
		return 0;
	}else {
		return n + misteri(n, m-1);
	}
}
int main () {
	int n , m;
	
	cin >> n;
	cin >> m;
	
	cout << misteri (n, m)<<endl;
}
/* Output Yang akan keluar jika diberikan inpuran misteri(3,3) ialah 9
   Hal dikarenakan Fungsi Rekursif n + misteri (n, m-1)
   Inputan misteri (3,3) =
   misteri (3,3) = 3 + misteri (3,2) => 3 + 3 + misteri (3,1) =>3+3+3+misteri(3,0)
   dikarenakn (m==0) maka di returnkan 0
   misteri (3,3) = 3+3+3+0=9
*/

//SOAl No 4
#include <iostream>
using namespace std;

int kuadrat(int n){
	if(n==0){
		return 0;
	} else {
		return n * n;
	}
}
int main () 
{
	int n;
	
	cout << "Masukan Angka = ";
	cin>>n;
	cout<<n<<" Pangkat 2 adalah "<<kuadrat(n)<<endl;
}
