#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                printf("%d",a[j]);
                return 0;
            }
        }
    }
    return 0;
}
