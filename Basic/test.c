// #include<stdio.h>
// int main()
// {
//     int x=5;
//     if(x==3)
//     {
//         printf("3");
//     }
//         if(x==2)
//         {
//             printf("2");
//         }
//         else
//         {
//             printf("1");
//         }
// }
#include<stdio.h>
int main()
{
  double n,dif,pre=0,cur=1,e=0;
  for(int i=1;;i++)
    {
        n=i;
        double res=1,x=i;
        while(x)
            {
             res*=x;
        x--;
            }
            cur+=(1/res);
            res=1;
            dif=cur-pre;
            if(dif<0.00001)
                {
                  break;
                }
            e=cur;
            pre=cur;
    }
    printf("%lf",e);
}