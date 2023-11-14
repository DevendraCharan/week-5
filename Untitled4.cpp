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
   for (i = 0; i < n; ++i)
   {
   
            k = a[i];
            a[i] = a[i+1];
			a[i+1] =k;
			i=i+1;
            
}
   printf("The Interchange Of The Array Is:");
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
   return 0;
}
