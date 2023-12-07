/*
В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято
записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255,
разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные
Программа получает на вход строку из произвольных символов.

Выходные данные
Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.

Примечание
Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход
строку, а возвращает число.
*/

#include <iostream>
#include <string>

using namespace std;

bool check_num(string &num) {
    int n = 0;
    if (num.length() == 0)
        return false;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] - '0' > 9 || num[i] - '0' < 0)
            return false;
        n = n * 10 + (num[i] -'0');
    }
    if (n > 255 || n < 0)
        return false;
    else
        return true;
}

bool is_ip(string &ip) {
    int pos = 0, temp = 0, dot_count = 0;
    
    while ((pos = ip.find('.', temp)) != string::npos) {
        string str = ip.substr(temp, pos - temp);
        ++dot_count;
        if (!check_num(str))
            return false;
        temp = pos + 1;
    }
    string str = ip.substr(temp, ip.length() - temp);
    if (!check_num(str))
        return false;

    return (dot_count == 3) ? true : false;
}

int main() {
    string ipaddr;
    
    cin >> ipaddr;
    if (is_ip(ipaddr))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
