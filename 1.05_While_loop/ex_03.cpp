/*
По данному числу N распечатайте все целые степени двойки, не превосходящие
N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n, i = 1;
    cin >> n;
    while (i <= n) {
        cout << i << " ";
        i = i * 2;
    }

    return 0;
}