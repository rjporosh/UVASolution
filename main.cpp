/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Prince Porosh
 *
 * Created on July 21, 2018, 11:08 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int main() {

    int n,noc=1,a,b,MaximumNumberOfCycle=1;
    cout<<"Enter a pair of Number";
    cin>>a>>b;
    if(a<b)
    {
        for(int i=a;i<=b;i++)
        {
            n=i;
              while(n!= 1)
                 {
                       if(n%2 != 0)
                           {
                              n=(3*n)+1;
                           }
                       else
                           {
                                n= n/2;
                           }
        
                   noc++;
                   }
               if(noc>MaximumNumberOfCycle)
                           {
                                MaximumNumberOfCycle=noc;
                                
                           }
        }
        cout<<a<<" "<<b<<" "<<MaximumNumberOfCycle;
        
    }
    
    else
    {
         int t=a;
        a=b;
        b=t;
      for(int i=a;i<=b;i++)
        {
          n=i;
              while(n!= 1)
                 {
                       if(n%2 != 0)
                           {
                              n=(3*n)+1;
                           }
                       else
                           {
                                n= n/2;
                           }
        
                   noc++;
                }
              if(MaximumNumberOfCycle<noc)
                           {
                                MaximumNumberOfCycle=noc;
                           }
         }
                    cout<<b<<" "<<a<<" "<<MaximumNumberOfCycle;
    }
    
 
   
    
    
    return 0;
}

