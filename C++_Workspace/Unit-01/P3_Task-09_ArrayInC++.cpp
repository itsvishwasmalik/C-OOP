#include<iostream>
using namespace std;

void minSumAdjoint()
{
    int n, mx = 0, minsu = 0, s = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    int coun[mx + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        coun[ar[i]]++;
    }

    for (int i = 0; i < mx + 1, s < 2; i++)
    {
        while (coun[i] > 0 && s != 2)
        {
            minsu += i;
            coun[i]--;
            s++;
        }
    }
    cout << minsu << endl;
}

int main()
{
    minSumAdjoint();

    return 0;
}