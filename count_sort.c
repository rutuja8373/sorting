#include<stdio.h>
void count(int a[],int n,int r)
{
   int c[20]={0},b[20],i;
   for(i=0;i<n;i++)
   {
      c[a[i]]=c[a[i]]+1;
   }
   for(i=1;i<=r;i++)
   {
      c[i]=c[i]+c[i-1];
   }
   for(i=n-1;i>=0;i--)
   {
      b[c[a[i]]-1]=a[i];
   }
   for(i=0;i<n;i++)
   {
      a[i]=b[i];
   }
}
void main()
{
   int a[20],i,n,max=0;
   printf("Entre limit:");
   scanf("%d",&n);
   printf("\nEnter array elements are:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      if(a[i]>max)
      	  max=a[i];
   }
   count(a,n,max);
   printf("\nSorted array:");
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
}
