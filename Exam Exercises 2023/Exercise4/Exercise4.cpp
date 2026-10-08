#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int matrix[rows][columns];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }

    int elementRow, elementColumn;
    cin >> elementRow >> elementColumn;

    int q1, q2, q3, q4;
    q1 = q2 = q3 = q4 = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++)
        {
            if(i < elementRow) {
                if(j < elementColumn)
                    q2 += matrix[i][j];
                else
                    q1 += matrix[i][j];
            }
            else {
                if(j < elementColumn)
                    q3 += matrix[i][j];
                else
                    q4 += matrix[i][j];
            }
        }
    }

    cout << q1 << " " << q2 << " " << q3 << " " << q4 << " ";

    return 0;
}
