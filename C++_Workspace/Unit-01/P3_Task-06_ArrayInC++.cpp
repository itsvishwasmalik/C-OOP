#include<iostream>
using namespace std;

void rightShift()
{
    int n, k;
    cout<<"Enter number of elements in array and the number of time to perform right shift: ";
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        int x = ar[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            ar[j] = ar[j - 1];
        }
        ar[0] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

void leftShift()
{
    int n, k;
    cout<<"Enter number of elements in array and the number of time to perform left shift: ";
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        int x = ar[0];
        for (int j = 0; j < n - 1; j++)
        {
            ar[j] = ar[j + 1];
        }
        ar[n - 1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    rightShift();
    leftShift();
    return 0;
}