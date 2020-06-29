#include <iostream>
#include <string>

using namespace std;

bool Simm(string S, int a, int j) 
{
    int* Aarr = new int[a];                 //створюю масиви в яких збережу сторони строки
    int* Jarr = new int[j];
    for (int i = 0; i < a; i++)             //зберегаю сторони
    {
        Aarr[i] = S[i];
    }
    for (int i = 0; i < j; i++) 
    {
        Jarr[i] = S[S.length()-i-1];
    }
    if(a==j)                                //перевіряю сторони на кількість знаків і однаковість
    {
        for (int i = 0; i < a; i++) 
        {
            if (!(Aarr[i] == Jarr[i])) 
            {
                return false;
            }
        }
    }
    else 
    {
        return false;
    }
    return true;
    delete Aarr;
    delete Jarr;
}

int main()
{
    string S;                               //ввожу строку і кількість символів для кожної с сторон
    int a, j;
    cout << "Enter string:" << endl;
    getline(cin, S);
    cout << "Enter 2 numbers:" << endl;
    cin >> a >> j;
    cout << "Sides of the string are ";     //вивожу результат
    if (Simm(S, a, j) == 1) {
        cout << "same" << endl;
    } 
    else
    {
        cout << "different" << endl;
    }
}