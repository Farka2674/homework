#define _XOPEN_SOURCE
#include<unistd.h>
#include<string.h>
#include<cs50.h>
#include<stdio.h>

int main (int argc, string argv[])
{
    if(argc==2)
    {
        int characters_count=53;
        string letters ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string password =argv[1];
        char salt[3];
        memcpy(salt,password,2);
        salt[2]='\0';
        char key[5]="\0\0\0\0\0";

        for (int i=0;i<characters_count;i++)
        {
            for(int j=0;j<characters_count;j++)
            {
                 for(int k=0;k<characters_count;k++)
                 {
                     for(int l=0;l<characters_count;l++)
                     {
                         key[0]=letters[l];
                         key[1]=letters[k];
                         key[2]=letters[j];
                         key[3]=letters[i];

                         if(strcmp(crypt(key,salt),password) == 0)
                            {
                             printf("%s\n",key);

                            }
                      }
                 }
            }
        }
    }
}