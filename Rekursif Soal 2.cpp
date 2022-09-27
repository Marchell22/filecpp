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
