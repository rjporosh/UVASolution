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
      string line="0";            // input line
    vector<char> out;       // gather converted characters
    char res = 0;           // to compute the ascii values
    //std::getline(cin, line);
    cout<<"Your String : ";
	cin.getline( str, 80, '\n' );

        if(str[0]<'0' || str[0]>'9' )
        {
            for(int i=0;i<strlen(str);i++)
            {
                arr[i] = str[i];
            }
             for(int j=strlen(str); j>-1;j--)
              {
                  itoa(arr[j], intStr, 10);

                  line=line+strrev(intStr);
              }
              cout<<"For Char: "<<line<<endl;


        }
        else if(isdigit(str[0]))
        {
             strrev(str);
             cout<<str<<endl;
             int i=0;
             //int t=strlen(str);
             for (char c=str[i];i<strlen(str);i++)
                {
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
                cout<<"For Digit: " << c << endl;

        }
    }









//                for (char c; c> strlen(str);c++,f++) {
//                       if (c >= '0' && c <= '9')
//                        {         // only process decimal digits
//                       res = 10 * res + (c - '0');
//                       if (res >= ' ')
//                            {               // Ok, we have a valid ASCII code
//                       out.push_back(res);
//                       res = 0;
//                            }
//                        }
//                    else if (res != 0)
//                        {                // assume that non numeric act as separators
//                         out.push_back(res);             // whatever the input value (allows control chars)
//                   res = 0;
//                        }
//                                                   }
//              string  c(out.begin(), out.end());       // build a string from the vector
//                cout << c << endl;
