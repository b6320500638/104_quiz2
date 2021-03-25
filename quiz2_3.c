#include<stdio.h>
int main()
{
    int x,k=0,j=0;
    char c;
    scanf("%d",&x);
    int s[x];
    for(int i=x-1;i>=0;i--)
    {
        s[i]=x-k;
        k++;
    }

        printf("%d\n",s[x-1]);

}
