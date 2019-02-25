#include<stdio.h>
#include<cs50.h>
int main (void)

{
    // the user input
    long long card1;
    long long card2;
    long long ccard= 0;
    int counter =0;
    int sum;
    int mult;
    long long r;
    long long card;



    do
    {
        card= get_long_long("card number:");
    }
    while (card<=0);

    card1 = card;
    card2 = card;

    while(card1>0)
    {
       card1 = card1 /10;
        counter++;
    }
    if (counter == 13 || counter == 15 || counter == 16)
    {
    for(int i =1;i<=counter; i++)
    {
        if(i%2==0)
        {
            ccard = card %10;
             mult= ccard*2;
        }
        if (i%2 !=0)
        {
           ccard=card%10;
           mult=ccard * 1;
        }
        if(mult>9)
        {
        mult=mult-9;
        }
         sum = sum +mult;
         card = card / 10;
    }
         //check wether the card are valid or not
         if(sum % 10==0)
         {
             while(card2>100)
             {
               card2=card2 /10;
               r=card2;
             }
             if ((counter ==13||counter== 16)&&(r==40))
             {
                 printf ("Visa card valid\n");
             }
              if((counter == 15)&&(r==34||r==37))

             {
                 printf("AMEX\n");
             }
            if ((counter==16)&&(r==52|| r==53|| r==54 || r==55))
             {
                 printf("Master Card\n");
             }

         }
          else
          {
              printf("your card is invalid");
          }
    }
}

