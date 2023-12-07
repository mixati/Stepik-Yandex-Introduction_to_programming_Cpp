/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по
спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано
в примере.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    int i = 0;
    int j = 0;
    int flag = 0;
    while (k < n * m) {
        if (flag == 0) {
            a[i][j] = ++k;
            if (a[i][j + 1] != 0 || j + 1 == m) {
                flag = 1;
                i++;
            }
            else
                j++;
        }
        else if (flag ==1) {
            a[i][j] = ++k;
            if (a[i + 1][j] != 0 || i + 1 == n) {
                flag = 2;
                j--;
            }
            else
                i++;
        }
        else if (flag == 2) {
            a[i][j] = ++k;
            if (a[i][j - 1] != 0 || j == 0) {
                flag = 3;
                i--;
            }
            else
                j--;
        }
        else if (flag == 3) {
            a[i][j] = ++k;
            if (a[i - 1][j] != 0 || i == 0) {
                flag = 0;
                j++;
            }
            else
                i--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << right << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
