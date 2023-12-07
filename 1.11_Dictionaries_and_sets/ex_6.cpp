/*  УСЛОВИЕ
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. 
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. Поэтому
попавшийся словарь был как раз кстати.

К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме
англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать второй
словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько
слов-переводов. Для каждого латинского слова, встречающегося где-либо в словаре, Вася
предлагает найти все его переводы (то есть все английские слова, для которых наше латинское
встречалось в его списке переводов), и считать их и только их переводами этого латинского
слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные
В первой строке содержится единственное целое число N — количество английских слов в словаре. 
Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано
сначала английское слово, затем отделённый пробелами дефис (символ номер 45), затем
разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы
отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре
также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15
символов. Общее количество слов на входе не превышает 100000.

Выходные данные
В первой строке программа должна вывести количество слов в соответствующем данному
латинско-английском словаре. Со второй строки выведите сам словарь, в точности соблюдая
формат входных данных. В частности, первым должен идти перевод лексикографически минимального
латинского слова, далее — второго в этом порядке и т.д. Внутри перевода английские слова
должны быть также отсортированы лексикографически.
*/

/*  ПРИМЕР
Sample Input:
3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa

Sample Output:
7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
*/

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void fill_res(map<string, vector<string>>& s_in, map<string, vector<string>>& s_res) {
    for (map<string, vector<string>>::const_iterator iter = s_in.begin(); iter != s_in.end(); ++iter)
        for (int i = 0; i < iter->second.size(); ++i)
            s_res[iter->second[i]].push_back(iter->first);
}
vector<string> get_map_vector() {
    char comma = ',';
    vector<string> s;
    string word;
    int pos = 0, temp = 0;
    getline(cin, word);
    while ((pos = word.find(comma, temp)) != string::npos) {
        s.push_back(word.substr(temp, pos - temp));
        temp = pos + 2;
    }
    s.push_back(word.substr(temp, word.size() - temp));
    return s;
}
void fill_in(map<string, vector<string>>& s, int n) {
    string str;
    char delimiter;
    for (int i = 0; i < n; ++i) {
        cin >> str >> delimiter;
        cin.get();
        s[str] = get_map_vector();
    }
}
int main() {
    map <string, vector<string>> s_in;
    map <string, vector<string>> s_res;
    int n;
    
    cin >> n;
    fill_in(s_in, n);
    fill_res(s_in, s_res);
    cout << s_res.size() << endl;
    for (map<string, vector<string>>::const_iterator iter = s_res.begin(); iter != s_res.end(); ++iter) {
        cout << iter->first << " - ";
        for (int i = 0; i < iter->second.size(); ++i) {
            cout << iter->second[i];
            if (i + 1 < iter->second.size())
                cout << ", ";
        }
        cout << endl;
    }

    return 0;
}
