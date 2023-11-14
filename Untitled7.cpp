#include <stdio.h>
int main ()
{
   int a[98];
   int i, j, k=0,l, n;
   printf("enter number of elements in an array");
   scanf("%d", &n);
   printf("Enter The Number");
   scanf("%d",&l);
   printf("Enter the elements");
   
   for (i = 0; i < n; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < n; ++i)
   {
     if( a[i]==l)
      k++;
            
}
   printf("Occurance Of a Number Is:");
   	printf("%d",k);
   
   return 0;
}
