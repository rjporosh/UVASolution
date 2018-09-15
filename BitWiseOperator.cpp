#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a=42;
    int b=15;
    int result1 =a&b;
    int result2 =a|b;
    int result3=a^b;
    int c=-1;
    c= c>>24;
    int result4= ~155;
    cout<<"result1(And(&) Operation): = "<<result1<<endl<<" result2(Or(|) Operation): ="<<result2<<endl<<" result3(Exclusive Or(^) Operation): ="<<result3<<endl<<" result4(Tilda(~) Operation): ="<<result4;
    cout<<endl<<"c :="<< c<<endl;
    cout << (0xff >> 3) << endl;
    return 0;

}
