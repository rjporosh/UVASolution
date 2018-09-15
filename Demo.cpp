#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    char str [40];
    int arr [40];
    char intStr[10];

    cout<<"Your String : ";cin>>str;

    for(int i = 0; i < strlen(str); i++)
    {
        arr[i] = str[i];
    }
    printArray(arr, strlen(str));
    cout<<itoa(arr[1], intStr, 10)<<endl;
    return 0;
}
