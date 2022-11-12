/* Array103.Дан массив размера N.Вставить элемент с нулевым значением
перед минимальным и после максимального элемента массива.*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int imax=0, imin=0;
    //int min = a[0];
    //int max = a[0];
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < a[imin])
            imin = i;
        if (a[i] > a[imax])
            imax = i;
    }
    /*for (int i = n; i > imin - 1; i--)
        *(a + i) = *(a + i + 1);
    *(a + imin - 1) = 000;*/

    if (imax > imin)
        imax++;

    n++;
    for (int i = n - 1; i >= imin; --i)
        a[i] = a[i - 1];
    a[imin] = 0;

    n++;
    for (int i = n - 1; i > imax + 1; --i)
        a[i] = a[i - 1];
    a[imax + 1] = 0;





    cout << endl << "Массив: ";
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";

    delete[] a;
}

/*
6
123
54
964
-45
3
2

Массив: 123 54 964 0 0 -45 3 2
*/

/*
6
12
123
54
5
3
87

Массив: 12 123 0 54 5 0 3 87
*/

/*
7
123
45
4
63
52
876
5

Массив: 123 45 0 4 63 52 876 0 5
*/