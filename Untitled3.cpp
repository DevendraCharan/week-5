#include <stdio.h>
int main ()
{
   int a[99];
   int i, j, k, n;
   printf("enter number of elements in an array");
   scanf("%d", &n);
   printf("Enter the elements");
   for (i = 0; i < n; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
	  {
         if (a[i] < a[j])
		 {
            k = a[j];
            a[j] = a[i];
            a[i] = k;
         }
      }
   }
   printf("The dccending Order Is:");
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
   return 0;
}
