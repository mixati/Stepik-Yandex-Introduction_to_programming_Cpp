/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n,i,f,ko,kn;
    i = 1;
    f = 0;
    ko = 0;
    kn = 1;
    cin >> n;
    while (i < n) {
        f = ko + kn;
        ko = kn;
        kn = f;
        i++;
    }
    if (n == 1) {
        f = 1;
    }
    cout << f;

    return 0;
}
