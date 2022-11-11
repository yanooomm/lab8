/*Array59. Дан массив A размера N. Сформировать новый массив B
того же размера по следующему правилу: элемент BK равен среднему 
арифметическому элементов массива A с номерами от 1 до K.*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    float *a = new float[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    float* b = new float[n];
    for (int k=0; k < n; ++k)
    {
        b[k] = 0;
        for (int i = 0; i <= k; ++i)
            b[k] += a[i];
        b[k] /= k+1;
    }

    cout << "Массив А: ";
    for (int j = 0; j < n; j++)
        cout << a[j] << " ";
    cout << endl << "Массив В: ";
    for (int k =0; k < n; k++)
        cout << b[k] << " ";


    delete[] a;
}

/*
5
3
4
5
6
2
Массив А: 3 4 5 6 2
Массив В: 3 3.5 4 4.5 4
*/

