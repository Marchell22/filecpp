// NIM: 120140208
// Nama : Marchell Manurung 
// Tanggal : 10 Desember 2020
// Deskripsi : SoalBoss

#include <iostream>
using namespace std;

char A[3][3] = {
    '#', '#', '#',
    '#', '#', '#',
    '#', '#', '#'
};

void printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j];
        }
        cout << endl;
    }
}

void insrt(int t, int turn)
{
    t -= 1;
    int r = t / 3;
        int c = t % 3;
    A[r][c] = (turn ? 'X' : 'O');
}

bool occupied(int t)
{
    t -= 1;
    int r = t / 3;
    int c = t % 3;
    return !(A[r][c] == '#');
}


int pos[5] = { 1, 3, 4, 5, 7 };
bool gameOver()
{
    for (int i = 0; i < 5; i++)
    {
        int r = pos[i] / 3, c = pos[i] % 3;

        if (A[r][c] == '#') continue;

        if (r == 1 && c == 1)
        {
            if (A[1][1] == A[2][2] && A[1][1] == A[0][0]) {
                return true;
            }
            if (A[1][1] == A[2][0] && A[1][1] == A[0][2]) {
                return true;
            }
        }

        if (r == 1 && A[r][c] == A[r + 1][c] && A[r][c] == A[r - 1][c]) {
            return true;
        }

        if (c == 1 && A[r][c] == A[r][c + 1] && A[r][c] == A[r][c - 1]) {
            return true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == '#') return false;
        }
    }

    return true;
}



int main()
{
    printBoard();
    int turn = 1;

    while (!gameOver())
    {
        int t;
        cout << "Player " << (turn ? "X " : "O ") << "turn: ";
        cin >> t;

        while (occupied(t)) {
            cout << "Please choose another box: ";
            cin >> t;
        }

        insrt(t, turn);
        printBoard();
        turn ^= 1;
    }
    return 0;
}