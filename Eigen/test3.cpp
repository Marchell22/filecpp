#include <iostream>
using namespace std;

int main(){
    int idxInput, idxQuery;

    cout << "Masukan Jumlah Input : ";
    cin >> idxInput;


    cout << "Masukan Jumlah Query : ";
    cin >> idxQuery;

    string input[idxInput], query[idxQuery];

    for(int i = 0; i < idxInput; i++)
    {
        cout << "Masukan input ke-" << i + 1 << " : ";
        cin >> input[i];
    }

    for (int i = 0; i < idxQuery; i++)
    {
        cout << "Masukan query ke-" << i+1 << " : ";
        cin >> query[i];
    }
    int output[idxQuery] = {0};
    for ( int i = 0; i < idxQuery; i++){
        for ( int j = 0; j < idxInput; j++ ){
            if(query[i] == input[j]){
                output[i]++;
            }
        }
    }
    cout << "Output [";
    for (int i = 0; i < idxQuery; i++)
    {
        cout << output[i];
        if (i < idxQuery - 1) cout << ", ";
    }
    cout << "]";
    cout << endl;
    cout << "karena ";
    for (int i = 0; i < idxQuery; i++)
    {
        cout << "kata '" << query[i] <<"' terdapat ";
        cout << output[i] << " pada input";
        if (i < idxQuery - 1) cout << ", ";
    }
    return 0;
}