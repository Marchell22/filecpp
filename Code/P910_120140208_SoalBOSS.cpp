// NIM:120140208
// Nama : Marchell Manurung	
// Tanggal : 10 Desember 2020
// Deskripsi : SoalBoss

#include <iostream>
using namespace std;

char matriks[3][3] = { 
    '#','#','#',
    '#','#','#',
    '#','#','#' };

void printBoard(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriks[3][3];
		}
		cout << endl;
	}
}

void insrt(int t, int turn)
{
    t -= 1;
    int r = t / 3;
    int c = t % 3;
    matriks[r][c] = (turn ? 'X' : 'O');
}

bool occupied(int t)
{
    t -= 1;
    int r = t / 3;
    int c = t % 3;
    return !(matriks[r][c] == '#');
}

int pos[5] = { 1, 3, 4, 5, 7 };
bool gameOver()
{
    for (int i = 0; i < 5; i++)
    {
        int r = pos[i] / 3, c = pos[i] % 3;

        if (matriks[r][c] == '#') continue;

        if (r == 1 && c == 1)
        {
            if (matriks[1][1] == matriks[2][2] && matriks[1][1] == matriks[0][0]) {
                return true;
            }
            if (matriks[1][1] == matriks[2][0] && matriks[1][1] == matriks[0][2]) {
                return true;
            }
        }

        if (r == 1 && matriks[r][c] == matriks[r + 1][c] && matriks[r][c] == matriks[r - 1][c]) {
            return true;
        }

        if (c == 1 && matriks[r][c] == matriks[r][c + 1] && matriks[r][c] == matriks[r][c - 1]) {
            return true;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriks[i][j] == '#') return false;
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