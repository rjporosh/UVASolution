#include<iostream>
#include<cstdio>
using namespace std;
 int MaxCycleLength(long long n)
{
   int cycle_Length=1,noc=1;
    while(n>1)
    {
        if(n%2==1)
        {
            n=(3*n)+1;
            n = n / 2;
            noc=noc+2;
        }
        else
        {
            n=n/2;
            noc++;
        }
    }
    return noc;
}

int main()
{
    int a,b;
    while(scanf ("%d %d", &a, &b) != EOF)
    {
        int lb=0,ub=0,cycleLength=1,Max=1;
        if(a>b)
        {
            ub=a;
            lb=b;
        }
        else
        {
            lb = a;
            ub = b;
        }
        for(int i = lb;i <= ub;i++)
        {
            cycleLength = MaxCycleLength(i);
            if(cycleLength > Max)
            {
                Max = cycleLength;
            }

        }

         printf("%d %d %d\n",a,b,Max);
    }


}
