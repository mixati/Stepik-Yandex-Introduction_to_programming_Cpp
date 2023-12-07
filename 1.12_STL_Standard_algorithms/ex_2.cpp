/*
В обувном магазине продается обувь разного размера. Известно, что одну пару обуви можно
надеть на другую, если она хотя бы на три размера больше. В магазин пришел покупатель.
Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец
так, чтобы он смог надеть их все одновременно.

Входные данные
Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет), затем
количество пар обуви в магазине и размер каждой пары. Размер — натуральное число, не
превосходящее 100, количество пар обуви в магазине не превосходит 1000.

Выходные данные
Выведите единственное число — максимальное количество пар обуви.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fill_and_sort(int n, vector<int>& a) {
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        a.push_back(c);
    }
    sort(a.begin(), a.end());
}

int main() {
    int cl_size, boots_count, max_count = 0;
    vector<int> boots_sizes;
    
    cin >> cl_size >> boots_count;
    fill_and_sort(boots_count, boots_sizes);
    
    int start_boots = 0;
    while (start_boots < boots_sizes.size() && boots_sizes[start_boots] < cl_size)
        ++start_boots;
    if (start_boots != boots_sizes.size()) {
        ++max_count;
        cl_size = boots_sizes[start_boots];
        for (int i = start_boots + 1; i < boots_sizes.size(); ++i) {
            if (cl_size + 3 <= boots_sizes[i]) {
                ++max_count;
                cl_size = boots_sizes[i];
            }
        }
    }
    cout << max_count;

    return 0;
}
