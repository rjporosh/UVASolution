#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
//    int bin_1_brown,bin_1_green,bin_1_clear,bin_2_brown,bin_2_green,bin_2_clear,bin_3_brown,bin_3_green,bin_3_clear,tempResult,minResult;
//    cin>>bin_1_brown>>bin_1_green>>bin_1_clear>>bin_2_brown>>bin_2_green>>bin_2_clear>>bin_3_brown>>bin_3_green>>bin_3_clear;

     int bb1,bg1,bc1,bb2,bg2,bc2,bb3,bg3,bc3;
    //cin>>bb1>>bg1>>bc1>>bb2>>bg2>>bc2>>bb3>>bg3>>bc3;
    while( scanf("%d %d %d %d %d %d %d %d %d",&bb1,&bg1,&bc1,&bb2,&bg2,&bc2,&bb3,&bg3,&bc3)!=EOF)
    {
    int bcg = (bb2+bb3) + (bc1+bc3) + (bg1+bg2);
    int bgc = (bb2+bb3) + (bg1+bg3) + (bc1+bc2);
    int cbg = (bc2+bc3) + (bb1+bb3) + (bg1+bg2);
    int cgb = (bc2+bc3) + (bg1+bg3) + (bb1+bb2);
    int gbc = (bg2+bg3) + (bb1+bb3) + (bc1+bc2);
    int gcb = (bg2+bg3) + (bc1+bc3) + (bb1+bb2);

    if (bcg<=bgc && bcg<=cbg && bcg<=cgb && bcg<=gbc && bcg<=gcb)
    {
        //cout<<"BCG "<<bcg<<endl;
        printf("BCG %d\n",bcg);
    }
    else if (bgc<=bcg && bgc<=cbg && bgc<=cgb && bgc<=gbc && bgc<=gcb)
    {
        //cout<<"BGC "<<bgc<<endl;
           printf("BGC %d\n",bgc);
    }
    else if (cbg<=bcg && cbg<=bgc && cbg<=cgb && cbg<=gbc && cbg<=gcb)
    {
        //cout<<"CBG "<<cbg<<endl;
           printf("CBG %d\n",cbg);
    }
    else if (cgb<=bcg && cgb<=bgc && cgb<=cbg && cgb<=gbc && cgb<=gcb)
    {
        //cout<<"CGB "<<cgb<<endl;
           printf("CGB %d\n",cgb);
    }
    else if (gbc<=bcg && gbc<=bgc && gbc<=cbg && gbc<=cgb && gbc<=gcb)
    {
        //cout<<"GBC "<<gbc<<endl;
           printf("GBC %d\n",gbc);
    }
    else
    {
        //cout<<"GCB "<<gcb<<endl;
        printf("GCB %d\n",gcb);
    }
    }

}
