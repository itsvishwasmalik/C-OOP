#include<iostream>
using namespace std;

void majorityElement()
{
    int n, mx = 0, oc = 0, in = 0;
    cout<<"Enter size of Array: ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    mx++;
    int coun[mx] = {0};
    for (int i = 0; i < n; i++)
    {
        coun[ar[i]]++;
    }

    for (int i = 0; i < mx; i++)
    {
        if (coun[i] > oc)
        {
            oc = coun[i];
            in = i;
        }
    }
    cout << in << " occured: " << oc << endl;
}

int main()
{
    majorityElement();
    return 0;
}