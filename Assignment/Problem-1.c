/*1. Write a program in C to count the total number of vowels and consonants in a string.*/
#include<stdio.h>
#include<string.h>
int cntc(char s[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if((s[i]!='A' && s[i]!='a') && (s[i]!='E' && s[i]!='e') && (s[i]!='I' && s[i]!='i')
        && (s[i]!='O' && s[i]!='o') && (s[i]!='U' && s[i]!='u'))
        {
            cnt++;
        }
    } 
    return cnt;
}
int cntv(char s[],int n)
{
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if((s[i]=='A'||s[i]=='a') || (s[i]=='E'||s[i]=='e') || (s[i]=='I'||s[i]=='i')
        || (s[i]=='O'||s[i]=='o') || (s[i]=='U'||s[i]=='u'))
        {
            cnt++;
        }
  }
  return cnt;
}
int main()
{
    int n;
    printf("Total Character of string: ");
    scanf("%d",&n);
    printf("Enter the string: ");
    char st[n];
    scanf("%s",&st);
    printf("Number of vowel: %d\n",cntv(st,n));
    printf("Number of consonant: %d\n",cntc(st,n));
}