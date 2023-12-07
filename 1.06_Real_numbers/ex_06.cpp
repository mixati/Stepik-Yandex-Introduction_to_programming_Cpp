/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в
последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int a,i;
    double s = 0;
    i = 0;
    cin >> a;
    while (a != 0) {
        i++;
        s = s + a;
        cin >> a;
    }
    cout << setprecision(11) << fixed;
    cout << s / i;

    return 0;
}
