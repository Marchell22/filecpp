//Nama : MARCHELL MANURUNG
//NIM : 120140208
//Tanggal :23 APRIL
//Deskripsi : PESAN CINTA RAHASIA

#include <iostream>
using namespace std;

void mod(int *key){
    *key = *key % 26;
}

void encrypt(char *str, int key){

    if (*str >= 'a' && *str <= 'z')   
    {
        
        int min = 97, max = 122;
        int tmp = (int)*str;

        for (int i = 0; i < key; i++)
        {
            tmp++;
            if (tmp > max)
            {
                tmp = min;
            }
            
        }
        
        *str = (char)tmp;
    } else if (*str >= 'A' && *str <= 'Z')   
    {
        int min = 69, max = 90;
        int tmp = (int)*str;

        for (int i = 0; i < key; i++)
        {
            tmp++;
            if (tmp > max)
            {
                tmp = min;
            }
            
        }

        *str = (char)tmp;
    }
    
}

void decrypt(char *str, int key){

    if (*str >= 'a' && *str <= 'z')   
    {
        
        int min = 97, max = 122;
        int tmp = (int)*str;

        for (int i = 0; i < key; i++)
        {
            tmp--;
            if (tmp < min)
            {
                tmp = max;
            }
            
        }

        *str = (char)tmp;
    } else if (*str >= 'A' && *str <= 'Z')   
    {
        int min = 69, max = 90;
        int tmp = (int)*str;

        for (int i = 0; i < key; i++)
        {
            tmp--;
            if (tmp < min)
            {
                tmp = max;
            }
            
        }

        *str = (char)tmp;
    }
}

int main(){
    string cek;
    cin >> cek;

    if (cek != "encrypt" && cek != "decrypt")
    {
        cout << "Error";
        exit(0);
    }
    
    int shift;
    cin >> shift;
    if (shift > 26)
    {
        mod(&shift);
    }
    

    string str;
    cin.ignore();
    getline(cin, str);

    int lenght = str.length();


    if (cek == "encrypt")
    {
        char enc[lenght];
        for (int i = 0; i < lenght; i++)
        {
            enc[i] = str[i];
            encrypt(&enc[i], shift);
        }

        for (int i = 0; i < lenght; i++)
        {
            cout << enc[i];
        }

    } else if (cek == "decrypt")
    {
        char dec[lenght];
        for (int i = 0; i < lenght; i++)
        {
            dec[i] = str[i];
            decrypt(&dec[i], shift);
        }

        for (int i = 0; i < lenght; i++)
        {
            cout << dec[i];
        }

    }
}
