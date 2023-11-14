#include <stdio.h>
int main ()
{
   int a[98];
   int i, j, k, n;
   printf("enter number of elements in an array");
   scanf("%d", &n);
   printf("Enter the elements");
   for (i = 0; i < n; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < n/2; ++i)
   {
      k=a[i];
            a[i] = a[n-1-i];
        a[n-i-1]=k;
            
}
   printf("The Reverse Order Of The Array Is:");
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
   return 0;
}
