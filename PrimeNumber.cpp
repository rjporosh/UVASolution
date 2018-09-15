#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,root,counting=1;
    scanf("%d",&n);
    root=sqrt(n);
//    printf("%d\n",root);

    for(int i=1;i<=root;i++)
    {
        if(n%i==0)
        {
           counting =counting+1;
        }
    }

    if(counting==2)
    {
        cout<<"Prime.\n";
    }
    else
    {
        cout<<"Not prime.\n";
    }
}
