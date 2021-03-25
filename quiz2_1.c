#include<stdio.h>
int main()
{
    int N,j=1,k=0,check=1,l=0,y;
    scanf("%d",&N);
    y=N;
    for(int i=2;i<=100&&check;i++)
    {
            if(N%(i*i*i)==0)
            {
                k+=1;
                N/=i;
            }
            if(k==1)
            {
                check=0;
            }
            j++;
        k=0;j=1;
    }
    if(check)
           {
               for(int p=y-1;y>=1;p--,y--)
                {
                    N=y;
                    for(int i=2;i<=1000;i++)
                    {
                //while(j<=3)
                //{
                    if(N%(i*i*i)==0)
                        {
                        k+=1;
                        N/=i;
                        }
                    if(k==1)
                    {
                        check=0;
                    }
                   //     j++;
               // }
                    k=0;j=1;
            }
            if(check)
            {
                l++;
            }
            check=1;
           }
        }
    if(check)
    {
         printf("%d",l);
    }
        else
        {printf("Not Cube Free");}
}
