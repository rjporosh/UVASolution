#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        string word;

       //scanf("%ms",&word);
      cin>>word;

    if(word.length() <=3)
        {
            if(word[0]== 'o' && word[1]== 'n')
            {
                printf("1\n");
            }
            else if(word[0]== 'o' && word[2]=='e')
            {
                printf("1\n");
            }
            else if(word[1]=='n' && word[2]== 'e')
            {
                printf("1\n");
            }


            else if(word[0]== 't' && word[1]== 'w')
            {
                printf("2\n");
            }
           else if(word[0]== 't' && word[2]== 'o')
            {
                printf("2\n");
            }
            else if(word[1]== 'w' && word[2]== 'o')
            {
                printf("2\n");
            }
        }
  else
        {
            printf("3\n");
        }
    }
}
