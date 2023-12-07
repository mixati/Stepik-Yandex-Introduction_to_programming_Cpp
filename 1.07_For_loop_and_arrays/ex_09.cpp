/*
Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.).
Если элементов нечетное число, то последний элемент остается на своем месте.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке
вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, temp;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0)
            temp = a[i];
        else {
            a[i - 1] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    return 0;
}