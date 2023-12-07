/*
Отсортируйте массив.

Входные данные
Первая строка входных данных содержит количество элементов в массиве N ≤ 105. Далее идет
N целых чисел, не превосходящих по абсолютной величине 109.

Выходные данные
Выведите эти числа в порядке неубывания.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, c;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        a.push_back(c);
    }
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; ++i) 
        cout << a[i] << ' ';
    
    return 0;
}
