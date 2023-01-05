#include<iostream>
using namespace std;

void median()
{
    int n, m, a = 0, b = 0, c = 0;
    cout<<"Enter size of first and second array respectively: ";
    cin >> n >> m;

    int a1[n], a2[m], a3[n + m];
    cout<<"Enter elements of first array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    cout<<"Enter elements of second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    
    while (a < n && b < m)
    {
        if (a1[a] < a2[b])
        {
            a3[c] = a1[a];
            a++;
        }
        else
        {
            a3[c] = a2[b];
            b++;
        }
        c++;
    }
    while (a < n)
    {
        a3[c] = a1[a];
        a++;
        c++;
    }
    while (b < m)
    {
        a3[c] = a2[b];
        b++;
        c++;
    }

    for(int i=0;i<n+m;i++){
        cout<<a3[i]<<" ";
    }
    // if ((n + m) % 2 != 0)
    // {
    //     cout <<"Median = " <<a3[(n + m) / 2];
    // }
    // else
    // {
    //     int x = (n + m) / 2;
    //     cout <<"Median = " <<(a3[x] + a3[x - 1]) / 2.0 << endl;
    // }
}

int main()
{
    median();
    return 0;
}