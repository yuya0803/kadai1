#include <stdio.h>
#include "../include/calc1.h"

int sigmakk(int k, int n)
{
    int sum1=0;

    for(k=1;k<=n;k++)
    {
        sum1=sum1+k*k;
    }

    return sum1;
}

double sekiwa(int k, int n)
{
    double sum2=1.0;

    for(k=1;k<=n;k++)
    {
        sum2=sum2*1/(k*k);
    }

    return sum2;
}

int nkaijo(int k,int n)
{
    int fact=1;

    for(k=1;k<=n;k++)
    {
        fact=fact*k;
    }

    return fact;
}

int combnm(int n,int m)
{
    int i,a,b;
    int aa=1;
    int bb=1;
    int cc=1;
    int dd=1;

    for(i=1;i<=n;i++)
    {
        aa=aa*i;
    }

    for(a=1;a<=m;a++)
    {
        bb=bb*a;
    }

    for(b=1;b<=n-m;b++)
    {
        cc=cc*b;
    }

    dd=aa/(bb*cc);

    return dd;
}