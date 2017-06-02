#include <iostream>
#include <cstdio>
using namespace std;


/* using cpp's max() std function
  int max_of_four(int a, int b, int c, int d){
      return max(max(a,b), max(c,d));
  }
*/

//one line If-statement equivalent
int max_of_four(int a,int b, int c, int d){
    int max;
    max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    if (d>max) max=d;
    return max;
}






int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
