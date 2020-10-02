#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  int a;
  int c=0;
  scanf("%d",&a);
  int h[a];
  for(int i=0;i<a;i++)
  {
      scanf("%d",&h[i]);
  }
  for(int j=0;j<a;j++)
  {
      for(int l=0;l<a-1;l++)
      {
          if(h[l]>=h[l+1])
          {
              int k;
              k=h[l];
              h[l]=h[l+1];
              h[l+1]=k;
            c++;
          }
      }
  }
  printf("Array is sorted in %d swaps.\n",c);
  printf("First Element: %d\n",h[0]);
  printf("Last Element: %d",h[a-1]);

    return 0;
}

