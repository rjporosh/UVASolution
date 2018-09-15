#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main()
{
    string t,s, f;
    int n,gm;
    cin>>n>>t;
    int l=t.size();
//   // std::string::size_type len = t.size();
//    cout<<l;
    gm=l/n;
    //cout<<gm;
    for(int i=0;i<=i+l;i++)
    {
        for(int j=gm-1;j>=0 ;j--)
        {
//            s[j]=t[j];
//            cout<<s[j];
             cout<<t[j];
            gm=gm+j;
        }
    i=i+(gm-1);


    }
  // cout<<s;
//    for (int i=0;i<t.size();i++)
//    {
//        for(int j=i+gm;j>i;j++)
//        {
//            s[j]=t[j];
//        }
//        strrev(s);
//        f=f+s;
//
//        i=i+gm;
//    }
  //  cout<<f;
}
