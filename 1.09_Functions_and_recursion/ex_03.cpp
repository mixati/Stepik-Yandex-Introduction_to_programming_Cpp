/*
Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y)
заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, выведите
слово YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.

Решение должно содержать функцию IsPointInSquare(x, y), возвращающую true, если точка
принадлежит квадрату и false, если не принадлежит. Основная программа должна считать
координаты точки, вызвать функцию IsPointInSquare и в зависимости от возвращенного значения
вывести на экран необходимое сообщение.

Функция IsPointInSquare не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>
#include <math.h>

using namespace std;
bool IsPointInSquare(float x, float y) {
    return (fabs(x + y) + fabs(x - y) <= 2);
}
int main() {
    float x, y;
    cin >> x >> y;
    if (IsPointInSquare(x, y))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
