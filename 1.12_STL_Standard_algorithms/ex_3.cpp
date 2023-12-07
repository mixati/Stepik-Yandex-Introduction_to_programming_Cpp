/*
Во время проведения олимпиады каждый из участников получил свой идентификационный номер
– натуральное число. Необходимо отсортировать список участников олимпиады по количеству
набранных ими баллов.

Входные данные

На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников. На каждой следующей
строке даны идентификационный номер и набранное число баллов соответствующего участника.
Все числа во входном файле не превышают 105.

Выходные данные

В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых
участников одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания
идентификационного номера.
*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

void fill_vector(int n, vector<pair<int, int>>& a) {
    for (int i = 0; i < n; ++i) {
        int id, pt;
        cin >> id >> pt;
        a.push_back(make_pair(id, pt));
    }
}

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    bool temp = false;
    if (a.second != b.second)
        temp = a.second > b.second;
    else
        temp = a.first < b. first;
    return temp;
}

int main() {
    int n;
    vector<pair<int, int>> members;
    
    cin >> n;
    fill_vector(n, members);
    sort(members.begin(), members.end(), cmp);
    for (int i = 0; i < members.size(); ++i)
        cout << members[i].first << ' ' << members[i].second << endl;
    return 0;
}
