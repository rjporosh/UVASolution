#include<cstdio>
using namespace std;

int cycleLengthOf(long long n){

    int length = 1;
    while(n > 1){
        n = (n&1)? 3 * n + 1 : n/2;
        length = length + 1;
    }
    return length;
}

int main(){

    int i,j, ub, lb;

    while(scanf ("%d  %d", &i, &j) != EOF){
        ub = (i > j)? i : j;
        lb = (i < j)? i : j;
        int maxLen = 0;

        while(lb <= ub){

            int len = cycleLengthOf(lb);
            maxLen = (maxLen < len)? len : maxLen;
            lb = lb + 1;
        }
        printf("%d %d %d\n", i,j,maxLen);
    }

    return 0;
}
