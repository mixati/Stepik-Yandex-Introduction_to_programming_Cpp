/*
По данному целому числу N распечатайте все квадраты натуральных чисел, не
превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n,i;
    i = 1;
    cin >> n;
    while (n >= i * i) {
        cout << i*i << " ";
        i++;
    }

    return 0;
}