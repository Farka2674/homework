# include <stdio.h>
#include <cs50.h>

int main  (void)

{
    int a= 500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int r=1;

    int i=0;
    int amount;
    amount= get_int ("amount:");

    while (amount>= a)
    {
        amount= amount-a;
        i++;
    }
     while (amount>= b)
    {
        amount= amount-b;
        i++;
    }
     while (amount>= c)
    {
        amount= amount-c;
        i++;
    }
    while (amount>= d)
    {
        amount= amount-d;
        i++;
    }
     while (amount>= e)
    {
        amount= amount-e;
        i++;
    }
     while (amount>= f)
    {
        amount= amount-f;
        i++;
    }
     while (amount>= g)
    {
        amount= amount-g;
        i++;
    }
     while (amount>= h)
    {
        amount= amount-h;
        i++;
    }
    while (amount>= r)
    {
        amount= amount-r;
        i++;
    }
    printf(" the result is %i", i);

}

