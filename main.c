#include <stdio.h>
#include "../include/calc1.h"

int main()
{
    int n,k,sum1,i,a,b,m;
    int fact=1;
    double sum2=1.0;
    int aa=1,bb=1,cc=1,dd=1;

    /*toi1 (1)*/
    printf("問1 (1) n=");
    scanf("%d",&n);

    sum1=sigmakk(k,n);

    printf("問1 (1) n=%dの時=%d\n",n,sum1);

    /*   toi1 (2)    */ 
    printf("問1 (2) n=");
    scanf("%d",&n);

    sum2=sekiwa(k,n);
    printf("問1 (2) n=%dの時=%.10lf\n",n,sum2);

    /*toi1 (3)*/
    printf("問1 (3) n=");
    scanf("%d",&n);

    fact=nkaijo(k,n);
    printf("問1 (3) n=%dの時=%d\n",n,fact);

    /*toi1 (4)*/
    printf("問1 (4) nCmの計算");
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    dd=combnm(n,m);

    printf("%dC%d=%d\n",n,m,dd);

    return 0;


}
