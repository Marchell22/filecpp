#include <iostream>

using namespace std;

int main()
{
    int N = 6;

    if (N <= 0)
    {
        cout << "Kasus Kosong" << endl;
    }
    else
    {
        int J = 1;
        int K = 0;

        while (J <= N)
        {
            if (J % 2 == 0)
            { // Jika J adalah bilangan genap
                for (int L = 1; L <= J; L++)
                {
                    K += L;
                }
            }
            J++; // Increment J
        }

        cout << "Nilai K: " << K << endl;
        cout << "Nilai J: " << J << endl;
    }

    return 0;
}
