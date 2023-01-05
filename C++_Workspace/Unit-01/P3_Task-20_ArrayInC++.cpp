
#include <iostream>
#include <stdlib.h>
using namespace std;

void delete1()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 4;
    int j = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == 4)
        {
            continue;
        }
        arr[j] = arr[i];
        j++;
        if (j == 7)
        {
            arr[7] = 0;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void delete2()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 4;
    int arr2[7];
    for (int i = 0, j = 0; i < 8; i++, j++)
    {
        if (arr[i] == k)
        {
            // ++i; --> (can be used)
            continue;
        }
        arr2[j] = arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr2[i] << " ";
    }
}

void reverseDisplay()
{
    int arr[3][3];
    // int arr[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int counter = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = counter;
            counter--;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyTwoMetrices1()
{
    int arr1[3][3], arr2[3][3], res[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyTwoMetrices2()
{
    int r1, r2, c1, c2;
    cin >> r1;
    cin >> c1;
    cin >> r2;
    cin >> c2;
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible");
        exit(0);
    }
    else
    {
        int arr1[r1][c1], arr2[r2][c2], res[r1][c2]={0};
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> arr1[i][j];
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> arr2[i][j];
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j]=0;
                for (int k = 0; k < c2; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void pairSum1()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i] + ar[j] == k)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}

void pairSum2()
{
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i]; 
    }
    int max=a[0];
    for(int i=0;i<10;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int a2[max+1]={0};
    for(int i=0;i<10;i++){
        a2[a[i]]=1;
    }
    int k;
    cin>>k;
    for(int i=0;i<10;i++){
        if(a2[k-a[i]]==1){
            printf("%d, %d \n",a[i],k-a[i]);
        }
        a2[a[i]]=0;

    }
}

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

void majorityElement()
{
    int n, mx = 0, oc = 0, in = 0;
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

void duplicate()
{
    int n, mx = 0, ct = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    mx++;
    int coun[mx] = {0};
    for (int i = 0; i < n; i++)
    {
        if (coun[ar[i]] > 0)
        {
            ct++;
        }
        coun[ar[i]]++;
    }
    cout << "No. of Duplicates: " << ct << endl;
    for (int i = 0; i < mx; i++)
    {
        if (coun[i] > 1)
        {
            cout << i << " ";
        }
    }
}

void maxSumAdjoint()
{
    int n, mx = 0, mi, mp = 0;
    cout<<"Enter number of elements in array: ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > mx)
        {
            mx = ar[i];
            mi = i;
        }
    }

    for (int i = 0; i < mi - 1; i++)
    {
        mp = max(mp, ar[i]);
    }
    for (int i = mi + 2; i < n; i++)
    {
        mp = max(mp, ar[i]);
    }

    cout << mp << " " << mx << endl;
}

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

void minimumMaximum()
{
    int n, mi = 0, mx = 0;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    int count[mx + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[ar[i]]++;
    }
    for (int i = 0; i < mx + 1; i++)
    {
        if (count[i] != 0)
        {
            mi = i;
            break;
        }
    }
    cout << mx << " " << mi << endl;
}

int main()
{
    // delete1();
    // delete2();
    // reverseDisplay();
    // multiplyTwoMetrices1();
    // multiplyTwoMetrices2();
    //pairSum1();
    // pairSum2();
    //rightShift();
    //leftShift();
    //majorityElement();
    //maxSumAdjoint();
    //duplicate();
    // maxSumAdjoint();
    minSumAdjoint();
    // minimumMaximum();

    return 0;
}