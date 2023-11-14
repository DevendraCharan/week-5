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
         if (a[i] > a[j])
		 {
            k = a[i];
            a[i] = a[j];
            a[j] = k;
         }
      }
   }
   printf("The Minimum Is:");
   printf("%d",a[0]);
   printf("The Maximim Is:");
   printf("%d",a[n-1]);
   for (i=0;i<n;i++)
   {
   	k=a[i]+a[i+1];	
   }
   printf("The Avg Of The Elements Is:");
   printf("%d",k/n);
   return 0;
}
