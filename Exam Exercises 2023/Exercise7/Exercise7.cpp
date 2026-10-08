#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m;
    int matrix[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    int k;
    double average;
    int array[m];
    int count = 0;

    for(int i = 0; i < n; i++) {
        sum = 0;

        for(int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }

        average = (double)sum / m;
        k = 0;

        double maxDistance = fabs(average - matrix[i][0]);

        for(int j = 0; j < m; j++) {
            if(fabs(average - matrix[i][j]) > maxDistance) {
                maxDistance = fabs(average - matrix[i][j]);
                k = j;
            }
        }

        array[count++] = matrix[i][k];
    }

    for(int i = 0; i < count; i++)
        cout << array[i] << " ";
}
