/*
    Write a C++ program to calculate fibonaaci series and print its Mth element using recursion.
*/
#include <iostream>
using namespace std;

int fibo(int x)
{
    if (x < 2)
    {
        return x;
    }
    else
    {
        return fibo(x - 1) + fibo(x - 2);
    }
}

int main()
{
    int n, m;
    cout << "Enter total number of digits" << endl;
    cin >> n;
    cout << "Enter which element you want to print" << endl;
    cin >> m;
    if (m <= n)
    {
        /*
        //To print fibonacci series

        for (int i = 0; i < n; i++)
        {
            cout << fibo(i) << " ";
        }
        cout << endl;
        
        cout << fibo(m - 1);
        */
    }
    else
    {
        cout << "You entered a number out of limit.";
    }
    return 0;
}