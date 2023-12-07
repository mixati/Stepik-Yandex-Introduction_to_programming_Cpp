/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m
“диагоналями”, как показано в примере.

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
    for (int l = 0; l < n + m - 1; l++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == l - j || j == l - i)
                    a[i][j] = ++k;
            }
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
