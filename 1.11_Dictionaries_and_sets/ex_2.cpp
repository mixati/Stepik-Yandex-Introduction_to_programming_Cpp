/*
Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите
слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO,
если не встречалось.

Входные данные
Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные
Выведите ответ на задачу.
*/

#include <iostream>
#include <set>

using namespace std;
int main() {
    multiset <int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (s.find(x) == s.end())
            cout << "NO\n";
        else
            cout << "YES\n";
        s.insert(x);
    }

    return 0;
}
