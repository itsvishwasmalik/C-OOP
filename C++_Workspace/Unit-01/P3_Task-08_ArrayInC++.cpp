#include<iostream>
using namespace std;

void maxSumAdjoint()
{
    int n, m2 = 0, mi, m1 = 0;
    cout<<"Enter number of elements in array: ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > m2)
        {
            m2 = ar[i];
            mi = i;
        }
    }

    for (int i = 0; i < mi - 1; i++)
    {
        m1 = max(m1, ar[i]);
    }
    for (int i = mi + 2; i < n; i++)
    {
        m1 = max(m1, ar[i]);
    }
    int sum = m1+m2;
    cout <<"Maximum sum of non adjacent numbers is "<<sum;
}

int main()
{

    maxSumAdjoint();
    return 0;
    
}