#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1,n2,n3,n4,n5,s,m;
   printf("give the five notes:\n");
   scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
   s=n1+n2+n3+n4+n5;
   m=s/5;
   printf("the sum is = %.1f \n",s);
 printf("the avg is = %.1f",m);
    return 0;
}
