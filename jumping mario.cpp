#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int testCase,numberOfWall,walss[50];
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&numberOfWall);
        while(numberOfWall--)
           {
            int i=1;
            scanf("%d",&walss[i]);
            i++;
            }
             while(numberOfWall--)
             {
                 int j=numberOfWall;
                 cout<<walss[j];
                 j--;

             }


//            for(int i=1;i<=numberOfWall;i++)
//            {
//                int a,lowJump=0,highJump=0,
//                a=walss[i];
//            if(a<walss[i] || a>walls[i])
//            {
//                if(a<walss[i])
//                {
//                    highJump=highJump+1;
//                }
//                else if(a>walss[i])
//                {
//                    lowJump=lowJump+1;
//                }
//            }


        }
//        printf("Case %d:%d %d\n",testCase,highJump,lowJump);
    }

