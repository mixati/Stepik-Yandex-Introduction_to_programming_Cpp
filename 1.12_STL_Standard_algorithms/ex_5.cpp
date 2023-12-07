/*
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные
Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию,
имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в
строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные
Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним
пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние
баллы, то их нужно выводить в порядке, заданном во входных данных.
*/

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

void fill_vector(int n, vector<pair<pair<string, string>,double>>& v) {
    for (int i = 0; i < n; ++i) {
        string name, surname;
        cin >> name >> surname;
        double sum = 0;
        for (int j = 0; j < 3; ++j) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        v.push_back(make_pair(make_pair(name, surname), sum / 3));
    }
}

bool cmp(const pair<pair<string, string>,double>& a, const pair<pair<string, string>,double>& b) {
    return (a.second > b.second);
}

int main() {
    int n;
    vector<pair<pair<string, string>,double>> v;
    
    cin >> n;
    fill_vector(n, v);
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    return 0;
}
