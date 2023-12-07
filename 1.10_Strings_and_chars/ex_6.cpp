/*
Найдите в данной строке самое длинное слово и выведите его.

Входные данные
Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные
Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое
встречается раньше.
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    string word;
    while (cin >> str)
        if (word.empty() || str.length() > word.size())
            word = str;
    cout << word;

    return 0;
}
