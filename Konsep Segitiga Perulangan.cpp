#include <iostream>
using namespace std;

int main(){
    int n,x;
    
    cout<<"Masukan Brapa N : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	x=n;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++){
        	cout<<x;
        	x--;
        } 
        
        cout<<endl;
    }

}
