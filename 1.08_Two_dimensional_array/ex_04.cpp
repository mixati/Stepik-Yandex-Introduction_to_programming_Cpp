/*
Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j

Формат входных данных
Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы
массива, затем числа i и j.

Формат выходных данных
Выведите результат.
*/

#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int t1, t2, temp;
    cin >> t1 >> t2;
    for (int i = 0; i < n; i++) {
        temp = a[i][t1];
        a[i][t1] = a[i][t2];
        a[i][t2] = temp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
