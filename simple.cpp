#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int main()
{
     //sample int array
  int arr[] = {1,2,3,4,100};
  char char_arr[sizeof(arr)];
  //int arr to char arr
  memcpy(char_arr, arr, sizeof(arr));
  for(int i=0;i<sizeof(arr);i++)
  {
      cout<<char_arr[i]<<endl;
  }
  int newarr[sizeof(char_arr)/sizeof(int)];
  //char arr back to int arr
  memcpy(newarr, char_arr, sizeof(char_arr)/sizeof(int));
  for(int i=0;i<sizeof(arr);i++)
  {
      cout<<newarr[i]<<endl;
  }
}
