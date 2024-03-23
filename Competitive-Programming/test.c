#include<stdio.h>
int main()
{
int a[4];
for(int i=0;i<=3;i++)
{
    a[4-i]=i*i;
}
for(int i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}
}
