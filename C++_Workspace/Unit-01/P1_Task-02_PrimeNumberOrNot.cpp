#include <iostream>
#include <cmath>
using namespace std;
/*
 while loop 
int sqrt1(int z){
    int i=1,r=1;

    while(r<=z){
        i++;
        r=i*i;
    }
    return (i-1);
}
*/

int sqrt1(int z)
{
    int i, a = 2;
    for (i = 1; i <= (z / 2); i++)
    {
        if ((i * i) == z && (i * i) <= z)
        {
            a = i;
            break;
        }
    }
    return a;
}

void forAllNPrimeOrNot(int x)
{
    int flag = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

void forHalfNPrimeOrNot(int x)
{
    int flag = 1;
    for (int i = 2; i <= (x / 2); i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

void forSqrtNPrimeOrNot(int x)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

void forSqrt1NPrimeOrNot(int x)
{
    int flag = 1;
    int s1 = sqrt1(x);
    for (int i = 2; i <= s1; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

int main()
{
    cout << "Enter the number " << endl;
    int n;
    cin >> n;
    forAllNPrimeOrNot(n);
    forHalfNPrimeOrNot(n);
    forSqrtNPrimeOrNot(n);
    forSqrt1NPrimeOrNot(n);
}