/*
Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел,
не используя цикл.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в
последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;

int rek() {
    int a;
    cin >> a;
    if (a == 0)
        return a;
    else
        return a + rek();
}
int main() {
    cout << rek();
    
    return 0;
}
