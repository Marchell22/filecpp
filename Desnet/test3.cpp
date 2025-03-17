#include <iostream>

using namespace std;

int main()
{
    int N = 5;

    if (N <= 0)
    {
        cout << "Kasus Kosong" << endl;
    }
    else
    {
        int J = 1, K = 0;

        while (J <= N)
        {
            if (J % 2 == 0)
            {
                K = K + J;
            }
            J = J + 1;
        }

        cout << "Nilai K: " << K << endl;
        cout << "Nilai J: " << J << endl;
    }

    return 0;
}
