#include <iostream>
#include <time.h>


using namespace std;

void Sort(int a[], int n) {           //Функція для сортування масивів
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()                              //основна функція
{
    srand(time(NULL));                   //введення змінних та функції srand для роботи рандому
    int n, d;
    cin >> n >> d;
    int* arr1 = new int[n];              //створення, заповнення та виведення масивів
    cout << "First and Second Array not sorted ";
    for (int i = 0; i < n; i++)         
    {
        arr1[i] = rand() % 100 + 1;
        cout << "|" << arr1[i] << "|";
    }
    cout << "---";
    int* arr2 = new int[d];
    for (int i = 0; i < d; i++)
    {
        arr2[i] = rand() % 100 + 1;
        cout << "|" << arr2[i] << "|";
    }
    cout << endl;
    cout << "First and Second Array sorted ";   //сортування і виведення масивів
    Sort(arr1, n);
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr1[i] << "|";
    }
    cout << "---";
    Sort(arr2, d);
    for (int i = 0; i < d; i++)
    {
        cout << "|" << arr2[i] << "|";
    }
    cout << endl;
    int* arr3 = new int[n+d];                   //об'єднання масивів в один
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr3[i+n] = arr2[i];
    }
    Sort(arr3, d+n);                            //сортування та виведення масиву
    cout << "First + Second array |";
    for (int i = 0; i < n+d; i++)
    {
        cout << "|" << arr3[i] << "|";
    }
    delete[] arr1;
    delete[] arr2;
}
