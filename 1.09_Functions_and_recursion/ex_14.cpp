/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не
бьющих друг друга.

Формат входных данных
Задано единственное число N. (N ≤ 10)

Формат выходных данных
Выведите ответ на задачу.

Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. Если
на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит
рассматривать. Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
*/

#include <iostream>
#include <vector>

using namespace std;

bool check(int i, int j, int k, int board[]) {
    if (k == i) return true;
    else return board[k] != j && (i - k) != (j - board[k]) && (i - k) != (board[k] - j) && check(i, j, k + 1, board);
}

int rec(int n, int i, int j, int board[]) {
    if (i == n) return 1;
    if (j < n) {
        int r = 0;
        if (check(i, j, 0, board)) {
            board[i] = j;
            r = rec(n, i + 1, 0, board);
        }
        return r + rec(n, i, j+1, board);
    }

    return 0;
}

int main() {
    int n, count = 0;
    cin >> n;
    int board[n];
    cout << rec(n, 0, 0, board);

    return 0;
}
