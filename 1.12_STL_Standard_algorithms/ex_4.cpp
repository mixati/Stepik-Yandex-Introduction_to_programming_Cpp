/*
Выведите все исходные точки в порядке возрастания их расстояний от начала координат. 

Входные данные
Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
затем идет последовательность из n строк, каждая из которых содержит два числа: координаты
точки. Величина n не превосходит 100, все исходные координаты – целые числа, не
превосходящие 10^3.

Выходные данные
Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала
координат.
*/

#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

void fill_vector(int n, vector<pair<pair<double, double>, double>>& a) {
    for (int i = 0; i < n; ++i) {
        double x, y;
        cin >> x >> y;
        a.push_back(make_pair(make_pair(x, y), sqrt(x*x+y*y)));
    }
}

bool cmp(pair<pair<double, double>, double>& a, pair<pair<double, double>, double>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    vector<pair<pair<double, double>, double>> v;
    
    cin >> n;
    fill_vector(n, v);
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].first.first << ' ' << v[i].first.second << endl;
    return 0;
}
