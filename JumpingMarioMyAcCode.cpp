#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int k=1;k<=tc;k++)
    {
    int nw,w[50],lj=0,hj=0;
    cin>>nw;
    for(int i=0;i<nw;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<nw-1;i++)
    {
       int j=i+1;
       //cout<<"j="<<j<<" w[i]: "<<w[i]<<" w[j]: "<<w[j]<<endl;
        if(w[i]>=0 && w[j]>=0  && w[i]!=w[j] && w[i]<w[j]&&j>i)
        {
            hj++;
            //cout<<"hj="<<hj<<endl;
        }
        else if(w[i]>=0 && w[j]>=0  && w[i]!=w[j] && w[i]>w[j]&&j>i)
        {
            lj++;
           // cout<<"lj="<<lj<<endl;
        }
    }
    cout<<"Case "<<k<<": "<<hj<<" "<<lj<<endl;
    }
}
