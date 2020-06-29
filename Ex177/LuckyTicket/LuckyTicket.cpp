#include <iostream>
#include <time.h>

using namespace std;
int main()
{                                    
    int min, max, n, i = 0, counter, luckycounter = 0;       //введення змінних 
    int numbers[6];
    cout << "enter min and max ticket number:" << endl;
    cin >> min >> max;
    n = max - min + 1;
    int* arr = new int[n];              //обмеження початку відрахунку
    counter = min;
    arr[0] = min;
    while (counter < max)
    {
        arr[i] = counter;
        counter++;
        numbers[0] = arr[i] / 100000;           //ділення числа на числа, які його складають
        numbers[1] = (arr[i] % 100000)/10000;
        numbers[2] = (arr[i] % 10000) / 1000;
        numbers[3] = (arr[i] % 1000) / 100;
        numbers[4] = (arr[i] % 100) / 10;
        numbers[5] = arr[i] % 10;
        if (numbers[0]+ numbers[1]+ numbers[2]== numbers[3]+ numbers[4]+ numbers[5]) {      //лічильник щасливих квитків
            luckycounter++;
        }
        i++;
    }
    cout <<"there are "<< luckycounter<<" lucky ticket(s)";         //вивід кількості щасливих квитків
}