#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
    start:
   char s[80];
   cin>>s;
   int b=strlen(s);
   char c;
   for(int i=0;i<b;i++)
   {
       if(s[0]<58 && s[0]>47)
       {
           for(int i=0;i<b;i++)
           strrev(s);
           cout<<s<<endl ;
          break;
       }
       else
        {
            strrev(s);
          int j=s[i];
          cout<<j;

        }

   }

   return 0;
}
