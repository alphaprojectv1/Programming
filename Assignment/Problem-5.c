/*
5. C Program to find all permutations of string(Same character not repeated).
Input:
Enter any String : xyz
Output:
xyz xzy yxz yzx zyx zxy
*/
#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char tmp=*a;
    *a=*b;
    *b=tmp;
}
void solve(char *ch,int m,int n)
{
    if(m==n)
    {
        printf("%s ",ch);
    }
    else
    {
        for(int i=m;i<=n;i++)
        {
            {
                swap(ch+m,ch+i);
                solve(ch,m+1,n);
                swap(ch+m,ch+i);
            }
        }
    }
}
int main()
{
    char ch[1000];
    scanf("%s",ch);
    solve(ch,0,strlen(ch)-1);
}