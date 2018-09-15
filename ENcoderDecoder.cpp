#include<iostream>
#include<cstring>
#include<string.h>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{

    char str [80];
    int arr [80];
    char intStr[80];
    int b;
      string line,a;            // input line
    vector<char> out;       // gather converted characters
    char res = 0;           // to compute the ascii values
    //std::getline(cin, line);
    cout<<"Your String : ";
	cin.getline( str, 80, '\n' );
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[0]<'0' || str[0]>'9' || str[i]==32 &&str[i]!=13 )
        {
              arr[i] = str[i];
               b=i;

        }
        else if(isdigit(str[0]))
        {
             intStr[i] = str[i];

        }




    }




            for(int j=b; j>=0;j--)
              {
                  itoa(arr[j], intStr, 10);
                  a=a+strrev(intStr);
              }
              cout<<a<<endl;
             }



         //strrev(str);
              cout<<str<<endl;
                 for (char c=0; c> strlen(str);c++) {
                       if (c >= '0' && c <= '9')
                        {         // only process decimal digits
                       res = 10 * res + (c - '0');
                       if (res >= ' ')
                            {               // Ok, we have a valid ASCII code
                       out.push_back(res);
                       res = 0;
                            }
                        }
                    else if (res != 0)
                        {                // assume that non numeric act as separators
                    out.push_back(res);             // whatever the input value (allows control chars)
                    res = 0;
                        }
                             }
               string  c(out.begin(), out.end());       // build a string from the vector
                cout << c << endl;


    return 0;

 }
