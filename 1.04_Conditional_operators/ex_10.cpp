/*
Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом
направлении и на одну клетку по горизонтали, или наоборот. Даны две
различные клетки шахматной доски, определите, может ли конь попасть с
первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие
номер столбца и номер строки сначала для первой клетки, потом для
второй клетки.

Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом коня можно
попасть во вторую или NO в противном случае.
*/

#include <iostream>

using namespace std;
int main() {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 + 2 == x2 || x1 - 2 == x2) {
        if (y1 + 1 == y2 || y1 - 1 == y2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else if (y1 + 2 == y2 || y1 - 2 == y2) {
        if (x1 + 1 == x2 || x1 - 1 == x2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
