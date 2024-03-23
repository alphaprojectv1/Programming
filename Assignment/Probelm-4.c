/*
C Program to Sort strings Lexicographically (Dictionary Order)
Input:
Enter 10 words:
aba
sbd
snd
fjd
aas
ase
das
das
csd
eds
Output:
In lexicographical order:
aas
aba
ase
csd
das
das
eds
fjd
sbd
snd
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char st[10][1000];
    printf("Enter 10 words: ");
    for(int i=0;i<10;i++)
    {
        scanf("%s",&st[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(st[i],st[j])>=1)
            {
                char tmp[1000];
                strcpy(tmp,st[i]);
                strcpy(st[i],st[j]);
                strcpy(st[j],tmp);
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%s\n",st[i]);
    }
}