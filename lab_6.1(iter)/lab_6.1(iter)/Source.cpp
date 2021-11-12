#include <iostream>
#include <time.h>
using namespace std;


void Create(int* r, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        r[i] = Low + rand() % (High - Low + 1);
}


int Sum(int* r, const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 6 == 0 || !(i % 5 == 0)) {
            sum += r[i];
            r[i] = 0;
        }

    return sum;

}void result(int* r, const int n) {
    for (int i = 0; i < n; i++)
        if (r[i] % 6 == 0 || !(i % 5 == 0)) {
            r[i] = 0;
        }


}
int Count(int* r, const int n) {
    int k = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 6 == 0 || !(i % 5 == 0)) {
            k++;
        }
    return k;
}


int main()
{
    srand((unsigned)time(NULL));

    const int n = 25;

    int r[n];
    int Low = 5;
    int High = 90;

    Create(r, n, Low, High);

    cout << r[0];
    for (int i = 1; i < sizeof r / sizeof(int);) cout << ' ' << r[i++];
    cout << endl;

    int sum = Sum(r, n);
    cout << "Sum = " << sum << endl;

    int count = Count(r, n);

    cout << "Number of elements = " << count << endl;

    result(r, n);

    cout << r[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << r[i];
    cout << endl;


    return 0;

}