#include <iostream>
using namespace std;

struct phone{
	string nama;
	string merek;
	string pros;
	int batre; 
};
int main(){
	string uname;
	string pass;
	
	phone x[100];
		
	cin>>uname;
	cin>>pass;
	if(uname=="JoJoseph"&&pass=="IniPassword"){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin.ignore();
			getline(cin,x[i].nama);
			getline(cin,x[i].merek);
			cin>>x[i].pros;
			cin>>x[i].batre;
		}
		for (int i=0;i<n;i++){
			cout<<"Welcome! \n\n";
			cout<<"Smart1 : "<<x[i].nama<<" "<<x[i].merek<<" "<<x[i].pros<<" "<<x[i].batre<<"mAh";
		}
	}
}
