#include<iostream>
using namespace std;
int main()
{
    int nw,w[50],lj=0,hj=0;
    cin>>nw;
    for(int i=0;i<nw;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<nw;i++)
    {
       int j=i+1;
        if(w[i]>=0 && w[j]>=0  && w[i]!=w[j] && w[i]<w[j])
        {
            hj++;
        }
        else if(w[i]>=0 && w[j]>=0  && w[i]!=w[j] && w[i]>w[j])
        {
            lj++;
        }
    }
    cout<<"Case "<<":1 "<<hj<<" "<<lj<<endl;
}
