/*
Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных
друг другу. Считается, что любые два элемента, равные друг другу образуют
одну пару, которую необходимо посчитать.

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
    int n, count;
    cin >> n;
    count = 0;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j])
                count++;
        }
    }
    cout << count;

    return 0;
}
