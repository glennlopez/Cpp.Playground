#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,t;
    int a[1000000];
    scanf("%d",&t);
    while(t--)
    {
        int n,k,c=0;
        scanf("%d%d",&n,&k);

        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
              if((i&j) < k)
              {
                  a[c]=(i&j);
                  c++;
              }
            } 

        }
        int max=a[0];
        for(i=0;i<c;i++)
        {
            
            if(max<a[i])
            max=a[i];
        }
        printf("%d\n",max);
    }
    return 0;
}
