#include <iostream>
#include <conio.h>
using namespace std;
int Max_ChuSoNguyen(int N)
{
    int Max = 0;
    while (N > 0)
    {
        int t = N % 10;

        if (t > Max)
            Max = t;

        N = N / 10;
    }
    return Max;
}


int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int max = Max_ChuSoNguyen(N);
    cout << "So Max cua so nguyen la " << max << endl;
    return 0;
}
