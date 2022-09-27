/*NAMA :MARCHELL MANURUNG
  NIM : 120140208
  KELAS RD 
*/

#include <iostream>
using namespace std;

int idx[100]; 

void Set(){ 
    for(int i = 0; i < 100; i++)
        idx[i] = i;
}

void merge(string &s, int l1, int r1, int l2, int r2){
    char ctemp[r2 - l1 + 1];
    int itemp[r2 - l1 + 1];
    int t = 0, start = l1;

    while(l1 <= r1 && l2 <= r2){
        if(tolower(s[l1]) <= tolower(s[l2])){
            ctemp[t] = s[l1];
            itemp[t] = idx[l1];
            l1++;
        }
        else {
            ctemp[t] = s[l2];
            itemp[t] = idx[l2];
            l2++;
        }
        t++;
    }

    while(l1 <= r1){
        ctemp[t] = s[l1];
        itemp[t] = idx[l1];
        l1++; t++;
    }

    while(l2 <= r2){
        ctemp[t] = s[l2];
        itemp[t] = idx[l2];
        l2++; t++;
    }

    for(int i = start; i <= r2; i++){
        idx[i] = itemp[i - start];
        s[i] = ctemp[i - start];
    }
}

void EnkripJojo(string &s, int l, int r){
    if(l == r) return;

    int mid = (l + r)/2;
    EnkripJojo(s, l, mid);
    EnkripJojo(s, mid + 1, r);
    merge(s, l, mid, mid + 1, r);
}

void DekripJojo(string &s, int r){
    string temp = s;

    for(int i = 0; i <= r; i++)
        temp[idx[i]] = s[i];
    s = temp;
}

int main(){
    string s;
    getline(cin, s);

    int len = s.length();
    cout << s << endl;

    Set();
    EnkripJojo(s, 0, len - 1);
    cout << s << endl;

    DekripJojo(s, len - 1);
    cout << s << endl;

    for(int i = 0; i < len; i++)
        cout << idx[i] << ((i != len - 1) ? "," : "\n");

    return 0;
}
