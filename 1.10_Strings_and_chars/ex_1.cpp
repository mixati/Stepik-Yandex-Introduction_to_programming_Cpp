/*
По введенному символу определите, является ли он цифрой.

Входные данные
Вводится единственый символ.

Выходные данные
Выведите "yes", если символ является цифрой и "no" в противном случае. Обратите внимание,
что слова нужно выводить маленькими буквами.
*/

#include <iostream>

using namespace std;
int main() {
    char a;
    cin >> a;
    if (a > 47 && a < 58)
        cout << "yes";
    else
        cout << "no";

    return 0;
}