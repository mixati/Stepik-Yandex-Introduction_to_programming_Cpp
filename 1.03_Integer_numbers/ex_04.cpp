/*
Первая цифра двузначного числа

Дано двузначное число. Выведите его первую цифру (число десятков)

Формат входных данных

На вход дается натуральное двузначное число N.

Формат выходных данных

Выведите одно целое число - ответ на задачу.
*/

#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;
    cout << N / 10;
    
    return 0;
}
