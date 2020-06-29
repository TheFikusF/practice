#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));                   //введення змінних та функції srand для роботи рандому
    int n, d, temp, error, coolNumbersCount = 0;
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
    cout << "new matrix:" << endl;      //віднімання останнього стовпця від інших та виведення нової матриці
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (!(j == d - 1)) {
                arr[i][j]-= arr[i][d-1];
            }            
            cout << "|" << arr[i][j] << "|";
        }
        cout << endl;
    }
}