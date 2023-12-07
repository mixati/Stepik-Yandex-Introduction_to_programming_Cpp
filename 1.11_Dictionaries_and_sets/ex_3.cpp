/*
Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте,
сколько чисел содержится одновременно как в первом списке, так и во втором.

Входные данные
Вводится число N - количество элементов первого списка, а затем N чисел первого списка. 

Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные
Выведите ответ на задачу.
*/

#include <iostream>
#include <set>

using namespace std;

void fill_s(set <int> &s) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        s.insert(k);
    }
}

void common_s(set <int> &s1, set <int> &s2, set <int> &s) {
    set<int>::const_iterator iter1 = s1.begin(), iter2 = s2.begin();
    while (iter1 != s1.end() && iter2 != s2.end()) {
        if (*iter1 < *iter2)
            ++iter1;
        else if (*iter1 > *iter2)
            ++iter2;
        else {
            s.insert(*iter1);
            ++iter1;
            ++iter2;
        }
    }
}

int main() {
    set <int> s1, s2, s;
    fill_s(s1);
    fill_s(s2);
    common_s(s1, s2, s);
    cout << s.size();

    return 0;
}
