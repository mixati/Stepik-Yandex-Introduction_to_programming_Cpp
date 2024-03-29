/*
Дан многочлен
P(x)= a_n*x^n + a_{n−1}*x^{n−1}+ ... + a_1*x + a_0 и число x.
Вычислите значение этого многочлена, воспользовавшись схемой Горнера:

P(x)=(...(((a_n*x + a_{n−1})x + a_{n−2})x + a_{n−3}) ... )x+ a_0

Формат входных данных
Сначала программе подается на вход целое неотрицательное число n ≤ 20,
затем действительное число x, затем следует n+1 вещественное число
— коэффициенты многочлена от старшего к младшему.

Формат выходных данных
Программа должна вывести значение многочлена.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    int n;
    double a,x,p;
    cin >> n >> x;
    p = 0;
    while (n >= 0) {
        cin >> a;
        p = a * pow(x,n) + p;
        n--;
    }
  //  cout << setprecision(3) << fixed;
    cout << p;
    
    return 0;
}
