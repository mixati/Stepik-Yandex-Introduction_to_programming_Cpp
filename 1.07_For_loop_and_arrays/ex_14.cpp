/*
N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем
по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от l_i до r_i
включительно. Определите, какие кегли остались стоять на месте.

Формат входных данных
Программа получает на вход количество кеглей N и количество бросков K. Далее идет K
пар чисел l_i, r_i, при этом 1 ≤ l_i, r_i ≤ N.

Формат выходных данных
Программа должна вывести последовательность из N символов, где j-й символ есть “I”,
если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.
*/

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, count;
    cin >> count >> n;
    vector<vector<int> > a(n, vector<int>(2));
    vector <bool> keg(count, false);
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
        for (int j = a[i][0] - 1; j <= a[i][1] - 1; j++)
            keg[j] = true;
    }
    for (int i = 0; i < count; i++) {
        if (keg[i])
            cout << ".";
        else
            cout << "I";
    }

    return 0;
}