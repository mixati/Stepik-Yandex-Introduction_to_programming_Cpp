/*
Дано натуральное число N. Выведите слово YES, если число N является
точной степенью двойки, или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    while (n >= 1) {
        if (n == 1) {
            cout << "YES";
            break;
        }
        if (n % 2 != 0) {
            cout << "NO";
            break;
        }   
        n = n / 2;
    }

    return 0;
}
