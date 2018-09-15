#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }

    return GCD(b,(a%b));
}

int main()
{
    int width, height, isQuit = 0;


    while(!isQuit){

        cout<<"Width : ";cin>>width;
        cout<<"Height : ";cin>>height;

        int gcd = GCD(width, height);
        cout<<"Aspect Ratio = "<<width/gcd<<":"<<height/gcd<<endl;

        cout<<"isQuit : ";cin>>isQuit;
    }
    return 0;
}
