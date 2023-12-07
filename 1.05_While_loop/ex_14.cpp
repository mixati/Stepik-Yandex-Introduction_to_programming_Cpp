/*
Определите наименьшее расстояние между двумя локальными максимумами последовательности
натуральных чисел, завершающейся числом 0. Если в последовательности нет двух
локальных максимумов, выведите число 0.

Начальное и конечное значение при этом локальными максимумами не считаются.

Расстоянием считается количество пробелов между элементами. В качестве примера
смотрите первый тест.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в
последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n, np1, np2, s, i, k, smin;
    cin >> n;
    np1 = n;
    i = 1;
    s = 0;
    k = 0;
    smin = 0;
    while (n != 0) {
        np2 = np1;
        np1 = n;
        cin >> n;
        if (n != 0 && i > 1 && np1 > n && np1 > np2) {    
            k = 1;
            if (s < smin || smin == 0) {
                smin = s;
            }
            s = 0;
        }
        i++;
        if (k == 1) {
            s++;
        }
    }
    cout << smin;

    return 0;
}
