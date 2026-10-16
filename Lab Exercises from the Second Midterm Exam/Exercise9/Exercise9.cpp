#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int m, n;
    char field[100][100];
    int playerX, playerY, ballX, ballY;
    int goal1X, goal2X, goal1Y, goal2Y;

    cin >> m >> n;
    cin >> playerX >> playerY;
    cin >> ballX >> ballY;
    cin >> goal1X >> goal1Y;
    cin >> goal2X >> goal2Y;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (playerX == i && playerY == j) {
                field[i][j] = 'i';
            } else if (goal1X == i && goal1Y == j) {
                field[i][j] = ']';
            } else if (goal2X == i && goal2Y == j) {
                field[i][j] = ']';
            } else if (ballX == i && ballY == j) {
                field[i][j] = 'o';
            } else {
                field[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    bool goal = false;
    bool out = false;

    int ballMoveX, ballMoveY;
    cin >> ballMoveX >> ballMoveY;

    int newBallX = ballX + ballMoveX;
    int newBallY = ballY + ballMoveY;

    if ((newBallX == goal1X && newBallY == goal1Y) ||
        (newBallX == goal2X && newBallY == goal2Y)) {
        cout << "GOAL!" << endl;
        goal = true;
    }

    if (newBallX < 0 || newBallX >= m ||
        newBallY < 0 || newBallY >= n) {
        cout << "OUT!" << endl;
        out = true;
    }

    if (!out && !goal) {
        field[ballX][ballY] = '-';

        field[newBallX][newBallY] = 'o';

        cout << "Novata pozicija na topkata e ("
             << newBallX << ", " << newBallY << ") " << endl;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << field[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
