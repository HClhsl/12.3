#include <iostream>
using namespace std;
double ave(int *p)
{
    int all=0;
    for (int i = 0; i < 16; i++)
        all += p[i];
    double average;
    average = all / 16.0;
    return average;
}

int max(int* p)
{
    int max=p[0];
    for (int i = 0; i < 16; i++)
        if (p[i] > max)
        {
            max = p[i];
        }
    return max;
}

int main()
{
    int a[16];
    a[0] = 55;
    for(int i = 1; i < 16; i++)
        a[i] = (15 * a[i - 1] + 97) % 256;
    for (int i = 0; i < 16; i++)
        cout << a[i] << '\t';
    cout << endl;
    cout <<"average="<< ave(a)<<endl;
    cout << "max=" << max(a);
    int b[15],m=0;
    for (int i = 0; i < 16; i++)
    {
        if (a[i] == max(a))
        {
            b[i] = a[i + 1];
            m = i;
            break;
        }
        else
            b[i] = a[i];
    }
    cout << endl;
    for (int i = m + 1; i < 15; i++)
        b[i] = a[i + 1];
    for (int i = 0; i < 15; i++)
        cout << b[i] << '\t';
    return 0;
}