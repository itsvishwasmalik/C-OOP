#include<iostream>
#include<stdlib.h>
using namespace std;

void multiplyTwoMetrices1()
{
    cout<<"Multiplication using manual method: "<<endl;
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
    cout<<"Multiplication using generic method: "<<endl;
    int r1, r2, c1, c2;
    cout<<"Enter row and column of first matrix: ";
    cin >> r1;
    cin >> c1;
    cout<<"Enter row and column of second matrix: ";
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

int main()
{
    multiplyTwoMetrices1();
    multiplyTwoMetrices2();
}