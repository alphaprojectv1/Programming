/*C program to find minimum occurring character in an input string*/
/*
Input:
Enter any string: aaabbbccd
Output:
Lowest frequency of ['d'] is [ 1 ]
*/
#include<stdio.h>
#include<ctype.h>
#include<limits.h>
const int N=1e5;
int main()
{
    printf("Enter any string: ");
    char s[N];
    gets(s);
    int a[26]={0};
    for(int i=0;;i++)
    {
        if(s[i]=='\0')break;
        char tmp=tolower(s[i]);
        a[tmp-'a']++;
    }
    int mn=INT_MAX;
    char ch;
    for(int i=0;i<26;i++)
    {
        if(!a[i])continue;
        if(mn>a[i])
        {
            mn=a[i];
            ch=(i+'a');
        }
    }
    printf("Lowest frequency of [ %c ] is [ %d ]",ch,mn);
}