#include <iostream>
using namespace std;


int main(){
   int a, b, hasil, temp, cek;
   cin >> a >> b;
   
   hasil = a + b;
   cek = hasil;
   
   temp = 0;
   while(hasil > 0){
       temp = (temp * 10) + (hasil % 10);
       hasil /= 10;
   }
   
   if(cek % 10 == 0){
       cout << "0" << temp;
   } else {
        cout << temp;
   }
  
   return 0;
}
