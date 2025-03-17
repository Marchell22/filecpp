#include <iostream>

int main()
{
    int L = 1;
    int N = 5;
    int SUM = 0;

    if (N < L)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        do
        {
            SUM = ((SUM + L) + N);
            L = L + 1;
        } while (L <= N);

        std::cout << "SUM = " << SUM << std::endl;
        std::cout << "L = " << L << std::endl;
    }

    return 0;
}
