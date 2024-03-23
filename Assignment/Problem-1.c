/*1. Write a program in C to count the total number of vowels and consonants in a string.*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    printf("Enter the string: ");
    char st[1000];
    scanf("%s",&st);
    int cntv=0,cntc=0;
    for(int i=0;i<strlen(st);i++)
    {
        char t=tolower(st[i]);
        if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u')
        {
            cntv++;
            continue;
        }
        cntc++;
    }
    printf("Number of vowel: %d\n",cntv);
    printf("Number of consonant: %d\n",cntc);
}