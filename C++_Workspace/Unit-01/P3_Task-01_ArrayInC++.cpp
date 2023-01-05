#include<iostream>
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

int main()
{
    delete1();
    delete2();
    return 0;
}