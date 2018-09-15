#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int n,b=0;
    cin>>n;
    string s;
        cin>>s;
    int g=s.size();
        int ng=g/n;
    while(n--)
    {
        for(int i=g;i>=0;i--,g--)
        {
            cout<<s[i];
        }

    }


}
