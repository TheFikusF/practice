#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));          //введення змінних та функції srand
    int n, max = 0;
    cout << "enter number of numbers:" << endl;
    cin >> n;
    cout << "---" << endl;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)         //заповнення масиву
    {
        arr[i] = (rand() % 200) - 100;
    }
    for (int i = 0; i < n; ++i)         //пошук максимального числа
    {   
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; ++i)         //заміна чисел, які більше за модулем на 0
    {
        cout << arr[i];
        if (abs(arr[i]) > max) {
            arr[i] = 0;
            cout << " -> " << arr[i];
        }
        cout << endl;
    }
    delete arr;
}
