/*
Даны пять действительных чисел: x, y, xc, yc, r. Проверьте, принадлежит ли точка (x, y)
кругу с центром (xc, yc) и радиусом r. Если точка принадлежит кругу, выведите слово YES,
иначе выведите слово NO.
Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), возвращающую True, если
точка принадлежит кругу и False, если не принадлежит. Основная программа должна считать
координаты точки, вызвать функцию IsPointInCircle и в зависимости от возвращенного значения
вывести на экран необходимое сообщение.
Функция IsPointInCircle не должна содержать инструкцию if.

Формат входных данных
Вводятся пять действительных чисел.

Формат выходных данных
Выведите ответ на задачу.
*/

#include <iostream>
#include <cmath>

using namespace std;
bool IsPointInCircle(float x, float y, float xc, float yc, float r) {
    return pow((y - yc), 2) + pow((x - xc), 2) <= pow(r, 2);
}
int main() {
    float x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
