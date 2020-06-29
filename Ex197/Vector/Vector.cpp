#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;
int main()
{
    srand(time(NULL));                   //введення змінних та функції srand для роботи рандому
    int n;
    cout << "please, enter number of vectors:" << endl;
    cin >> n;   
    int** arr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[2];          //створення, заповнення та виведення масивів
    }
    cout << "unsorted vectors:" << endl;        //виведення не сортованих векторів та виведення їх довжини
    for (int i = 0; i < n; ++i)
    {
        arr[i][0] = (rand() % 20) - 10;
        arr[i][1] = (rand() % 20) - 10;
        cout << arr[i][0] << ", " << arr[i][1] << " length: " << sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]) << endl;       
    }
    cout << "------------------" << endl;
    cout << "sorted vectors:" << endl;          //сортування векторів по довжині за допомогою тимчасової змінної
    int i, j, min, temp[2];
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j][0] * arr[j][0] + arr[j][1] * arr[j][1] > arr[min][0] * arr[min][0] + arr[min][1] * arr[min][1])
            {
                min = j;
            }
        }
        temp[0] = arr[i][0];
        temp[1] = arr[i][1];
        arr[i][0] = arr[min][0];
        arr[i][1] = arr[min][1];
        arr[min][0] = temp[0];
        arr[min][1] = temp[1];
    }
    for (int i = 0; i < n; ++i) //виведення сортованих векторів та їх довжин
    {
        cout << arr[i][0] << ", " << arr[i][1] << " length: " << sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]) << endl;        
    }
    delete arr;
}
