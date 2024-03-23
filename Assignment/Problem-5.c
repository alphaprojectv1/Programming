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
        printf("%s\n",ch);
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
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    solve(ch,0,n-1);
}