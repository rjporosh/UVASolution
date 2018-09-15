#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
    int a[50]={1,0,0};
    for (int i=0,j=1; i<1;i++,j++)
    {
        if(a[i]<65||a[i]>91)
        {
            a[i]= a[i]+((a[i]+a[j]/10));
            cout<<a[i];
        }
    }

}
