#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));                   //введення змінних та функції srand для роботи рандому
    int n, d, temp, error, coolNumbersCount=0;
    cout << "please, enter number of cols and rows:" << endl;
    cin >> n >> d;
    int** arr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[d];          //створення, заповнення та виведення масивів
    }
    cout << "your matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            arr[i][j] = rand() % 100 + 1;
            cout << "|" << arr[i][j] << "|";
        }
        cout << endl;
    }
    cout << "points:" << endl;          //знаходження та виведення сідлових точок
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            temp = arr[i][j];           //програма шукає місця, які не збігаються і додає до лічильника помилок 1
            error = 0;
            for (int g = 0; g < d; g++)
            {   
                if (temp < arr[i][g]) {
                    error++;
                    break;
                }
            }
            for (int g = 0; g < n; g++)
            {
                if (temp > arr[g][j]) {
                    error++;
                    break;
                }
            }
            if (error == 0) {           //якщо лічильник помилок дорівнює нулю - то додає до лічильника точок 1, виводить точку та її координати
                cout << "--- point: " << temp << " --- X,Y: " << j << "," << i << endl;
                coolNumbersCount++;
            }
            error = 0;
            for (int g = 0; g < d; g++)
            {
                if (temp > arr[i][g]) {
                    error++;
                    break;
                }
            }
            for (int g = 0; g < n; g++)
            {
                if (temp < arr[g][j]) {
                    error++;
                    break;
                }
            }
            if (error == 0) {
                cout << "--- point: " << temp <<" --- X,Y: " << j << "," << i << endl;
                coolNumbersCount++;
            }
        }
    }
    if (coolNumbersCount == 0) {            //виводить кількість сідлових точок
        cout << "there are no points" << endl;
    }
    if (coolNumbersCount == 1) {
        cout << "there is only " << coolNumbersCount << " point" << endl;
    }
    if (coolNumbersCount > 1) {
        cout << "there are " << coolNumbersCount << " points" << endl;
    }
}
