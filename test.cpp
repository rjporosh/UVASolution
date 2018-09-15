#include<iostream>
#include<cstring>
#include<string.h>
#include<cstdlib>
using namespace std;

//void printArray(int arr[], int n)
//{
//    for(int i = n; i < 0; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}

int main()
{
    char str [80];
    int arr [80];
    char intStr[80];
    int b;
     string a,finale;
    cout<<"Your String : ";
//	cout << "Name: ";
	cin.getline( str, 80, '\n' );
//	cout << "Echo: " << str << endl;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[0]<48 || str[0]>57 || str[i]==32 &&str[i]!=13 )
        {
              arr[i] = str[i];
//            str[i]=arr[i];
//            strrev(str);
////            cout<<str;
//             char intStr[80];
               b=i;
        }



    }
            for(int j=b; j>=0;j--)
              {
                  itoa(arr[j], intStr, 10);
                 //cout<<arr[j]<< " ";
                 //intStr[j]=arr[j];
                  a=a+strrev(intStr);
              }
            cout<<a;

         // strrev(intStr);



//    printArray(arr, strlen(str));
//   cout<<itoa(arr[1], intStr, 10)<<endl;
    return 0;
}
