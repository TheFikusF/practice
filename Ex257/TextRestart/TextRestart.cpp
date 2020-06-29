#include <iostream>
#include <string>

using namespace std;
int main()
{
    string TextUkr;    //ввожу рядок, слово та декілька інших змінних
    string word;
    int repeat = 0, n;
    bool mistake = false;
    setlocale(LC_ALL, "Ukrainian");   //міняю мову на українську
    cout << "string:" << endl;
    getline(cin, TextUkr);
    cout << "word:" << endl;
    getline(cin, word);
    for (int i = 0; i < TextUkr.length(); i++){    //по кожній букві перевіряю на схожість, якщо букви не сходяться - іду далі
        if (TextUkr[i] == word[0]) {
            mistake = false;
            n = i;
            for (int j = 0; j < word.length(); j++, n++) {
                if (!(TextUkr[n] == word[j])) {
                    mistake = true;
                }
                if (mistake == true) {
                    break;
                }
            }
            if (mistake == false) {     //лічильник повторів
                repeat++;
            }
        }
    }
    cout << "number of repeats:" << endl;  //вивід значення
    cout << repeat;
}