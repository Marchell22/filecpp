#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partisi(int bilangan[], int low, int high){
    
    int pv = bilangan[high];
    int i = (low - 1);
    
    for(int j = low; j <= high - 1; j++){
        
        if(bilangan[j] <= pv){
            
            i++;
            swap(&bilangan[i], &bilangan[j]);           
            
        }
        
    }
    
    swap(&bilangan[i + 1], &bilangan[high]);
    return(i + 1);
    
}

void qs(int bilangan[], int low, int high){
    
    if(low < high){
        
        int p = partisi(bilangan, low, high);
        
        qs(bilangan, low, p - 1);
        qs(bilangan, p + 1, high);
        
    }
    
}

void tampil(int bilangan[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout << bilangan[i] << " ";
    }
}

int main()
{
    
    int bilangan[] = {4, 2, 1, 5, 3};
    int n = sizeof(bilangan) / sizeof(bilangan[0]);
    
    qs(bilangan, 0, n - 1);
    
    tampil(bilangan, n);
    
    return 0;
}
