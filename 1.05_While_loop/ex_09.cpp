/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите
значение второго по величине элемента в этой последовательности, то есть элемента,
который будет наибольшим, если из последовательности удалить наибольший элемент.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в
последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n, max, n2;
    cin >> n;
    max = 0;
    n2 = 0;
    while (n != 0) {
        if (n >= max) {
            n2 = max;
            max = n;
        }
        else if (n > n2) {
            n2 = n;
        }
        cin >> n;
    }
    cout << n2;

    return 0;
}