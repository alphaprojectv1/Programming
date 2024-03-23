/*Write a program in C to split strings by space into words.*/
/*Input:
this is a test string
Output:
this
is
a
test
string
*/
#include<stdio.h>
const int N=1e5;
int main()
{
    char s[N];
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else 
        {
            printf("%c",s[i]);
        }
        i++;
    } 
}