/*
Шахматная ладья ходит по горизонтали или вертикали. Даны две
различные клетки шахматной доски, определите, может ли ладья
попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое,
задающие номер столбца и номер строки сначала для первой
клетки, потом для второй клетки.

Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом
ладьи можно попасть во вторую или NO в противном случае.
*/

#include <iostream>

using namespace std;
int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 || y1 == y2) {
    cout << "YES";
    }
    else {
    cout << "NO";
    }

    return 0;
}