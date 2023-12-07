/*
Дан список, упорядоченный по неубыванию элементов в нем. Определите, 
сколько в нем различных элементов.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй 
строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, count, temp;
    cin >> n;
    count = 1;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0)
            temp = a[i];
        if (a[i] != temp) {
            count++;
            temp = a[i];
        }
    }
    cout << count;

    return 0;
}
