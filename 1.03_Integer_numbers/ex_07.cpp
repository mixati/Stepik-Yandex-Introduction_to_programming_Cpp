/*
Следующее четное

На вход дается натуральное число N. Выведите следующее за ним четное число

Формат входных данных

На вход дается целое положительное число N, не превышающее 10000.

Формат выходных данных

Выведите одно целое число - ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;
    cout << (N / 2 + 1) * 2;
    
    return 0;
}
