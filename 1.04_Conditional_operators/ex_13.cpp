/*
Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int a,b,c,x,y,z;
    cin >> a >> b >> c;
    if (a <= b && a <= c) {
        x = a;
        if (b<=c) {
            y = b;
            z = c;
        }
        else {
            y = c;
            z = b;
        }
    }
    else if (b <= a && b <= c) {
        x = b;
        if (a<=c) {
            y = a;
            z = c;
        }
        else {
            y = c;
            z = a;
        }
    }
    else {
        x = c;
        if (a<=b) {
            y = a;
            z = b;
        }
        else {
            y = b;
            z = a;
        }
    }
    cout << x << " " << y << " " << z;
    
    return 0;
}
